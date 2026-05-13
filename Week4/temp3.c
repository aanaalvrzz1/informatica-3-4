#include <stdio.h>
//1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
printf("Temperature Converter\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("Enter your option: ");
int user_response;
scanf("%d",&user_response);

if (user_response ==1){
    //3.Call
    c_to_f();
    } else if (user_response == 2){
        f_to_c();
    }else {
        printf("Invalid option \n");
    }
}

//2. Define
void c_to_f(void){
    float celsius;
printf("Enter your temperature in celsius:");
scanf("%f",&celsius);
float fahrentheit=(celsius*1.8)+32;
printf("%.2f°C:%.2f°F\n",celsius,fahrentheit);
}

void f_to_c(void){
    float f;
printf("Enter your temperature in Fahrenheit:");
scanf("%f",&f);
float celsius=(f-32)/1.8;
printf("%.2f°C:%.2f°F\n",f,celsius);
}
