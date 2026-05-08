#include <stdio.h>
int main(void) {
float celsius;
printf("Enter your temperature in celsius:");
scanf("%f",&celsius);
float fahrentheit=(celsius*1.8)+32;
if (celsius<0){
    printf("❄️ Freezing weather\n");
} else if (celsius<10){
    printf("🥶 Very cold weather\n");
} else if(celsius<20){
    printf("🧥 Chilly weather\n");
} else if(celsius<30){
    printf("🖼️ Normal weather\n");
} else if(celsius<40){
    printf("☀️ Hot weather\n");
} else if(celsius>40){
    printf("🔥 Very hot weather\n");
}

printf("%.2fC°:%.2fF°\n",celsius,fahrentheit);


}
