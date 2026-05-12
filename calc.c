#include <stdio.h>
 //prototype
void add(void);
void sub(void);
void mult(void);
void div(void);

int main(void) {
//first questions
printf("Calculator\n");
printf("1. Adding numbers\n");
printf("2. Subtracting numbers\n");
printf("3. Multiplying numbers\n");
printf("4. Dividing numbers\n");
printf("Enter your Answer:");
int ans;
scanf("%d",&ans);

//defining each number
if (ans==1){
    add();
} else if (ans==2){
    sub();
} else if (ans==3){
  mult();
} else if(ans==4){
  div();
} else {
    printf("Invalid Option\n");
   }
}
//specifying what add makes
void add(void){
 float adding1;
 float adding2;
 printf("enter the operation in this form x+y:");
 scanf("%f+%f",&adding1,&adding2);
 float result1=adding1+adding2;
 printf("your answer is:%.2f + %.2f = %.2f\n",adding1,adding2,result1);
}

//specifying what sub makes
void sub(void){
 float sub1;
 float sub2;
 printf("enter the operation in this form x-y:");
 scanf("%f-%f",&sub1,&sub2);
 float result2=sub1-sub2;
 printf("your answer is:%.2f - %.2f = %.2f\n",sub1,sub2,result2);
}

//specifying what mult makes
void mult(void){
 float mult1;
 float mult2;
 printf("enter the operation in this form x*y:");
 scanf("%f*%f",&mult1,&mult2);
 float result3=mult1*mult2;
 printf("your answer is:%.2f * %.2f = %.2f\n",mult1,mult2,result3);
}

//specifying what div makes
void div(void){
 float div1;
 float div2;
 printf("enter the operation in this form x/y:");
 scanf("%f/%f",&div1,&div2);
 float result4=div1/div2;
 if (div2==0){
 printf("your answer is undefined\n");
} else{
   printf("your answer is:%.2f / %.2f = %.2f\n",div1,div2,result4);
}


}
