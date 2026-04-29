#include <stdio.h>

int main(void)
{
    char name[50];
    printf("enter your name: ");
    scanf("%s",&name);
    printf("Hello %s!\n", name);
    char color[50];
    printf("What is your Favorite Color?:");
    scanf("%s",&color);
    printf("The color %s is beautiful!\n" , color);
}
