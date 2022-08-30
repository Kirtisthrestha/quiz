// Quiz Game 

#include <stdio.h>
#include <ctype.h>

// Introduction 
void help(void)
{
    printf("\n\n                                HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >>> You will be asked a total of 5 questions in every individuals theme");
    printf("\n >>> You will be given 4 guesses and you have to press 1, 2 ,3 or 4 for the right guess");
    printf("\n >>> No points will be deducted for the incorrect answer");
	printf("\n\n\t***************************BEST OF LUCK********************************");
	printf("\n\n\t**************Quiz Game Developer: Kirti Shrestha**************\n\n\n");
}

void score_single(int score, char name[],char theme[])
{
    printf("\n\t\t_____________________");
    printf("\n\n\t\t\t\t\t RESULT");
    printf("\n\n\n\t\t Player name: %s\t\t\t Available score: 5\n\n", name);
    printf("\n\t\t You scored : %i", score);

    if(score>3)
    {
        printf("\n\n\n\t\t Comments: ");
        printf("\n\n\t\t You know %s well!", theme);
        printf("\n\t\t____________________\n\n\n");
    }
    else{
        printf("\n\n\n\t\t Comments: ");
        printf("\n\n\t\t Dig a little about %s.\n\n\t\t Do your best next time!", theme);
        printf("\n\t\t_____________________\n\n\n");
    }
}

void score_pack(int tscore, char tname[])
{
    printf("\n\t\t_____________________");
    printf("\n\n\t\t\t\t\t RESULT");
    printf("\n\n\n\t\t Player name: %s\t\t\t Available score: 15\n\n", tname);
    printf("\n\t\t You scored : %i", tscore);

    if(tscore>7)
    {
        printf("\n\n\n\t\t Comments: ");
        printf("\n\n\t\t You destroyed the QUIZ!");
        printf("\n\t\t____________________\n\n\n");
    }
    else{
        printf("\n\n\n\t\t Comments: ");
        printf("\n\n\t\t Try not to go over the board.\n\n\t\t Start with a single theme!\n");
        printf("\n\t\t_____________________\n\n\n");
    }
}

void Earth(void)
{
        int escore = 0; 
        char ename[10];
        char theme[10] = "Earth";
        int e1,e2,e3,e4,e5;

        printf("\n\n\t\t--------Introduce yourself--------");
        printf("\n\n\n\t\t Player enter your name: ");
        scanf("%s", ename);


        printf("\n\t\t______________");
        printf("\n\n\t\tLet's begin the QUIZ, %s!",ename);
        printf("\n\t\t______________\n\n");

        printf("\n\n\t\t**Question no.1**");
		printf("\n\n\nWhich is the tallest mountain in the world?");
		printf("\n\n1.Mt. everest\t\t2.Mt. k2\n\n3.Mt. fuji\t\t4.Mt. kanchanjunga \n\n");
        printf("enter your guess: ");
        scanf("%i",&e1);
		if (e1==1)
		{
			printf("\n\nCorrect!!!");
            escore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 1. Mt everest");
		}

        printf("\n\n\t\t**Question no.2**");
		printf("\n\n\nWhich is the longest river in the world?");
		printf("\n\n1.Amazon\t\t2.Nile\n\n3.Karnali\t\t4.Niger\n\n");
        printf("enter your guess: ");
        scanf("%i",&e2);
		if (e2==1)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1. Amazon");
		}

        printf("\n\n\t\t**Question no.3**");
		printf("\n\n\nWhich is the largest desert in the world?");
		printf("\n\n1.Sahara\t\t\t\t2.Antartica\n\n3.Great Australian Desert\t\t4.Arctic\n\n");
        printf("enter your guess: ");
        scanf("%i",&e3);
		if (e3==2)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2. Antartica");
		}

        printf("\n\n\t\t**Question no.4**");
		printf("\n\n\nWhich is the world's smallest country?");
		printf("\n\n1.San Marino\t\t2.Monaco\n\n3.Vatican City\t\t4.Palau\n\n");
        printf("enter your guess: ");
        scanf("%i",&e4);
		if (e4==3)
		{
            printf("\n\nCorrect!!!");escore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3. Vatian City");
		}

        printf("\n\n\t\t**Question no.5**");
        printf("\n\n\nWhich country has the highest population?");
        printf("\n\n1.Australia\t\t2.US\n\n3.India\t\t\t\t4.China\n\n");
        printf("enter your guess: ");
        scanf("%i",&e5);
        if (e5==4)
        {
            printf("\n\nCorrect!!!");escore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 4. China");
		}

        score_single(escore,ename,theme);

        FILE *fptr;
        fptr = fopen("score.csv","a");
        fprintf(fptr,"%s, %i, 5, %s\n",ename, escore, theme);
        fclose(fptr);
}

void Solar()
{
    int sscore=0;
    char sname[10];
    char theme[15]="SolarSystem";
    int s1,s2,s3,s4,s5;

    printf("\n\n\t\t--------Introduce yourself--------");
    printf("\n\n\n\t\tPlayer enter your name: ");
    scanf("%s", sname);

    printf("\n\t\t______________");
    printf("\n\n\t\tLet's begin the QUIZ, %s!",sname);
    printf("\n\t\t______________\n\n");

        printf("\n\n\t\t**Question no.1**");
		printf("\n\nWhich planet is closest to planet Earth?");
		printf("\n\n1.Mercury\t\t2.Jupiter\n\n3.Venus\t\t\t\t4.Saturn\n\n");
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

        printf("\n\n\t\t**Question no.2**");
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

        printf("\n\n\t\t**Question no.3**");
		printf("\n\n\nOur Solar System is a part of which Galaxy?");
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

        printf("\n\n\t\t**Question no.4**");
		printf("\n\n\nEarth completes on rotation in approximately _ hours?");
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

        printf("\n\n\t\t**Question no.5**");
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
            printf("\n\nWrong!!! The correct answer is 4. Venus");
		}

        score_single(sscore,sname,theme);

        FILE *fptr;
        fptr = fopen("score.csv","a");
        fprintf(fptr,"%s, %i, 5, %s\n",sname, sscore, theme);
        fclose(fptr);
}

void Uni(void)
{
    int uscore=0;
    char uname[10];
    char theme[10]="Universe";
    int u1,u2,u3,u4,u5;

    printf("\n\n\t\t--------Introduce yourself--------");
    printf("\n\n\n\t\tPlayer enter your name: ");
    scanf("%s",uname);

    printf("\n\t\t______________");
    printf("\n\n\t\tLet's begin the QUIZ %s!",uname);
    printf("\n\t\t______________\n\n");

        printf("\n\n\t\t**Question no.1**");
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

        printf("\n\n\t\t**Question no.2**");
		printf("\n\n\nHow much time does the Sun rays take to reach the Earth?");
		printf("\n\n1.8 minutes\t\t2.9 minutes\n\n3.10 minutes\t\t4.12 minutes\n\n");
        printf("enter your guess: ");
        scanf("%i",&u2);
		if (u2==1)
		{
            printf("\n\nCorrect!!!");uscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.8 minutes");
		}

        printf("\n\n\t\t**Question no.3**");
		printf("\n\n\nWhat creates a black whole?");
		printf("\n\n1.Dying star\t\t\t2.Birth of star\n\n3.Collin of star\t\t4.Death of an galaxy\n\n");
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

        printf("\n\n\t\t**Question no.4**");
		printf("\n\n\nWhat is nebula?");
		printf("\n\n1.Gas and dust\t\t2.Ring of stars\n\n3.Dying star\t\t4.Creation of star\n\n");
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

        printf("\n\n\t\t**Question no.5**");
        printf("\n\n\nWhat is cosmic cliff?");
        printf("\n\n1.Gaseous cavity\t\t2.Nebula\n\n3.Blackhole\t\t\t4.Star\n\n");
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

        score_single(uscore,uname,theme);

        FILE *fptr;
        fptr = fopen("score.csv","a");
        fprintf(fptr,"%s, %i, 5, %s\n",uname, uscore, theme);
        fclose(fptr);
}

void pack(void)
{
    int tscore=0;
    char tname[10];
    int e1,e2,e3,e4,e5,s1,s2,s3,s4,s5,u1,u2,u3,u4,u5;

    printf("\n\n\t\t--------Introduce yourself--------");
    printf("\n\n\n\t\tBig player enter your name: ");
    scanf("%s",tname);

    printf("\n\t\t______________");
    printf("\n\n\t\tLet's begin the QUIZ %s!",tname);
    printf("\n\t\t______________\n\n");

    printf("\n\n\t\t**Question no.1**");
    printf("\n\nWhich is the tallest mountain in the world?");
		printf("\n\n1.Mt. everest\t\t2.Mt. k2\n\n3.Mt. fuji\t\t4.Mt. kanchanjunga \n\n");
        printf("enter your guess: ");
        scanf("%i",&e1);
		if (e1==1)
		{
			printf("\n\nCorrect!!!");
            tscore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 1.Mt everest");
		}

        printf("\n\n\t\t**Question no.2**");
		printf("\n\n\nWhich is the longest river in the world?");
		printf("\n\n1.Amazon\t\t2.Nile\n\n3.Karnali\t\t4.Niger\n\n");
        printf("enter your guess: ");
        scanf("%i",&e2);
		if (e2==1)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Amazon");
		}

        printf("\n\n\t\t**Question no.3**");
		printf("\n\n\nWhich is the largest desert in the world?");
		printf("\n\n1.Sahara\t\t\t\t2.Antartica\n\n3.Great Australian Desert\t\t4.Arctic\n\n");
        printf("enter your guess: ");
        scanf("%i",&e3);
		if (e3==2)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 2.Antartica");
		}

        printf("\n\n\t\t**Question no.4**");
		printf("\n\n\nWhich is the world's smallest country?");
		printf("\n\n1.San Marino\t\t2.Monaco\n\n3.Vatian City\t\t4.Palau\n\n");
        printf("enter your guess: ");
        scanf("%i",&e4);
		if (e4==3)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3.Vatian City");
		}

        printf("\n\n\t\t**Question no.5**");
        printf("\n\n\nWhich country has the highest population?");
        printf("\n\n1.Australia\t\t2.US\n\n3.India\t\t\t4.China\n\n");
        printf("enter your guess: ");
        scanf("%i",&e5);
        if (e5==4)
        {
            printf("\n\nCorrect!!!");tscore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 4.China");
		}

        printf("\n\n\t\t**Question no.6**");
        printf("\n\nWhich planet is closest to planet Earth?");
		printf("\n\n1.Mercury\t\t2.Jupiter\n\n3.Venus\t\t\t4.Saturn\n\n");
        printf("enter your guess: ");
        scanf("%i",&s1);
		if (s1==1)
		{
			printf("\n\nCorrect!!!");tscore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 1.Mercury");
		}

        printf("\n\n\t\t**Question no.7**");
		printf("\n\n\nWhich is the closest start to Earth?");
		printf("\n\n1.Sun\t\t2.Titan\n\n3.Moon\t\t4.Vega\n\n");
        printf("enter your guess: ");
        scanf("%i",&s2);
		if (s2==1)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Sun");
		}

        printf("\n\n\t\t**Question no.8**");
		printf("\n\n\nOur Solar System is a part of whihc Galaxy?");
		printf("\n\n1.Whirlpool Galaxy\t\t2.Black Eye Galaxy\n\n3.Andromeda Galaxy\t\t4.Milky Way Galaxy\n\n");
        printf("enter your guess: ");
        scanf("%i",&s3);
		if (s3==4)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 4.Milky Way Galaxy");
		}

        printf("\n\n\t\t**Question no.9**");    
		printf("\n\n\nEarthcompletes on rotation in approximately _ hours?");
		printf("\n\n1.6\t\t2.12\n\n3.24\t\t4.36\n\n");
        printf("enter your guess: ");
        scanf("%i",&s4);
		if (s4==3)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 3.24");
		}

        printf("\n\n\t\t**Question no.10**");
        printf("\n\n\nWhich planet is called the morning/evening star?");
        printf("\n\n1.Jupiter\t\t2.Mercury\n\n3.Saturn\t\t4.Venus\n\n");
        printf("enter your guess: ");
        scanf("%i",&s5);
        if (s5==4)
        {
            printf("\n\nCorrect!!!");tscore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 4.Venus");
		}

        printf("\n\n\t\t**Question no.11**");
        printf("\n\nWhat is the distance between the Sun and the Earth?");
		printf("\n\n1.92,900,078 miles\t\t2.92,966,666 miles\n\n3.36,688,960 miles\t\t4.25,896,,147 miles\n\n");
        printf("enter your guess: ");
        scanf("%i",&u1);
		if (u1==2)
		{
			printf("\n\nCorrect!!!");tscore++;
        }
		else
		{
		    printf("\n\nWrong!!! The correct answer is 2.92,966,666 miles");
		}


        printf("\n\n\t\t**Question no.12**");
		printf("\n\n\nHow much time does the Sun rays take to reach the Earth?");
		printf("\n\n1.8 minutes\t\t2.9 minutes\n\n3.10 minutes\t\t4.12 minutes\n\n");
        printf("enter your guess: ");
        scanf("%i",&u2);
		if (u2==1)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.8 minutes");
		}


        printf("\n\n\t\t**Question no.13**");
		printf("\n\n\nWhat creates a black whole?");
		printf("\n\n1.Dying star\t\t\t2.Birth of star\n\n3.Collin of star\t\t4.Death of an galaxy\n\n");
        printf("enter your guess: ");
        scanf("%i",&u3);
		if (u3==1)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Dying star");
		}

        printf("\n\n\t\t**Question no.14**");
		printf("\n\n\nWhat is nebula?");
		printf("\n\n1.Gas and dust\t\t2.Ring of stars\n\n3.Dying star\t\t4.Creationf of star\n\n");
        printf("enter your guess: ");
        scanf("%i",&u4);
		if (u4==1)
		{
            printf("\n\nCorrect!!!");tscore++;
		}
		else
		{
            printf("\n\nWrong!!! The correct answer is 1.Gas and dust");
		}

        printf("\n\n\t\t**Question no.15**");
        printf("\n\n\nWhat is cosmic cliff?");
        printf("\n\n1.Gaseous cavity\t\t2.Nebula\n\n3.Blackhole\t\t\t4.Star\n\n");
        printf("enter your guess: ");
        scanf("%i",&u5);
        if (u5==1)
        {
            printf("\n\nCorrect!!!");tscore++;
        }
        else
		{
            printf("\n\nWrong!!! The correct answer is 1.Gaseous cavity");
		}

        score_pack(tscore,tname);

        FILE *fptr;
        fptr = fopen("score.csv","a");
        fprintf(fptr,"%s, %i, 15, pack\n",tname, tscore);
        fclose(fptr);
}

int main(void)
{
    char guess, opt;
    int score;

        printf("\n\n\n\t\t\t C PROGRAM QUIZ GAME\n");
        printf("\n\t\t______________");
        printf("\n\n\t\t >>> Enter S to start the game");
        printf("\n\t\t >>> Enter H for help and instructions");
        printf("\n\t\t >>> Enter Q to quit the Quiz");
        printf("\n\t\t______________");
  
        printf("\n\n\n\t\tEnter your choice: ");
        scanf("%c",&guess);

    if(toupper(guess)=='H')
    {
        help();
    }

    else if(toupper(guess)=='S')
    {
        int theme;
        printf("\n\n\t\t---- Okay now let's choose a theme for you now. Below are some themes you can choose from ----");
        printf("\n\n\n\t\t\t\t\tChoose a theme\n");
        printf("\n\t\t____________________");
        printf("\n\n\t\t 1.Earth\t\t2.Solar System\t\t3.Universe");
        printf("\n\t\t____________________\n\n");
        printf("\n\t\t > Enter 1 to start the Earth theme");
        printf("\n\t\t > Enter 2 for start the Solar System theme");
        printf("\n\t\t > Enter 3 to start the Universe theme");
        printf("\n\t\t > Enter 4 if you know all of the above themes");

        printf("\n\n\n\t\tEnter your choice: ");
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
        else if(theme==4)
        {
            pack();
        }
	}

    else if(toupper(guess)=='Q')
    {
        printf("\n\nCome back when you are ready to play!\n\n");
    }

}