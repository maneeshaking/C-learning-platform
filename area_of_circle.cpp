#include "splashkit.h"
#include <string>

#define phi 3.14159
// Calculate resultant STROUHAL air speed by reading in freq and amp
double calculate_area(int radius)
{
    double area;
    area = phi * radius * radius;
    return area;
}

// outputs the name of bird with its calculated air speed based on the given freequency and amplitude parameters.
void output_area( int radius)
{
    write("Circle's Area is ");
    write_line(calculate_area(radius));
}

// return a string of the input line from the terminal
string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

// Read an integer value from the user based on the given prompt
// Convert the string input to an integer and return it
int read_integer(string prompt)
{
    string line;
    line = read_string(prompt);
    return convert_to_integer(line);
}

int main()
{
    // Declare variables
    int radius;

    //input radius of circle
    radius = read_integer("please enter radius of circle: ");

    // Output to teminal
    
    write_line("--------------------------- ");
    output_area(radius); //Output Birds name and airspeed
    write_line("");
    write_line("Thanks for you!");

    return 0;
}

