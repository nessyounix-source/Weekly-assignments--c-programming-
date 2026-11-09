#include <stdio.h>

int main(){

   float attendance, averageMarks;
   
   printf("Enter attendance percentage: ");
   scanf("%f",&attendance);
   
   printf("Enter averageMarks: ");
   scanf("%f",&averageMarks);
   
        if(attendance>=75 && averageMarks>=40)
        {
        printf("Eligible");
        }
        else
        {
        printf("Not eligible");
        }
        return 0;
}        
        
   
    