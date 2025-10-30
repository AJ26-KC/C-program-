/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for creating a hotel management system using arrays
*/

#include <stdio.h>

int main (){
        float revenue [7];       //1D array to store daily revenue
        float total=0,average;
        int i;
        
        printf("Enter revenue for each day of the week:\n");
        
        
        //Input daily revenue 
        for(i=0;i<7;i++) {
             printf("Day %d:",i+1);
             scanf("%f",&revenue[i]);
             total +=revenue [i];  //Add to total as we go
        }            
        //Calculate average    
        average =total/7;
        
        //Display results 
        printf("\n====weekly revenue salary ====\n");
        printf("Total weekly revenue:%.2f\n",total);
        printf("Average daily revenue:%.2f\n", average);
        
        return 0;                    
}     

             
                            

     