#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
   int i,j,k;
   
   //1D Array:Weekly Revenue
     float revenue [7];
     float totalRevenue=0,
     averageRevenue;
    
     char*days[7]={
        "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
        
     printf("=====HOTEL MANAGEMENT SYSTEM=====\n");
     
     //input revenue for each day
       printf("\n---WEEKLY REVENUE TRACKER---\n");
       
       for(i=0;i<7;i++){
          printf("Enter revenue for %s:",days[i]);
          scanf("%f",& revenue [i]);
          
         totalRevenue +=revenue[i]; }
         averageRevenue =totalRevenue /7;
         
          printf("\nTotal weekly revenue: %.2f\n",totalRevenue);
          printf("Average daily revenue: %.2f\n",averageRevenue);
          
     //initialize random number gnerator
       srand((unsigned int) time (NULL));
       
   //2D Array:One Branch(5 floors,10 rooms)
   int occupancy[5][10];
   int occupied=0, vacant=0; 
   
    printf("\n---ROOM OCCUPANCY:ONE BRANCH---\n");
    
    for(i=0;i<5;i++){
       occupied = 0;
       vacant = 0;
    for(j=0;j<10;j++){
       occupancy[i][j]=rand()%2;
       if(occupancy[i][j]==1)
       {
       occupied ++;
       }
       else
       {
       vacant ++;
       }
    }   
    
    printf("Floor%d\tOccupied:%d\tVacant:%d\n",i +1,occupied,vacant);
   }
    
   //3D Array:Three Branches
   int chain[3][5][10];
   int totalOccupied=0;
   
   int totalVacant=0;
   
    printf("\n---ROOM OCCUPANCY:ALL BRANCHES---\n");
    
    //Assign random occupancy to every room
    for(i=0;i<3;i++){
       for(j=0;j<5;j++){
          for(k=0;k<10;k++){
             chain[i][j][k]=rand()%2; 
             
             if(chain[i][j][k]==1){
               totalOccupied++;
             }
             else
             {
              totalVacant++;
             }
          }
      } 
    }
    
    //Display occupancy for each branch and floor
    for(i=0;i<3;i++){
    printf("\nBranch %d\n",i +1);
    
    printf("Floor\tOccupied\tVacant\n");
    
      for(j=0;j<5;j++){
         int occupied=0,vacant=0;
         
         for(k=0;k<10;k++){
            if(chain[i][j][k]==1){
              occupied ++;
            }
            else
            {
             vacant ++;
         }
      }
      
    printf("%d\t%d\t\t%d\n",j+1,occupied,vacant);}
        
      }
      
      //Display total across all branches
      printf("\n--HOTEL CHAIN SUMMARY--\n");
      printf("Total rooms:%d\n",3*5*10);
      printf("Total occupied rooms:%d\n",totalOccupied);
      printf("Total vacant rooms:%d\n",totalVacant);
      
      return 0;
}      
      
             
               
                
       
       
     
     
   