#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Purpose: calls all of the functions 

// Output: none

//Precondition: none

//Postcondition: uses the functions and displays the inputs made by the user.

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}


// Purpose: calculates the distance between the two points.

// Output: prints the two points and the distance between them. 

//Precondition: the user is asked to enter values for the points.

//Postcondition: returns the distance between those points.

double calculateDistance() {
     double x1, y1, x2, y2;

    printf("Input coordinates for point #1:\n");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Input coordinates for point #2:\n");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}


// Purpose: calculates the perimeter.

// Output: prints the points and the perimeter.

//Precondition: calls the calculateDistance function to get the diameter.

//Postcondition: returns a difficulty rating.

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2.0;
}


// Purpose: calculates the area of a circle using the diameter, distance.

// Output: prints the points and the area.

//Precondition: calls the calculateDistance function to get the diameter.

//Postcondition: returns a difficulty rating.

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 3.0;
}


// Purpose: calculates the width which is equivalent to the diameter, distance.

// Output: prints the points and the width.

//Precondition: calls the calculateDistance function to get the diameter.

//Postcondition: returns a difficulty rating.

double calculateWidth() {
     double diameter = calculateDistance();
    
    printf("The width of the city encompassed by your request is %.2f\n", diameter);

    return 2.0;
}


// Purpose: calculates the height which is equivalent to the diameter, distance.

// Output: prints the points and the height.

//Precondition: calls the calculateDistance function to get the diameter.

//Postcondition: returns a difficulty rating.

double calculateHeight() {
     double diameter = calculateDistance();
    
    printf("The height of the city encompassed by your request is %.2f\n", diameter);

    return 1.0;
}
