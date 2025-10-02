/*
Name:konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for exam eligibility 
*/
#include<stdio.h>

int main(){
   float attendance,average;
   
   printf("Enter attendance percentage:");
   scanf("%f",&attendance);
   
   printf("Enter average marks:");
   scanf("%f",&average);
   
   if(attendance>=75 &&average>=40){
      printf("Eligible for final exams.\n");
      }else{
   printf("Not eligible.\n");
   }
   
   return 0;
   }
   
   
     