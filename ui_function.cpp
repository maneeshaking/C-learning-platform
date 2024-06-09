#include "splashkit.h"
#include "ui_function.h"
#include <string>

using namespace std;

// Helper function to load fonts only once
void load_fonts()
{
    if (!has_font("ArialB"))
    {
        load_font("ArialB", "ARIBLK.TTF"); // Load Arial bold font
    }
    if (!has_font("Arial"))
    {
        load_font("Arial", "ARIAL.TTF"); // Load Arial regular font
    }
}

// Draw the first page with animation and buttons
void draw_first_page()
{
    bitmap right_image = load_bitmap("right_image", "languages.png");
    bitmap welcome_image = load_bitmap("welcome_image", "learn-49.png");
    
    load_fonts();
    clear_screen(COLOR_WHITE);
    draw_text("Hello, Welcome to Programming Learning Platform", COLOR_BLACK, "ArialB", 15, 250, 155, option_to_screen());
    
    draw_bitmap(right_image, 250, 160);
    draw_bitmap(welcome_image, 0, 0);

    // Draw buttons
    fill_rectangle(COLOR_GREEN_YELLOW, 50, 250, 200, 50);
    draw_text("TUTORIALS", COLOR_BLACK, "Arial", 25, 80, 265, option_to_screen());

    fill_rectangle(COLOR_SKY_BLUE, 50, 350, 200, 50);
    draw_text("DEVELOPER", COLOR_BLACK, "Arial", 25, 80, 365, option_to_screen());

    // Draw exit button
    fill_rectangle(COLOR_DARK_RED, 50, 450, 200, 50);
    draw_text("EXIT", COLOR_WHITE, "Arial", 25, 80, 465, option_to_screen());
   
}

void draw_developer_page() {
    load_fonts();
    clear_screen(COLOR_WHITE);

    fill_rectangle(COLOR_LIGHT_YELLOW, 50, 30, 700, 540);

    // Draw developer's photo
    bitmap developer_photo = load_bitmap("developer_photo", "profile.png");
    draw_bitmap(developer_photo, 300, 50);

    // Define developer's message
    string message1 = "  Hello! I'm Maneesha Dewmina. I love coding and creating awesome ";
    string message2 = "projects. This C++ learning application was made by me as a final  ";
    string message3 = "project in the trimester of my first year on campus. My heartfelt   ";
    string message4 = "thanks to the Our Lecturer,  ";
    string message5 = "             -Mr.Sanjeewa Ekanayake";
    string message6 = "who guided me for this. ";
    string message6_1="and to my friends,";
    string message7 = "             -Pasindu Dilshan(KAP)";
    string message8 = "             -Indura Nawarathna";
    string message9 = "Who supported me when I could not solve some of the problems that   ";
    string message10= "arose here.";

    // Draw developer's message
    draw_text(message1, COLOR_BLACK, "Arial", 20, 120, 200, option_to_screen());
    draw_text(message2, COLOR_BLACK, "Arial", 20, 120, 220, option_to_screen());
    draw_text(message3, COLOR_BLACK, "Arial", 20, 120, 240, option_to_screen());
    draw_text(message4, COLOR_BLACK, "Arial", 20, 120, 260, option_to_screen());
    draw_text(message5, COLOR_BLACK, "ArialB", 20, 120, 280, option_to_screen());
    draw_text(message6, COLOR_BLACK, "Arial", 20, 120, 310, option_to_screen());
    draw_text(message6_1, COLOR_BLACK, "Arial", 20, 120, 340, option_to_screen());
    draw_text(message7, COLOR_BLACK, "Arial", 20, 120, 370, option_to_screen());
    draw_text(message8, COLOR_BLACK, "Arial", 20, 120, 400, option_to_screen());
    draw_text(message9, COLOR_BLACK, "Arial", 20, 120, 430, option_to_screen());
    draw_text(message10, COLOR_BLACK, "Arial", 20, 120, 450, option_to_screen());

    // Define developer's contact details
    string email = "Contact me at: mdewmine.2004@gmail.com";
    string number ="Phone: +94 719053246";

    // Draw developer's contact details
    draw_text(email, COLOR_BLACK, "Arial", 20, 120, 490, option_to_screen());
    draw_text(number, COLOR_BLACK, "Arial", 20, 120, 510, option_to_screen());

    // Draw BACK button
    fill_rectangle(COLOR_DARK_RED, 300, 580, 200, 50);
    draw_text("BACK", COLOR_WHITE, "Arial", 25, 360, 590, option_to_screen());
}


void draw_c_intro() {
    load_fonts();
    clear_screen(COLOR_WHITE);

    // Define topic and paragraph text
    string topic = "C++ Introduction";
    string lines[] = {
        "   C++, developed by Bjarne Stroustrup, is a general-purpose programming language",
        "and is considered an advanced version of the C programming language. It offers",
        "rich library support in the form of a Standard Template Library. The language is",
        "widely used in various GUI platforms, Cloud/Distributed Systems, Operating Systems,",
        "real-time simulations, etc. Moreover, as C++ is an object-oriented programming language,",
        "it allows you to implement real-time problems through OOPS concepts."
    };

    // Draw topic text at the top with larger size and bold style
    draw_text(topic, COLOR_BLACK, "ArialB", 50, 150, 50, option_to_screen());
    
    // Draw paragraph text below the topic text
    int y_offset = 120;
    for (const string &line : lines)
    {
        draw_text(line, COLOR_BLACK, "Arial", 17, 80, y_offset, option_to_screen());
        y_offset += 20;
    }

    fill_rectangle(COLOR_YELLOW, 250, 300, 300, 60);
    draw_text("MODULES", COLOR_BLACK, "ArialB", 25, 325, 315, option_to_screen());

    // Draw back and exit buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("EXIT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_not_available() {
    load_fonts();
    clear_screen(COLOR_WHITE);

    // Define topic and paragraph text
    string available = "~+++------NOT AVAILABLE YET------+++~";

    // Draw topic text at the top with larger size and bold style
    draw_text(available, COLOR_BLACK, "Arial", 20, 80, 250, option_to_screen());

    // Draw back and exit buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("EXIT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_language_selection_page()
{
    load_fonts();
    clear_screen(COLOR_WHITE);
    draw_text("Choose a language:", COLOR_BLACK, "ArialB", 45, 50, 50, option_to_screen());

    // Draw language buttons
    struct LanguageButton
    {
        string text;
        double x, y;
    };
    LanguageButton buttons[] = {
        {"C++", 150, 150},
        {"Python", 375, 150},
        {"Ruby", 150, 230},
        {"C#", 375, 230}
    };

    for (const auto &button : buttons)
    {
        fill_rectangle(COLOR_GREEN_YELLOW, button.x, button.y, 200, 50);
        draw_text(button.text, COLOR_BLACK, "Arial", 25, button.x + 25, button.y + 15, option_to_screen());
    }

    // Draw back and exit buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("EXIT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_module_page() {
    load_fonts();
    clear_screen(COLOR_WHITE);

    fill_rectangle(COLOR_LIGHT_YELLOW, 50, 90, 700, 400);

    // Define topic and paragraph text
    string topic = "Modules";
    string lines[] = {
        "Setup Environment", 
        "Write a program in C++ to print a Hello World.", 
        "Write a program in C++ to Shape Drawing.", 
        "Write a program in C++ to calculate the area of a circle.",  
        "Make a shape shifter in C++.",
        "congratulations!!"
    };

    // Draw topic text at the top with larger size and bold style
    draw_text(topic, COLOR_BLACK, "ArialB", 30, 150, 50, option_to_screen());
    
    // Draw module buttons with descriptions
    int y_offset = 100;
    for (int i = 0; i < 6; ++i)
    {
        fill_rectangle(COLOR_WHITE_SMOKE, 65, y_offset, 35, 35);
        draw_text(to_string(i + 1).insert(0, 2 - to_string(i + 1).length(), '0'), COLOR_BLACK, "Arial", 15, 75, y_offset + 10, option_to_screen());
        draw_text(lines[i], COLOR_BLACK, "Arial", 20, 105, y_offset + 5, option_to_screen());
        y_offset += 50;
    }

    // Draw back and exit buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("EXIT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_Setup_Environment()
{
    load_fonts();
    clear_screen(COLOR_WHITE);
    
    /**string lines[] = {
        "Step 01 : Install the MSYS2 Terminal",
        "         https://splashkit.io/installation/windows/mingw/step-1/",
        "Step 02 : Install SplashKit SDK",
        "         https://splashkit.io/installation/windows/mingw/step-2/",
        "Step 03 : Install Visual Studio Code",
        "         https://splashkit.io/installation/windows/mingw/step-3/",
        "Step 04 : Install Language Tools",
        "         https://splashkit.io/installation/windows/mingw/step-4/"
    };**/


    fill_rectangle(COLOR_WHITE, 100, 175, 350, 30);
    fill_rectangle(COLOR_RED, 100, 195, 350, 1);
    draw_text("Step 01 : Install the MSYS2 Terminal", COLOR_BLACK, "Arial", 15, 50, 155, option_to_screen());
    draw_text("             https://splashkit.io/installation/windows/mingw/step-1/", COLOR_BLACK, "Arial", 15, 50, 175, option_to_screen());

    fill_rectangle(COLOR_WHITE, 100, 225, 350, 30);
    fill_rectangle(COLOR_RED, 100, 245, 350, 1);
    draw_text("Step 02 : Install SplashKit SDK", COLOR_BLACK, "Arial", 15, 50, 205, option_to_screen());
    draw_text("             https://splashkit.io/installation/windows/mingw/step-2/", COLOR_BLACK, "Arial", 15, 50, 225, option_to_screen());

    fill_rectangle(COLOR_WHITE, 100, 275, 350, 30);
    fill_rectangle(COLOR_RED, 100, 295, 350, 1);
    draw_text("Step 03 : Install Visual Studio Code", COLOR_BLACK, "Arial", 15, 50, 255, option_to_screen());
    draw_text("             https://splashkit.io/installation/windows/mingw/step-3/", COLOR_BLACK, "Arial", 15, 50, 275, option_to_screen());

    fill_rectangle(COLOR_WHITE, 100, 325, 350, 30);
    fill_rectangle(COLOR_RED, 100, 345, 350, 1);
    draw_text("Step 04 : Install Language Tools", COLOR_BLACK, "Arial", 15, 50, 305, option_to_screen());
    draw_text("             https://splashkit.io/installation/windows/mingw/step-4/", COLOR_BLACK, "Arial", 15, 50, 325, option_to_screen());


    draw_text("01. Setup Environment", COLOR_BLACK, "ArialB", 30, 150, 50, option_to_screen());
    draw_text("Follow this four steps for setup our C++ programming environment", COLOR_BLACK, "ArialB", 20, 50, 100, option_to_screen());

    /**int y_offset = 145;
    for (const string &line : lines)
    {
        draw_text(line, COLOR_BLACK, "Arial", 20, 145, y_offset, option_to_screen());
        y_offset += 25;
    }**/

    // Draw previous and next buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("NEXT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
} 

void draw_Hello_World()
{
    load_fonts();
    clear_screen(COLOR_WHITE);

    draw_text("02. Write a program in C++ to print a Hello World", COLOR_BLACK, "ArialB", 25, 30, 50, option_to_screen());
    draw_text("We start programming with any language, Hello World program is our first ", COLOR_BLACK, "Arial", 20, 80, 105, option_to_screen());
    draw_text("program. Because it is very easy. Therefore we use this Hello world program ", COLOR_BLACK, "Arial", 20, 50, 135, option_to_screen());
    draw_text("for check our working environment. Try this yourself from the following screenshots.", COLOR_BLACK, "Arial", 20, 50, 165, option_to_screen());

    bitmap hello_worldc = load_bitmap("hello_worldc", "hello_worldc.png");
    bitmap hello_worldo = load_bitmap("hello_worldo", "hello_worldo.png");

    draw_bitmap(hello_worldc, 85, 210);
    draw_bitmap(hello_worldo, 420, 352);

    draw_text("C++ code", COLOR_BLACK, "Arial", 15, 88, 402, option_to_screen());
    draw_text("Output", COLOR_BLACK, "Arial", 15, 423, 402, option_to_screen());


    fill_rectangle(COLOR_WHITE, 210, 440, 300, 30);
    fill_rectangle(COLOR_RED, 210, 470, 300, 1);
    draw_text("Click heer to Watch video", COLOR_BLACK, "Arial", 25, 215, 445, option_to_screen());

    // Draw previous button
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    // Draw next button
    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("NEXT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_shape_drawing()
{
    load_fonts();
    clear_screen(COLOR_WHITE);

    draw_text("03. Shape Drawing using C++", COLOR_BLACK, "ArialB", 25, 30, 50, option_to_screen());
    draw_text("This module will teach you how to draw shapes using C++.", COLOR_BLACK, "Arial", 20, 50, 100, option_to_screen());
   
    bitmap shape_drawingc = load_bitmap("shape_drawingc", "shape_drawingc.png");
    bitmap shape_drawingo = load_bitmap("shape_drawingo", "shape_drawingo.png");

    draw_bitmap(shape_drawingc, 50, 180);
    draw_bitmap(shape_drawingo, 425, 167);

    draw_text("C++ code", COLOR_BLACK, "Arial", 15, 88, 435, option_to_screen());
    draw_text("Output", COLOR_BLACK, "Arial", 15, 435, 435, option_to_screen());

    

    // Draw previous and next buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("NEXT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_area_of_circle()
{
    load_fonts();
    clear_screen(COLOR_WHITE);

    string topic1 = "04. Write a program in C++ to calculate ";
    string topic2 = "the area of a circle";
    string line1 = "Reads an integer radius from the user, calculates the area of a circle using ";
    string line2 = "a modified formula with a constant, and displays the result.";
                         

    draw_text(topic1, COLOR_BLACK, "ArialB", 25, 50, 50, option_to_screen());
    draw_text(topic2, COLOR_BLACK, "ArialB", 25, 100, 75, option_to_screen());
    draw_text(line1, COLOR_BLACK, "Arial", 20, 50, 110, option_to_screen());
    draw_text(line2, COLOR_BLACK, "Arial", 20, 50, 130, option_to_screen());

    
    bitmap areao = load_bitmap("areao", "areao.png");

    draw_bitmap(areao, 225, 290);

    
    draw_text("Output", COLOR_BLACK, "Arial", 15, 355, 417, option_to_screen());

    fill_rectangle(COLOR_WHITE, 235, 200, 230, 30);
    fill_rectangle(COLOR_RED, 255, 225, 230, 3);
    draw_text("Click heer to Show C++ Code", COLOR_BLACK, "Arial", 15, 275, 205, option_to_screen());



    // Draw previous and next buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("Next", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_shape_shifter() {
    load_fonts();
    clear_screen(COLOR_WHITE);

    // Define topic and paragraph text
    string topic = "05. Make a shape shifter in C++";
    string lines[] = {
        "In this module, you will learn how to create a simple shape shifter program in C++.",
        "A shape shifter is a program that takes an input shape and transforms it into",
        "a different shape based on certain rules or algorithms. "
    };

    // Draw topic text at the top with larger size and bold style
    draw_text(topic, COLOR_BLACK, "ArialB", 30, 150, 50, option_to_screen());
    
    // Draw paragraph text below the topic text
    int y_offset = 120;
    for (const string &line : lines)
    {
        draw_text(line, COLOR_BLACK, "Arial", 17, 80, y_offset, option_to_screen());
        y_offset += 20;
    }

    bitmap shape_shifter = load_bitmap("shape_shifter", "shape_shifter.png");
    draw_bitmap(shape_shifter, 225, 190);

    
    fill_rectangle(COLOR_WHITE, 245, 370, 220, 30);
    fill_rectangle(COLOR_RED, 245, 400, 220, 3);
    draw_text("Click heer to Show C++ Code", COLOR_BLACK, "Arial", 15, 250, 380, option_to_screen());

    fill_rectangle(COLOR_WHITE, 225, 420, 250, 30);
    fill_rectangle(COLOR_RED, 225, 450, 250, 3);
    draw_text("Click heer to Show Output sample video", COLOR_BLACK, "Arial", 15, 225, 430, option_to_screen());

    // Draw back and exit buttons
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("NEXT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}

void draw_congratulations()
{
    load_fonts();
    clear_screen(COLOR_WHITE);

    string topic1 = "Congratulations!! ";
    string line1 = "       You have successfully finished learning C++ here. Learn more about C++ by   ";
    string line2 = "doing self study. Create your own programs using what you learn. My best wishes  ";
    string line3 = "for your future of coding life. ";
                         

    draw_text(topic1, COLOR_BLACK, "ArialB", 25, 50, 50, option_to_screen());
    draw_text(line1, COLOR_BLACK, "Arial", 20, 50, 110, option_to_screen());
    draw_text(line2, COLOR_BLACK, "Arial", 20, 50, 130, option_to_screen());
    draw_text(line3, COLOR_BLACK, "Arial", 20, 50, 150, option_to_screen());

    
    bitmap congratulations= load_bitmap("congratulations", "congratulations.png");

    
    draw_bitmap(congratulations, 170, 180);



    
    fill_rectangle(COLOR_SKY_BLUE, 100, 500, 200, 50);
    draw_text("BACK", COLOR_BLACK, "Arial", 25, 150, 505, option_to_screen());

    fill_rectangle(COLOR_RED, 500, 500, 200, 50);
    draw_text("EXIT", COLOR_BLACK, "Arial", 25, 575, 505, option_to_screen());
}



// Check if the mouse is within a specified rectangle
bool is_mouse_in_rect(double x, double y, double width, double height)
{
    point_2d mouse_pos = mouse_position();
    return mouse_pos.x >= x && mouse_pos.x <= x + width && mouse_pos.y >= y && mouse_pos.y <= y + height;
}
