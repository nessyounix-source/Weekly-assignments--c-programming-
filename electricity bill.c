#include <stdio.h>

float calculatebill(int units);

int main(){

float bill;
int units ;

    printf("Enter units consumed\n");
    scanf(" %d",&units);
    
    bill=calculatebill (units);
    
    printf("The units consumed is %.2d \n ",units);
    printf("The bill is %.2f\n",bill);
    
    
 return 0;   
    }
 float calculatebill(int units){
 float bill;
  
if (units<=100)    
    bill=units*10;
else if (units <= 199)
    bill=units*15;
else
    bill=units*20;
    
return bill;
}            