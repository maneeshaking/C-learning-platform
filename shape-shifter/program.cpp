#include "splashkit.h"

// Define constants for screen width and height
const int SCREEN_WIDTH = 1228;
const int SCREEN_HEIGHT = 717;
const double STEPSIZE = 5;

int main()
{
    // Declare local variables for circle's center coordinates
    double x = SCREEN_WIDTH / 2;
    double y = SCREEN_HEIGHT / 2;

    // Open a window with the specified dimensions
    open_window("Refine Shape Shifter", SCREEN_WIDTH, SCREEN_HEIGHT);

    // Load background image
    bitmap background = load_bitmap("background", "background.jpeg");
    // Load bee image
    bitmap bee = load_bitmap("bee", "bee.png");

    // Main game loop
    do
    {
        // Process events
        process_events();

        // Update bee's coordinates based on keyboard input
        if (key_down(LEFT_KEY))
        {
            x -= STEPSIZE;
        }
        if (key_down(RIGHT_KEY))
        {
            x += STEPSIZE;
        }
        if (key_down(UP_KEY))
        {
            y -= STEPSIZE;
        }
        if (key_down(DOWN_KEY))
        {
            y += STEPSIZE;
        }
        if (mouse_clicked(LEFT_BUTTON))
        {
            write_line("Press left Mouse Button again to quit the game.");
            if (mouse_clicked(LEFT_BUTTON))
            {
                break;
            }
        }
        
        // Ensure the bee stays within the bounds of the window
        if (x < 0)
        {
            x = 0;
        }
        if (x + bitmap_width(bee) > SCREEN_WIDTH)
        {
            x = SCREEN_WIDTH - bitmap_width(bee);
        }
        if (y < 0)
        {
            y = 0;
        }
        if (y + bitmap_height(bee) > SCREEN_HEIGHT)
        {
            y = SCREEN_HEIGHT - bitmap_height(bee);
        }

        // Clear the screen
        clear_screen(COLOR_WHITE);

        // Draw the background
        draw_bitmap(background, 0, 0);

        // Draw the bee
        draw_bitmap(bee, x, y);

        // Refresh the screen at 60 FPS
        refresh_screen();
        delay(17); // ~60 FPS
    } while (!quit_requested());

    // Close the window
    close_window("Refine Shape Shifter");

    return 0;
}
