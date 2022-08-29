#include <stdio.h>
#include<ctype.h>


void help(void)
{
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> You will be asked a total of 10 questions.");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
	printf("\n\n\t********BEST OF LUCK************");
	printf("\n\n\t**C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM***");
}


int score_display(int score, char *name[])
{
    printf("\n\n%s, you scored %i\n",name,score);
}


void Earth(void)
{
        int escore=0;
        char *ename[10];
        char e1,e2,e3,e4,e5,e6;

        printf("player enter your name: ");
        scanf("%s",ename);

		printf("\n\nWhich is the tallest mountain in the world?");
		printf("\n\n1.Mt. everest\t\t2.Mt. k2\n\n3.Mt. fuji\t\t4.Mt. kanchanjunga \n\n");
        printf("enter your guess: ");
        scanf("%i",&e1);
		if (e1==1)
		{
			printf("\n\nCorrect!!!");escore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 1.Mt everest");
		}

		printf("\n\n\nWhich is the longest river in the world?");
		printf("\n\n1.Amazon\t\t2.Nile\n\n3.Karnali\t\t4.Niger\n\n");
        printf("enter your guess: ");
        scanf("%i",&e2);
		if (e2==2)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2.Nile");
		}

		printf("\n\n\nWhich is thelargest desert in the world?");
		printf("\n\n1.Sahara\t\t2.Antartica\n\n3.Great Australian Desert\t\t4.Arctic\n\n");
        printf("enter your guess: ");
        scanf("%i",&e3);
		if (e3==2)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2.Antartica");
		}

    
		printf("\n\n\nWhich is the world's smallest country?");
		printf("\n\n1.San Marino\t\t2.Monaco\n\n3.Vatian City\t\t4.Palau\n\n");
        printf("enter your guess: ");
        scanf("%i",&e4);
		if (e4==3)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3.Vatian City");
		}

  
        printf("\n\n\nWhich country has the highest population?");
        printf("\n\n1.Australia\t\t2.US\n\n3.India\t\t4.China\n\n");
        printf("enter your guess: ");
        scanf("%i",&e5);
        if (e5==4)
        {
            printf("\n\nCorrect!!!");escore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 4.China");
		}

        score_display(escore,ename);
}

void Solar(void)
{
    int sscore=0;
    char *sname[10];
    char s1,s2,s3,s4,s5;

    printf("player enter your name: ");
    scanf("%s",sname);

		printf("\n\nWhich planet is closest to planet Earth?");
		printf("\n\n1.Mercury\t\t2.Jupiter\n\n3.Venus\t\t4.Saturn\n\n");
        printf("enter your guess: ");
        scanf("%i",&s1);
		if (s1==1)
		{
			printf("\n\nCorrect!!!");sscore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 1.Mercury");
		}

		printf("\n\n\nWhich is the closest start to Earth?");
		printf("\n\n1.Sun\t\t2.Titan\n\n3.Moon\t\t4.Vega\n\n");
        printf("enter your guess: ");
        scanf("%i",&s2);
		if (s2==1)
		{
            printf("\n\nCorrect!!!");sscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Sun");
		}

		printf("\n\n\nOur Solar System is a part of whihc Galaxy?");
		printf("\n\n1.Whirlpool Galaxy\t\t2.Black Eye Galaxy\n\n3.Andromeda Galaxy\t\t4.Milky Way Galaxy\n\n");
        printf("enter your guess: ");
        scanf("%i",&s3);
		if (s3==4)
		{
            printf("\n\nCorrect!!!");sscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 4.Milky Way Galaxy");
		}

    
		printf("\n\n\nEarthcompletes on rotation in approximately _ hours?");
		printf("\n\n1.6\t\t2.12\n\n3.24\t\t4.36\n\n");
        printf("enter your guess: ");
        scanf("%i",&s4);
		if (s4==3)
		{
            printf("\n\nCorrect!!!");sscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3.24");
		}

  
        printf("\n\n\nWhich planet is called the morning/evening star?");
        printf("\n\n1.Jupiter\t\t2.Mercury\n\n3.Saturn\t\t4.Venus\n\n");
        printf("enter your guess: ");
        scanf("%i",&s5);
        if (s5==4)
        {
            printf("\n\nCorrect!!!");sscore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 4.Venus");
		}

        score_display(sscore,sname);

}

void Uni(void)
{
    int uscore=0;
    char *uname[10];
    char u1,u2,u3,u4,u5;

    printf("player enter your name: ");
    scanf("%s",uname);

		printf("\n\nWhat is the distance between the Sun and the Earth?");
		printf("\n\n1.92,900,078 miles\t\t2.92,966,666 miles\n\n3.36,688,960 miles\t\t4.25,896,,147 miles\n\n");
        printf("enter your guess: ");
        scanf("%i",&u1);
		if (u1==2)
		{
			printf("\n\nCorrect!!!");uscore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 2.92,966,666 miles");
		}

		printf("\n\n\nHow much time does the Sun rays take to reach the Earth?");
		printf("\n\n1.8 minutes\t\t2.9 minutes\n\n3.10 minutes\t\t4.12 minutes\n\n");
        printf("enter your guess: ");
        scanf("%i",u2);
		if (u2==1)
		{
            printf("\n\nCorrect!!!");uscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.8 minutes");
		}

		printf("\n\n\nWhat creates a black whole?");
		printf("\n\n1.Dying star\t\t2.Birth of star\n\n3.Collin of star\t\t4.Death of an galaxy\n\n");
        printf("enter your guess: ");
        scanf("%i",&u3);
		if (u3==1)
		{
            printf("\n\nCorrect!!!");uscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Dying star");
		}

    
		printf("\n\n\nWhat is nebula?");
		printf("\n\n1.Gas and dust\t\t2.Ring of stars\n\n3.Dying star\t\t4.Creationf of star\n\n");
        printf("enter your guess: ");
        scanf("%i",&u4);
		if (u4==1)
		{
            printf("\n\nCorrect!!!");uscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Gas and dust");
		}

  
        printf("\n\n\nWhat is cosmic cliff?");
        printf("\n\n1.Gaseous cavity\t\t2.Nebula\n\n3.Blackhole\t\t4.Star\n\n");
        printf("enter your guess: ");
        scanf("%i",&u5);
        if (u5==1)
        {
            printf("\n\nCorrect!!!");uscore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 1.Gaseous cavity");
		}

        score_display(uscore,uname);

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

    
        printf("Enter your choice: ");
        scanf("%c",&guess);


    if(toupper(guess)=='H')
    {
        help();
    }

    else if(toupper(guess)=='S')
    {
        int theme;
        printf("\t\t\tChoose a theme\n");
        printf("\t\t1.Earth\t\t2.Solar System\t\t3.Universe");
        printf("\n\t\t > Enter 1 to start the Earth theme");
        printf("\n\t\t > press 2 for start the Solar System theme");
        printf("\n\t\t > press 3 to start the Universe theme");

        printf("\n\t\tEnter your choice: ");
        scanf("%i",&theme);

        if(theme==1)
        {
            Earth();
        }
        else if(theme==2)
        {
            Solar();
        }
        else if(theme==3)
        {
            Uni();
        }
	}

    else if(toupper(guess)=='Q')
    {
        printf("\n\ncome back when you are ready to play!\n\n");
    }

}