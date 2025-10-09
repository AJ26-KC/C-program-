/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for password 
*/
#include<stdio.h>
#include<string.h>

int main() {
    char password [20];
    
    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") !=0);
    
    printf("Access Granted \n");
    
    return 0;
}    