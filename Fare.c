/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program to calculate fare
*/

#include <stdio.h>
     float calculatefare(float distance){
          return distance * 50;
          
          }
          
          int main(){
              float distance; 
              printf("Enter distance travelled (in km):");
              scanf("%f",&distance);
              
              printf("Total fare=KSH.%.2f\n",calculatefare(distance));
              return 0;
          }                        
              
     

             
                            

     