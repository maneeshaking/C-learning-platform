#ifndef UI_FUNCTION_H
#define UI_FUNCTION_H



// Existing function prototypes...

void draw_first_page();
void draw_developer_page();
void draw_c_intro();
void draw_not_available();
void draw_language_selection_page();
void draw_module_page();
void draw_Setup_Environment();
void draw_Hello_World();
void draw_shape_drawing();
void draw_area_of_circle();
void draw_shape_shifter();
void draw_congratulations();
bool is_mouse_in_rect(double x, double y, double width, double height);

// Existing enum definition...
enum class Screen
{
    FIRST_PAGE,
    DEVELOPER_PAGE,
    LANGUAGE_SELECTION,
    C_INTRO,
    MODULE_PAGE,
    SETUP_ENVIRONMENT,
    HELLO_WORLD,
    SHAPE_DRAWING,
    NOT_AVAILABLE,
    AREA_OF_CIRCLE,
    SHAPE_SHIFTER,
    CONGRATULATIONS

};

#endif // UI_FUNCTION_H
