// Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
    
#include<stdio.h>
#include<stdlib.h>

int main(){
    int user_input_idlength;
    

    // For First Employee
    printf("Employee 1: \n");
    printf("Enter the no. of characters in your EID: ");
    scanf("%d", &user_input_idlength);
    
    char user_id[user_input_idlength];
    // ptr = (char*)malloc(user_input_idlength*sizeof(char));

    printf("Enter the EID: ");
    scanf("%s", user_id);
    printf("EID of Employee 1 is: %s\n", user_id);

    // For Second Employee
    // printf("Employee 2: \n");
    // printf("Enter the no. of characters in your EID: ");
    // scanf("%d", &user_input_idlength);

    // ptr = realloc(ptr, user_input_idlength*1);

    // printf("Enter the EID: ");
    // scanf("%s", ptr);
    // printf("EID of Employee 1 is: %s\n", ptr);

    // // For Third Employee
    // printf("Employee 3: \n");
    // printf("Enter the no. of characters in your EID: ");
    // scanf("%d", &user_input_idlength);

    // ptr = realloc(ptr, user_input_idlength*1);

    // printf("Enter the EID: ");
    // scanf("%s", ptr);
    // printf("EID of Employee 1 is: %s\n", ptr);

    // free(ptr);
    // return 0;

    
}