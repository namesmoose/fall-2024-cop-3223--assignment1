#define PI 3.14

#include <stdio.h>
#include <math.h>

// Function prototypes
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double x1, double y1, double x2, double y2);
double calculateArea(double x1, double y1, double x2, double y2);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

int main() {
    double x1, y1, x2, y2;

    // Input for Point #1
    printf("Enter the coordinates for Point #1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &y1);
    
    // Input for Point #2
    printf("Enter the coordinates for Point #2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &x2, &y2);

    // Calculations
    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = calculatePerimeter(x1, y1, x2, y2);
    double area = calculateArea(x1, y1, x2, y2);
    double width = calculateWidth(x1, x2);
    double height = calculateHeight(y1, y2);

    // Output the results
    printf("The distance between the two points is %.2f\n", distance);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 0;
}

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the perimeter
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    // We will use calculateDistance() for more accurate perimeter calculation based on a rectangle
    double distance = calculateDistance(x1, y1, x2, y2);
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    
    // Use both width/height and distance to avoid repeating code
    double perimeter = 2 * (width + height);
    
    // Output and return perimeter
    return perimeter;
}

// Function to calculate the area
double calculateArea(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    return width * height;
}

// Function to calculate the width (difference between x-coordinates)
double calculateWidth(double x1, double x2) {
    return fabs(x2 - x1);
}

// Function to calculate the height (difference between y-coordinates)
double calculateHeight(double y1, double y2) {
    return fabs(y2 - y1);
}



