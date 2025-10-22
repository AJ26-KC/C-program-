/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program to convert to Celsius 
*/

#include <stdio.h>

    float convertToCelsius(float fahrenheit){
         return (fahrenheit-32)*5/9;
    }  
    
    int main(){
       float fahrenheit;
       printf("Entre temperature in fahrenheit:");
       scanf("%f",&fahrenheit);
       
       printf("Temperature in celsius=%d.2f C\n",convertToCelsius(fahrenheit));
       return 0;
}       
      
     
              
     

             
                            

     