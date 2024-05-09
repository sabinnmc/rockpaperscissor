#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/* not supportted code in window but linux accept it

#include <unistd.h>

void displayMessage(const char* message, int seconds) {
    printf("%s", message); // Display the message
    fflush(stdout); // Flush the output buffer to ensure the message is displayed immediately
    sleep(seconds); // Pause for specified seconds
    printf("\033[2J\033[1;1H"); // Clear the screen
}


*/
int main() {
    int     playerChoice;
    int     computerChoice;
    int     playerScore = 0; 
    int     computerScore = 0;
    int     playerScore_1 = 0;
    int     playerscore_2 = 0;
    char    choice;
    unsigned int mode;
    char     multiplay1;  //player 1 
    char     multiplay2;  //player 2

    /**
    create a random number based on time defined under the timer.h header file
    time(NULL) return the curret time in seconds 
    **/
    //srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors game !\n");
    printf("\nlet`s play\n");
    printf("\n-------MODE-------\n");
    printf("1. WITH COMPUTER press 1 \n");
    printf("\n2. WITH FRIEND press 2 \n");
    scanf("%d",&mode);
    switch (mode)
    {
    case 1:

        do {
            // Player's turn
            printf("\nEnter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
            //scanf_s("%d", &playerChoice, sizeof(playerChoice));

            scanf("%d", &playerChoice);

            // Generating computer's choice 
            // 1 is must because value range from 0 to 2 but we expect 1 to 3 in our program
            computerChoice = rand() % 3 + 1;

            // Displaying choices
            printf("\nYou choose :\n ");
            switch (playerChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
            default:
                printf("Invalid choice\n");
                continue;
            }
            printf("Computer choose: ");
            switch (computerChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
            }

            // Determining the winner
            if ((playerChoice == 1 && computerChoice == 3) ||
                (playerChoice == 2 && computerChoice == 1) ||
                (playerChoice == 3 && computerChoice == 2)) {
                printf("You win!\n");
                // displayMessage("well done.\n", 3);
                playerScore++;

            }
            else if ((playerChoice == 1 && computerChoice == 2) ||
                (playerChoice == 2 && computerChoice == 3) ||
                (playerChoice == 3 && computerChoice == 1)) {
                printf("Computer wins!\n");
                //displayMessage("better luck next time.\n", 3);
                playerScore_1++;
            }
            else {
                printf("It's a draw!\n");
                // displayMessage("OPPS! draw let settle once for all.\n", 3);
            }

            printf("Player  1 score: %d\n", playerScore);
            printf("Player  2 score: %d\n", playerScore_1);

            // Ask if the player wants to play again
            printf("Do you want to play again? (y/n): ");
            //scanf_s(" %c", &choice, sizeof(choice));
            choice = getche();
        } while (choice == 'y' || choice == 'Y');
        break;


    case 2:
        do {
            // First Player's turn
            printf("\nEnter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
            printf("\nfirst player choice/t");
            multiplay1 = getch();

            // Displaying choices
            printf("\nYou choose :\n ");
            switch (multiplay1) {
            case '1':
            case '2':
            case '3':
                printf("your position is stored! good luck!!\n");
                break;
            default:
                printf("Invalid choice\n");
                continue;
            }

            printf("\nsecond player choice/t");
            multiplay2 = getch();
           //multiplay2 =(int *)multiplay2;

            switch (multiplay1) {
            case '1':
                printf("\n-----------Player 1 entered Rock-------------\n");
                break;
            case '2':
                printf("\n-----------PLayer 1 entered Paper------------\n");
                break;
            case '3':
                printf("\n-----------Layer 1 entered Scissors----------\n");
                break;
            default:
                printf("Invalid choice\n");
                continue;
            }


            switch (multiplay2) {
            case '1':
                printf("\n-----------PLayer 2 entered Rock--------------\n");
                break;
            case '2':
                printf("\n-----------PLayer 2 entered Paper-------------\n");
                break;
            case '3':
                printf("\n-----------PLayer 2 entered Scissors----------\n");
                break;

                default:
                printf("\nwrong input mode\n");

            }

            // Determining the winner
            if ((multiplay1 == '1' && multiplay2 == '3') ||
                (multiplay1 == '2' && multiplay2 == '1') ||
                (multiplay1 == '3' && multiplay2 == '2')) {
                printf(" player 1 You win!\n");
                // displayMessage("well done.\n", 3);
                playerScore_1++;

            }
            else if ((multiplay1 == '1'   && multiplay2 == '2') ||
                (multiplay1 == '2'        && multiplay2 == '3') ||
                (multiplay1 == '3'        && multiplay2 == '1')) {
                printf("player 2 win!\n");
                //displayMessage("better luck next time.\n", 3);
                playerscore_2++;
            }
            else {
                printf("It's a draw!\n");
                // displayMessage("OPPS! draw let settle once for all.\n", 3);
            }

            printf("Player 1 score: %d\n", playerScore_1);
            printf("player 2 score: %d\n", playerscore_2);

            // Ask if the player wants to play again
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &choice, sizeof(choice));
        } while (choice == 'y' || choice == 'Y');

        break;

    default:
        printf("\nwrong input mode\n");
        break;
    }

    

    printf("Thanks for playing!\n");

    return 0;
}
