#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *ptr = NULL;
    char string[300], string2[300];

    ptr = fopen("Receipt.txt", "a+");
    fscanf(ptr, "%s", string);

    int string_length = strlen(string);
    for (int i = 0; i < string_length; i++){
    }
    // for (int i = 0; i < string_length; i++){
    //     if (string[i] == "{name}"){
    //         string[i] == "Somil";
    //     }
    //     else if (string[i] == "{item}"){
    //         string[i] == "XBOX";
    //     }
    //     else if (string[i] == "{outlet}"){
    //         string[i] == "Moolchand";
    //     }
    // } 
    printf("%s\n", string);

    // fprintf(ptr, "%s", string);
    // fscanf(ptr, "%s", string);
    // printf("%s", string);




    return 0;
}