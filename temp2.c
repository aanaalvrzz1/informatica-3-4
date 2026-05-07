#include <stdio.h>
int main(void) {
float celsius;
printf("Enter your temperature in celsius:");
scanf("%f",&celsius);
float fahrentheit=(celsius*1.8)+32;
if (celsius<0){
    printf("Freezing Weather\n");
} else if (celsius<10){
    printf("Very Cold Weather\n");
} else if(celsius<20){
    printf("Chilly Weather\n");
} else if(celsius<30){
    printf("Normal Weather\n");
} else if(celsius<40){
    printf("Hot Weather\n");
} else if(celsius>40){
    printf("Very Hot Weather\n");
}

printf("%.2fC°:%.2fF°\n",celsius,fahrentheit);


}
