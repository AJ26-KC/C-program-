/*
Name:konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for bundles 
*/
#include<stdio.h>

int main(){
    int choice;
    
    printf("Select data bundles:\n");
    printf("1. 100MB @50KES\n");
    printf("2. 500MB @200KES\n");
    printf("3. 1GB @350KES\n");
    printf("4. 4GB @600KES\n");
    printf("Enter your choice 1-4:");    
    
    if (scanf("%d",&choice)!=1){
       printf("Invalid input\n");
       return 0;
    }
    switch (choice){
      case 1:
           printf("You selected 100MB.cost =50KES\n");
           break;
      case 2:
           printf("You selected 500MB.cost =200KES\n");
           break;
      case 3:
           printf("You selected 1GB.cost =350KES\n");
           break;
      case 4:
           printf("You selected 4GB.cost =600KES\n");
           break;
      default:
         printf("Invalid choice\n");
         break;
  }   
  
  return 0;
}  
   
       
       
       
           
             
                  
   
   
     