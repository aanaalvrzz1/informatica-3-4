#include <stdio.h>
int main(void)
{
int Minutes;
printf("Enter the movie run time in minutes;\n");
scanf("%d", &Minutes);

int start_h;
int start_m;
printf("Start time:");
scanf("%d:%d", &start_h, &start_m);

int hours = Minutes / 60;
int min = Minutes % 60;

int end_h=start_h+hours;
int end_m=start_m+min;

printf("The movie will last %d hr and %dmin. \n", hours, min);
printf("End time: %d:%d \n", end_h, end_m);

}
