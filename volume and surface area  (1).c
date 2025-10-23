 /*
 Name:Omar Kilobi
 Registration Number:CT101/G/25986/25
Description:simpleCprogram to find volume and surface area of a cylinder
volume =PI*radius*radius*h
surfaceArea=2*PI*radius*radius+2*PI*radius *height 
   */
#include <stdio.h>
#define PI 3.1416

int main() { 
      
    float radius, height;
    float volume, surfaceArea;

    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;
    
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}
    