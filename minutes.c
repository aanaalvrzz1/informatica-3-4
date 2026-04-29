#include <stdio.h>
int main(void)
{
int Minutes;
int Start;
printf("Enter the movie run time in minutes;\n");
scanf("%d", &Minutes);
printf("Enter the starting time of the movie:\n");
scanf("%d",&Start);
int Runtime= Minutes/60;
int Runtime2= Minutes%60;
int Endtime= Start+Runtime;
int Endtime2= Start+Runtime2;
printf("The run time of the movie in hours is %dhrs and %dmin\n",Runtime, Runtime2);
printf("The movie will end at %d:%d \n",Endtime, Endtime2);
}
