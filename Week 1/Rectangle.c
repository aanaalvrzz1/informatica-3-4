#include <stdio.h>

int main(void)

{
int lenght;
int width;
printf("Enter the lenght of the rectangle \n");
scanf("%d",&lenght);
printf("Enter the width of the rectangle: \n");
scanf("%d", &width);
int Area =lenght*width;
int Perimeter =(lenght+width)*2;
printf("Area = %d \n", Area);
printf("Perimeter = %d \n",Perimeter);
}

