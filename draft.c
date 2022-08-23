#include <stdio.h>
#include<ctype.h>


void help(void)
{
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> You will be asked a total of 10 questions.");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 guesss and you have to press A, B ,C or D for the");
    printf("\n    right guess");
    printf("\n >> No negative marking for wrong answers");
	printf("\n\n\t********BEST OF LUCK************");
	printf("\n\n\t**C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM***");
}


int score_display(int score, char *name[])
{
    printf("\n\n%s, you scored %i\n",name,score);
}


void quiz(void)
{
        int score=0;
        char *name[10];
        char a1,a2,a3,a4,a5,a6;

        printf("player enter your name: ");
        scanf("%s",name);

		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\n1.42042\t\t2.101010\n\n3.23232\t\t4.01234\n\n");
        printf("enter your guess: ");
        scanf("%i",&a1);
		if (a1==3)
		{
			printf("\n\nCorrect!!!");score++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 3.23232");
		}

		printf("\n\n\nThe scorery with the highest environmental performance index is...");
		printf("\n\n1.France\t\t2.Denmark\n\n3.Switzerland\t\t4.Finland\n\n");
        printf("enter your guess: ");
        scanf("%i",&a2);
		if (a2==3)
		{
            printf("\n\nCorrect!!!");score++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3.Switzerland");
		}

		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\n1.Polar Bear\t\t2.Hyena\n\n3.Donkey\t\t4.Chimpanzee\n\n");
        printf("enter your guess: ");
        scanf("%i",&a3);
		if (toupper(a3)==2)
		{
            printf("\n\nCorrect!!!");score++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2.Hyena");
		}

    
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\n1.Wayne Rooney\t\t2.Lucas Podolski\n\n3.Lionel Messi\t\t4.Christiano Ronaldo\n\n");
        printf("enter your guess: ");
        scanf("%i",&a4);
		if (a4==2)
		{
            printf("\n\nCorrect!!!");score++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2.Lucas Podolski");
		}

  
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\n1.Mt. K2\t\t2.Mt. Kanchanjungha\n\n3.Mt. Makalu\t\t4.Mt. Kilimanjaro\n\n");
        printf("enter your guess: ");
        scanf("%i",&a5);
        if (a5==2)
        {
            printf("\n\nCorrect!!!");score++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 2.Mt. Kanchanjungha");
		}

        
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\n1.A traffic\t\t2.A toddler\n\n3.A police\t\t4.An Army\n\n");
        printf("enter your guess: ");
        scanf("%i",&a6);
        
		if (a6==4)
		{
            printf("\n\nCorrect!!!");score++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 4.An Army\n\n");
		}
        
        score_display(score,name);
}


int main(void)
{
    char guess,opt;
    int score;

        printf("\t\t\tC PROGRAM QUIZ GAME\n");
        printf("\n\t\t______________");
        printf("\n\t\t\t   WELCOME ");
        printf("\n\t\t\t      to ");
        printf("\n\t\t\t   THE GAME ");
        printf("\n\t\t______________");
        printf("\n\t\t______________");
        printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
        printf("\n\t\t______________");
        printf("\n\t\t______________");
        printf("\n\t\t > Enter S to start the game");
        printf("\n\t\t > press H for help");
        printf("\n\t\t > press Q to quit");
        printf("\n\t\t______________\n\n");

    
        printf("enter your key: ");
        scanf("%c",&guess);


    if(toupper(guess)=='H')
    {
        help();
    }

    else if(toupper(guess)=='S')
    {
        quiz();   
	}

    else if(toupper(guess)=='Q')
    {
        printf("\n\ncome back when you are ready to play!\n\n");
    }

}