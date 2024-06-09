#include "splashkit.h"
#include "ui_function.h"
#include <Windows.h>
#include <shellapi.h>

int main()
{
    sound_effect welcome_sound = load_sound_effect("Welcome", "Welcome.mp3");
    play_sound_effect(welcome_sound);
    Screen current_screen = Screen::FIRST_PAGE;

    open_window("Programming Learning Platform", 800, 700);
    

    while (!window_close_requested("Programming Learning Platform"))
    {
        process_events();
        clear_screen(COLOR_WHITE);

        // Draw current screen
        switch (current_screen)
        {
            case Screen::FIRST_PAGE:
                draw_first_page();
                break;
            case Screen::DEVELOPER_PAGE:
                draw_developer_page();
                break;
            case Screen::LANGUAGE_SELECTION:
                draw_language_selection_page();
                break;
            case Screen::C_INTRO:
                draw_c_intro();
                break;
            case Screen::MODULE_PAGE:
                draw_module_page();
                break;
            case Screen::SETUP_ENVIRONMENT:
                draw_Setup_Environment();
                break;
            case Screen::SHAPE_DRAWING:
                draw_shape_drawing();
                break;
            case Screen::HELLO_WORLD:
                draw_Hello_World();
                break;
            case Screen::NOT_AVAILABLE:
                draw_not_available();
                break;
            case Screen::AREA_OF_CIRCLE:
                draw_area_of_circle();
                break;
            case Screen::SHAPE_SHIFTER:
                draw_shape_shifter();
                break;
            case Screen::CONGRATULATIONS:
                draw_congratulations();
                break;
        }

        // Handle mouse click events
        if (mouse_clicked(LEFT_BUTTON))
        {
            //double mx = mouse_x(), my = mouse_y();

            // Button click logic for FIRST_PAGE
            if (current_screen == Screen::FIRST_PAGE)
            {
                if (is_mouse_in_rect(50, 250, 200, 50))
                {
                    current_screen = Screen::LANGUAGE_SELECTION;
                }
                else if (is_mouse_in_rect(50, 350, 200, 50))
                {
                    current_screen = Screen::DEVELOPER_PAGE;
                }
                else if (is_mouse_in_rect(50, 450, 200, 50))
                {
                    break;
                }
                
                
            }
            // Button click logic for DEVELOPER_PAGE
            else if (current_screen == Screen::DEVELOPER_PAGE)
            {
                if (is_mouse_in_rect(300, 580, 200, 50))
                {
                    current_screen = Screen::FIRST_PAGE;
                }
               
                
            }
            // Button click logic for LANGUAGE_SELECTION
            else if (current_screen == Screen::LANGUAGE_SELECTION)
            {
                if (is_mouse_in_rect(150, 150, 200, 50))
                {
                    current_screen = Screen::C_INTRO;
                }
                else if (is_mouse_in_rect(375, 150, 200, 50))
                {
                    current_screen = Screen::NOT_AVAILABLE;
                }
                else if (is_mouse_in_rect(150, 230, 200, 50))
                {
                    current_screen = Screen::NOT_AVAILABLE;
                }
                else if (is_mouse_in_rect(375, 230, 200, 50))
                {
                    current_screen = Screen::NOT_AVAILABLE;
                }
                else if (is_mouse_in_rect(100, 500, 200, 50))
                {
                    current_screen = Screen::FIRST_PAGE;
                }
                else if (is_mouse_in_rect(500, 500, 200, 50))
                {
                    break;
                }
            }

            // Button click logic for C_INTRO
            else if (current_screen == Screen::C_INTRO)
            {
                if (is_mouse_in_rect(250, 300, 300, 60))
                {
                    current_screen = Screen::MODULE_PAGE;
                }
                else if (is_mouse_in_rect(100, 500, 200, 50))
                {
                    current_screen = Screen::LANGUAGE_SELECTION;
                }
                else if (is_mouse_in_rect(500, 500, 200, 50))
                {
                    break;
                }
            }
            // Button click logic for MODULE_PAGE
            else if (current_screen == Screen::MODULE_PAGE)
            {
                if (is_mouse_in_rect(65, 100, 35, 35)) // If "01" button is clicked
                {
                    current_screen = Screen::SETUP_ENVIRONMENT;
                }
                else if (is_mouse_in_rect(65, 150, 35, 35)) // If "02" button is clicked
                {
                    current_screen = Screen::HELLO_WORLD;
                }
                else if (is_mouse_in_rect(65, 200, 35, 35)) // If "03" button is clicked
                {
                    current_screen = Screen::SHAPE_DRAWING; 
                }
                else if (is_mouse_in_rect(65, 250, 35, 35)) // If "04" button is clicked
                {
                    current_screen = Screen::AREA_OF_CIRCLE;  // Navigate to the Area of Circle page
                }
                else if (is_mouse_in_rect(65, 300, 35, 35)) // If "05" button is clicked
                {
                    current_screen = Screen::SHAPE_SHIFTER;  // Navigate to the Area of Circle page
                }
                else if (is_mouse_in_rect(65, 350, 35, 35)) // If "05" button is clicked
                {
                    current_screen = Screen::CONGRATULATIONS;  // Navigate to the Area of Circle page
                }
                else if (is_mouse_in_rect(100, 500, 200, 50)) // If "06" button is clicked
                {
                    current_screen = Screen::C_INTRO;  // Navigate to the Area of Circle page
                }
                else if (is_mouse_in_rect(500, 500, 200, 50)) // If "06" button is clicked
                {
                   break;
                }
               
            }
            // Button click logic for SETUP_ENVIRONMENT
            else if (current_screen == Screen::SETUP_ENVIRONMENT)
            {
                if (is_mouse_in_rect(100, 500, 200, 50))
                {
                    current_screen = Screen::MODULE_PAGE;
                }
                else if (is_mouse_in_rect(500, 500, 200, 50))
                {
                    current_screen = Screen::HELLO_WORLD;
                }
                if (is_mouse_in_rect(100, 175, 350, 30)) 
                {
                    ShellExecuteA(NULL, "open", "https://splashkit.io/installation/windows/mingw/step-1/", NULL, NULL, SW_SHOWNORMAL);
                }
                else if (is_mouse_in_rect(100, 225, 350, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://splashkit.io/installation/windows/mingw/step-2/", NULL, NULL, SW_SHOWNORMAL);
                }
                else if (is_mouse_in_rect(100, 275, 350, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://splashkit.io/installation/windows/mingw/step-3/", NULL, NULL, SW_SHOWNORMAL);
                }
                else if (is_mouse_in_rect(100, 325, 350, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://splashkit.io/installation/windows/mingw/step-4/", NULL, NULL, SW_SHOWNORMAL);
                }
            }
            // Button click logic for HELLO_WORLD
            else if (current_screen == Screen::HELLO_WORLD)
            {
                if (is_mouse_in_rect(100, 500, 200, 50))
                {
                    current_screen = Screen::SETUP_ENVIRONMENT;
                }
                else if (is_mouse_in_rect(500, 500, 200, 50))
                {
                    current_screen = Screen::SHAPE_DRAWING;
                }
                else if (is_mouse_in_rect(210, 440, 300, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://youtu.be/T3zGofzFyXU", NULL, NULL, SW_SHOWNORMAL);
                }
            }
            // Button click logic for SHAPE_DRAWING
            else if (current_screen == Screen::SHAPE_DRAWING)
            {
                if (is_mouse_in_rect(100, 500, 200, 50)) // If "Previous" button is clicked
                {
                    current_screen = Screen::HELLO_WORLD; // Navigate to the previous page
                }
                else if (is_mouse_in_rect(500, 500, 200, 50)) // If "Next" button is clicked
                {
                    current_screen = Screen::AREA_OF_CIRCLE; // Navigate to the next page
                }
            }
            // Button click logic for AREA_OF_CIRCLE
            else if (current_screen == Screen::AREA_OF_CIRCLE)
            {
                if (is_mouse_in_rect(100, 500, 200, 50)) // If "Previous" button is clicked
                {
                    current_screen = Screen::SHAPE_DRAWING; // Navigate to the previous page
                }
                 else if (is_mouse_in_rect(500, 500, 200, 50)) // If "Next" button is clicked
                {
                    current_screen = Screen::SHAPE_SHIFTER; // Navigate to the next page or another screen
                }
                else if (is_mouse_in_rect(235, 200, 230, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://github.com/maneeshaking/C-learning-platform/blob/main/area_of_circle.cpp", NULL, NULL, SW_SHOWNORMAL);
                }
            }
            else if (current_screen == Screen::SHAPE_SHIFTER)
            {
                if (is_mouse_in_rect(100, 500, 200, 50)) // If "Back" button is clicked
                {
                    current_screen = Screen::AREA_OF_CIRCLE; // Navigate to the previous page
                }
                else if (is_mouse_in_rect(500, 500, 200, 50)) // If "Next" button is clicked
                {
                    current_screen = Screen::CONGRATULATIONS; // Navigate to the next page
                }
                else if (is_mouse_in_rect(245, 370, 220, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://github.com/maneeshaking/C-learning-platform/blob/main/shape-shifter/program.cpp", NULL, NULL, SW_SHOWNORMAL);
                }
                else if (is_mouse_in_rect(225, 420, 250, 30)) // If "Demo" button is clicked
                {
                    // Open www.youtube.com in the default browser
                    ShellExecuteA(NULL, "open", "https://youtu.be/0j5pnUVvrIE", NULL, NULL, SW_SHOWNORMAL);
                }
            }

            else if (current_screen == Screen::CONGRATULATIONS)
            {
                if (is_mouse_in_rect(100, 500, 200, 50)) // If "Back" button is clicked
                {
                    current_screen = Screen::SHAPE_SHIFTER; // Navigate back to the first page
                }
                    else if (is_mouse_in_rect(500, 500, 200, 50)) // If "Exit" button is clicked
                {
                    break; // Exit the program
                }
            }

            // Button click logic for NOT_AVAILABLE
            else if (current_screen == Screen::NOT_AVAILABLE)
            {
                if (is_mouse_in_rect(100, 500, 200, 50))
                {
                    current_screen = Screen::LANGUAGE_SELECTION; 
                }
                else if (is_mouse_in_rect(500, 500, 200, 50))
                {
                    break;
                }
            }

            
        }

        refresh_screen(60);
    }

    return 0;
}
