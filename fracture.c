//********************************************************
// assignment1_amanda_freel.c
// Author: Amanda Freel
// UCF ID: 5677773
// Date: 09/07/24
// Class: COP 3223, Professor Parra
// Purpose: This program receives input from the user (coordinate points) and calculates several mathematical aspects
// including distance, perimeter, area, height, and width. 
// //********************************************************

#include <stdio.h> 
#include <math.h>

// define pi as given in the assignment 
#define PI 3.14159

// declare functions
double askForUserInput();      
double calculateDistance();  
double calculatePerimeter();   
double calculateArea();
double calculateWidth();
double calculateHeight();

// declare variables locally inside functions
double x1, y1_coord, x2, y2_coord;  // These will be initialized by askForUserInput

// list functions under main
int main() { 
    askForUserInput();         // Get coordinates from the user
    calculateDistance();  
    calculatePerimeter();          
    calculateArea();
    calculateWidth();
    calculateHeight();
   
    return 0;
}

// Function to get user input for the coordinates
double askForUserInput() {

    // Ask the user to enter the coordinate points
    printf("Enter x1 for Point #1: "); 
    scanf("%lf", &x1);

    printf("Enter y1 for Point #1: "); 
    scanf("%lf", &y1_coord);

    printf("Enter x2 for Point #2: "); 
    scanf("%lf", &x2);

    printf("Enter y2 for Point #2: "); 
    scanf("%lf", &y2_coord);
}

double calculateDistance() {
     // Calculating distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2_coord - y1_coord) * (y2_coord - y1_coord));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1_coord);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2_coord);
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}

double calculatePerimeter() {

    double distance = calculateDistance();  // Use the calculated distance
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);   // output the calculated perimeter 
    return 3.2;
}

double calculateArea() {

    double distance = calculateDistance();  // Use the calculated distance
    double radius = distance / 2;
    double area = PI * radius * radius;
    
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 2.5;
}

double calculateWidth() {

    //double distance = calculateDistance(); // use distance
    double width = fabs(x2 - x1);   // use absolute value since width cant be negative
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return 1;
}

double calculateHeight() {

    double height = fabs(y2_coord - y1_coord); // use absolute value since height cant be negative
    double distance = calculateDistance(); // use coords and distance from calculated dist.

    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1.1;
}

