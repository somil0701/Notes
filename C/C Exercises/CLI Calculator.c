#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if (argc < 4)
        printf("Insufficient Arugments\n");
    if (strcmp(argv[1], "add") == 0)
        printf("%d\n",atoi(argv[2]) + atoi(argv[3]));
    else if (strcmp(argv[1], "subtract") == 0)
        printf("%d\n", atoi(argv[2]) - atoi(argv[3]));
    else if (strcmp(argv[1], "multiply") == 0)
        printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
    else if (strcmp(argv[1], "divide") == 0)
        printf("%d\n", atoi(argv[2]) / atoi(argv[3]));
    else
        printf("Invalid Arguments\n");
    return 0;
}
