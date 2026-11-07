/*
Name: Eunice wangari
Reg No:CT100/G/30707/26
Description: programming data using c variables
Date:25/09/26
*/

#include <stdio.h>

int main (){
    //declare and initialize
    float height;
    double bankbalance; 
    int phonenumber[10];
    
    
    printf("Enter your height: \t");
    scanf("%f",& height);
    
    printf("Enter your bankbalance: \t"); 
    scanf("%d",& bankbalance);
    
    printf("Enter your phonenumber: \t");
    scanf("%s",& phonenumber);
    
    printf ("The height is %f\n",height);
    printf ("My bank balance is %d\n",bankbalance);
    printf ("My phone number is %s\n",phonenumber);
  
  return 0;
}   
     