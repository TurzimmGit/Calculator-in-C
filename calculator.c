// include

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//main

int main(void){
    float n1, n2, result; // define type of data of the variables
    char op; // define type of data of the variables
    
    printf("\nWelcome to the C Calculator\n");
    do {
        n1 = n2 = result = 0;// define n1, n2 and result to 0 
        printf("\n Close - 0\n Sum - 1\n Subtraction - 2\n Multiplication - 3\n Division - 4\n Exponentiation - 5\n Square Root - 6\n");
        printf("\nWhich operation do you choose? \n");
        scanf(" %c", &op); //select the operation 
        switch(op){
        case '1':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select first number
            printf("Second number: ");
            scanf("%f", &n2);//select second number
            result = n1 + n2;//sum
            printf("Result: %f\n", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input
            system("cls"); // clear screen
            break;
        
        case'2':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select first number
            printf("Second number: ");
            scanf("%f", &n2);//select second number
            result = n1 - n2;// subrtract
            printf("Result: %f\n", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input 
            system("cls"); // clear screen
            break;
        
        case '3':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select first number
            printf("Second number: ");
            scanf("%f", &n2);//select second number
            result = n1 * n2;//mutiply
            printf("Result: %f\n", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input
            system("cls"); // clear screen
            break;
        
        case '4':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select first number
            printf("Second number: ");
            scanf("%f", &n2);//select second number
            if (n2 != 0)// verfy if is not zero otherwise it's not determinated
                result = n1 / n2;//divide
            else
                printf("Error: Division by zero!\n");
            printf("Result: %f\n", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input
            system("cls"); // clear screen
            break;
        
        case '5':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select first number
            printf("Second number: ");
            scanf("%f", &n2);//select second number
            result = pow(n1,n2);// raise
            printf("Result: \n%.0f", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input
            system("cls"); // clear screen
            break;

        case '6':
            printf("\nFirst number: ");
            scanf("%f", &n1);//select the number
            result =sqrt(n1);// takes the square root
            printf("Result: %f\n", result);//print it
            printf("\nPress Enter to continue...");
            getchar(); //get user input
            getchar(); //get user input
            system("cls"); // clear screen
            break;
        
        case '0':
            continue;

        default:
        printf("Invalid Character!");
        break;

        }
    } while (op != '0');
    
    return 0;
}
