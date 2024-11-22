/*Sasha needs to implement a structure named RGBColor that encapsulates the red, green, and blue components using 4-bit unsigned integers. Additionally, she needs to create functions to set and get individual color components. So provide her a code that can accomplish her task.

Input format :
The first line of the input contains an integer 'r' which represents the Red Component.

The second line of the input contains an integer 'g' which represents the Green Component.

The third line of the input contains an integer 'b' which represents the Blue Component.

﻿The program should handle inputs within the valid range of 0 to 15.

Output format :
For each invalid range specified, it displays the message: "Use default value (0-15)."

The first line of the output displays " Red : 'x' "

The second line of the output displays " Green : 'x' "

The third line of the output displays " Blue : 'x' "

'x' - represents the value of the component.

*/

#include <stdio.h>

// Define a structure to represent RGB color
struct RGBColor {
    unsigned int red : 4;    // 4-bit red component
    unsigned int green : 4;  // 4-bit green component
    unsigned int blue : 4;   // 4-bit blue component
};

// Function to set the red component of RGB color
void setRed(struct RGBColor *color, unsigned int value) {
    if (value <= 15) {
        color->red = value;
    } else {
        printf("Use default value (0-15).\n");
        color->red = 0;
    }
}

// Function to set the green component of RGB color
void setGreen(struct RGBColor *color, unsigned int value) {
    if (value <= 15) {
        color->green = value;
    } else {
        printf("Use default value (0-15).\n");
        color->green = 0;
    }
}

// Function to set the blue component of RGB color
void setBlue(struct RGBColor *color, unsigned int value) {
    if (value <= 15) {
        color->blue = value;
    } else {
        printf("Use default value (0-15).\n");
        color->blue = 0;
    }
}

// Function to get the red component of RGB color
unsigned int getRed(struct RGBColor *color) {
    return color->red;
}

// Function to get the green component of RGB color
unsigned int getGreen(struct RGBColor *color) {
    return color->green;
}

// Function to get the blue component of RGB color
unsigned int getBlue(struct RGBColor *color) {
    return color->blue;
}

int main() {
    struct RGBColor myColor;

    // Input color components from the user
    unsigned int redInput, greenInput, blueInput;
    scanf("%u", &redInput);
    scanf("%u", &greenInput);
    scanf("%u", &blueInput);

    // Set color components
    setRed(&myColor, redInput);
    setGreen(&myColor, greenInput);
    setBlue(&myColor, blueInput);

    // Get and display color components
    printf("Red: %u\n", getRed(&myColor));
    printf("Green: %u\n", getGreen(&myColor));
    printf("Blue: %u\n", getBlue(&myColor));

    return 0;
}
