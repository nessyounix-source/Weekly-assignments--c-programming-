#include <stdio.h>

int main(){
 
 float principal,time,rate,SI;
 
 printf("Enter principal amount:");
 scanf("%f", &principal);
 
 printf("Enter time:");
 scanf("%f", &time);
 
 printf("Enter rate:");
 scanf("%f", &rate);
 
 SI=(principal*time*rate)/100;
 printf("Simple interest=%.2f\n",SI);
 
 return 0;
} 
 