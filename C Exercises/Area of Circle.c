#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

double EuclideanDistance(int x1, int x2, int y1, int y2){
    double diff_x = abs(x2 - x1);
    double diff_y = abs(y2 - y1);
    double square_distance = fabs(pow(diff_x, 2) - pow(diff_y, 2));
    return sqrt(square_distance);
}

float areaofCircle(int x1, int x2, int y1, int y2, double (*ptr) (int, int, int, int)){
    int radius = ptr(x1, x2, y1, y2);
    return PI * radius * radius;
}

int main(){
    // Intialization of Variables
    int x1, x2, y1, y2;
    double (*ptr) (int, int, int, int);
    
    // Main Starts Here
    printf("Enter the Co-ordinates of First Point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the Co-ordinates of Second Point: ");
    scanf("%d %d", &x2, &y2);

    // Assigning Function Pointer
    ptr = EuclideanDistance;

    printf("The area of the circle will be: %.2f\n", areaofCircle(x1, x2, y1, y2, ptr));
    return 0;
}