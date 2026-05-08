#include <stdio.h>
int main(void)
{
int Minutes;
printf("Enter the movie run time in minutes:");
scanf("%d", &Minutes);

int start_h;
int start_m;
printf("Start time:");
scanf("%d:%d", &start_h, &start_m);

int hours = Minutes / 60;
int min = Minutes % 60;

int end_h=start_h+hours;
int end_m=start_m+min;

if(end_m >=60) {
    end_h = end_h + (end_m / 60); //update variable value
    end_m=end_m % 60;// we used the modulous for getting the rest of the divison for the minutes 
}

printf("The movie will last %d hr and %dmin. \n", hours, min);
printf("End time: %d:%02d \n", end_h, end_m); //problem 1 fixed


}
