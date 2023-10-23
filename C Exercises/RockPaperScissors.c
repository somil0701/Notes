#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function To Generate a Random Number
int generateRandomNumber(int limit){
    int random_num; 
    srand(time(0));
    random_num = rand()%limit;
    return random_num;
}

// Function to Check the Victory Condition
int checkVictory(char player, char cpu){
    if (player == 'r' && cpu == 'p')
        return 0;

    else if (player == 'r' && cpu == 's')
        return 1;

    else if (player == 's' && cpu == 'p')
        return 1;

    else if (player == 's' && cpu == 'r')
        return 0;
    
    else if (player == 'p' && cpu == 'r')
        return 1;

    else if (player == 'p' && cpu == 's')
        return 0;

    else
        return 2;
}

int main(){
    // Taking User Input At The Start Of the Game
    char player_name[20];
    char dataset[] = {'r', 'p', 's'};
    char user_response, cpu_response;
    int random_num, vict;
    printf("Greetings Player! Enter your name to get started: ");
    scanf("%s", &player_name);
    getchar();

    printf("%s's Turn: \n", player_name);
    printf("Enter Your Response(r/p/s): ");
    scanf("%c", &user_response);

    // Generating CPU's Response
    printf("Waiting for your opponent to respond....\n");
    random_num = generateRandomNumber(3);
    cpu_response = dataset[random_num];

    printf("CPU's Response is %c\n", cpu_response);

    // Checking Victory Condition
    vict = checkVictory(user_response, cpu_response);

    switch(vict){
        case 0:
        printf("%s you lose!\n", player_name);
        break;

        case 1:
        printf("%s you won\n", player_name);
        break;

        case 2:
        printf("It was a Draw!\n");
        break;

        default:
        printf("OwO\n");
        break;
    }

    return 0;
}
