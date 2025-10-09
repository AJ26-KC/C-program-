/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for ATM withdrawal 
*/
#include<stdio.h>

int main() {
    float balance,withdraw;
    
    printf ("Enter initial balance: ");
    scanf("%f",&balance);
    
    while (balance >0){
          printf("Enter amount to withdraw:");
          scanf("%f",&withdraw);
                   
          balance -=withdraw;
          printf("Remaining balance:%.2f\n",balance);
    
    if (balance<=0){
      printf ("Insufficient balance.Transaction stopped.\n");
        }
    }     
  
  return 0;
  
}     