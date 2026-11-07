#include <stdio.h>
#include <math.h>

#define PI=3.142

int main(){
    double= radius,height
    double= volume,surface area
    
 //Prompt user for input
  printf("Enter the radius of the cylinder:");
  if(scanf("%lf",&radius)!=1 || radius<=0){
  
  printf("invalid input radius must be a positive number\n");
  
  return 1;
}
 //Calculate volume and surface area
  volume=PI*radius*radius*height;
  surface area=2.0*PI*radius*radius+2.0*PI*radius*height;
  
 //Display results
  printf("\n---cylinderResults---\n");
  printf("Radius: %.2f\n",radius);
  printf("Height: %.2f\n",height);
  printf("Volume: %.2f cubic units \n",volume);
  printf("Surface area: %.2f square units \n",surface_area);
  
  return 0;
}         
