#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalindrome(char *arr, int arr_len){
    if (arr_len%2==0){
        for (int i = 0; i < arr_len; i++){
            if (arr[i] != arr[arr_len-i-1])
                return 0;    
        }
        return 1;
    }
    else{
        int middle_index = ((arr_len+1)/2)-1;
        for (int i = 0; i < arr_len; i++){
            if (i!=middle_index){
                if (arr[i] != arr[arr_len-i-1])
                    return 0;
            }
        }
        return 1;
    }
}

int main(){
    char user_string[100];

    printf("Enter the Number: ");
    scanf("%s", user_string);

    int user_strlen = strlen(user_string);

    if (isPalindrome(user_string, user_strlen))
        printf("The Given Number is a Palindrome\n");
    else
        printf("The Given Number is not a Palindrome\n");
    return 0;
}