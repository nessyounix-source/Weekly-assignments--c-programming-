#include <stdio.h>

int main(){

  int units;
  float bill;
  
  printf("Enter the number of water units consumed: "); 
  scanf("%d", & units);
  
       if(units >=0 && units <=30)
       {
         bill=units * 20;
       }  
       else if(units >=31 && units <=60)
       {
         bill=units * 25;
       }  
       else if(units > 60)
       {
         bill=units * 30;
       }  
       else
       {
       printf("Invalid water units entered \n");
       
       return 0;
       }
  printf("Total water bill: KES %.2f\n",bill);
  
  return 0;
}  
              
         