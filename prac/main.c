#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    /*declaring the variables*/
    int r1,count,i,n;
    char choice;
    char name[20];
    mainhome:
    printf("\t\t\t ________________\n");
    printf("\t\t\t|  WELCOME TO    |\n");
    printf("\t\t\t|    TO THE      |\n");
    printf("\t\t\t|     GAME       |\n ");
    printf("\t\t\t|________________|\n");
    printf("\n\t\t > Press 1 for the Trivia game");
    printf("\n\t\t > Press 2 for the Concentration game");
    printf("\n\t\t > Press Q to exit the game");
    printf("\n\t\t > Press any other key to go back to home\n");
    choice=toupper(getch());/*fetches the user input*/
    if (choice=='1')
    {

    printf("\n\n\t\t   **Welcome to Trivia game**");
    printf("\n\n\t\t > Press S to start the game");
    printf("\n\t\t > Press Z to go back to home");
    printf("\n\t\t >Press the letter of your answer to submit your answer ");
    choice=toupper(getch());
    if (choice=='Z')
	 {
        goto mainhome;/*returns to home */
     }
      if(choice=='S')
    {
        system("cls");
        printf("\n\n\t Enter your name:");
        gets(name);

        system("cls");
        printf("\n\t\t Welcome %s to Trivia Game ",name);
        printf(" Lets Start  the Trivia game\n");
        printf("You have to choose a subject from the list given and attempt the quizzes\n");
        printf("The subjects listed are four\n");
        printf("You will be given 3 options to press.Either A,B,C for the right option\n");
        printf("E for English\n ");
        printf("M for Maths\n ");
        printf("P for Physics\n");
        printf("H for History\n");
        printf("Press any key to return  home\n");
        printf("Press the letter of your answer to submit your answer\n");

        choice=toupper(getch());/*fetches the user input*/

       if (choice=='M')
		{
    /*it directs the choice to maths*/
            system("cls");
		    goto maths;
		    system("cls");
		    goto mainhome;
		}
		 else if(choice=='E')
		 {
    /*it directs the choice to English*/
         system("cls");
		    goto english;
            system("cls");
            goto mainhome;
		    }

        else if(choice=='P')
            {
    /*it directs the choice to Physics*/
         system("cls");
		    goto physics;
            system("cls");
            goto mainhome;
		    }
        else if(choice=='H')
        {
    /*it directs the choice to History*/
         system("cls");
		    goto history;
            system("cls");
            goto mainhome;
		    }
       else
        {
    /*it directs the choice to home*/
            system("cls");
            goto mainhome;
        }



        english:
        system("cls");
        count=0;
         for(i=1;i<=5;i++)
            {
        r1=i;
        switch(r1)
        {
            case 1:
                /*it The quiz is displayed and the user inputs the answer  */
		          printf("\n\n The word car is a?");
		          printf("\n\nA.noun\t\tB.verb\n\nC.phrasal verb");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	        /*if the user enters the wrong answer, this message prints out*/
	            printf("\n\nWrong!!! The correct answer is A noun");
		        getch();
		        system("cls");
		        break;
  	   	}
  	   	case 2:
            /*The quiz is displayed and the user inputs the answer  */
		          printf("\n\n a collection of lions is called?");
		          printf("\n\nA.bunch\t\tB.herd\n\nC.den");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	        /*if the user enters the wrong answer, this message prints out*/
	            printf("\n\nWrong!!! The correct answer is C.den");
		        getch();
		        system("cls");
		        break;
  	   	}
  	   		case 3:
  	   		     /*The quiz is displayed and the user inputs the answer  */
		          printf("\n\nWhich one is not an article?");
		          printf("\n\nA.a\t\tB.an\n\nC.d");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	         /*if the user enters the wrong answer, this message prints out*/
	            printf("\n\nWrong!!! The correct answer is C.d");
		        getch();
		        system("cls");
		        break;
  	   	}
  	   		case 4:
  	   		     /*The quiz is displayed and the user inputs the answer  */
		          printf("\n\n which words takes the phrasal verb ,put up with?");
		          printf("\n\nA.survive\t\tB.tolerate\n\nC.surrender");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	         /*if the user enters the wrong answer, this message prints out*/
	            printf("\n\nWrong!!! The correct answer is B.tolerate");
		        getch();
		        system("cls");
		        break;
  	   	}
  	   		case 5:
  	   		     /*The quiz is displayed and the user inputs the answer  */
		          printf("\n\n which of the following is an adjective?");
		          printf("\n\nA.walk\t\tB.beautiful\n\t C.love");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {

	            printf("\n\nWrong!!! The correct answer is B.beautiful");
		        getch();
		        system("cls");
		        break;
  	   	}
        }

    }


        maths:
        system("cls");
        count=0;
         for(i=1;i<=5;i++)
     {
        r1=i;
        switch(r1)
        {
        case 1:
		          printf("\n\n 2*5?");
		          printf("\n\nA.12\t\tB.10\n\nC.7");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;

                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is B.10");
		        getch();
		        system("cls");
		        break;
	    }
	    case 2:
		          printf("\n\n 12 + 3 =?");
		          printf("\n\nA.9\t\tB.36\n\nC.15");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.15");
		        getch();
		        system("cls");
		        break;
	    }
	    case 3:
		          printf("\n\n 15\5=?");
		          printf("\n\nA.3\t\tB.0\n\nC.45");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.3");
		        getch();
		        system("cls");
		        break;
	    }
	    case 4:
		          printf("\n\n 30 - 10 =?");
		          printf("\n\nA.19\t\tB.20\n\nC.30");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is B.20");
		        getch();
		        system("cls");
		        break;
	    }
	    case 5:
		          printf("\n\n 20*20?");
		          printf("\n\nA.40\t\tB.2020\n\nC.400");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.400");
		        getch();
		        system("cls");
		        break;
	    }
        }
     }



        physics:
        system("cls");
        count=0;
         for(i=1;i<=5;i++)
     {
        r1=i;
        switch(r1)
        {
                case 1:
		          printf("\n\n Anything that occupies space and has mass is?");
		          printf("\n\nA.Matter\t\tB.Weight\n\nC.Motion");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.Matter");
		        getch();
		        system("cls");
		        break;
	    }
	        case 2:
		          printf("\n\n Which of the following unit is used for current ?");
		          printf("\n\nA.Amperes\t\tB.voltage \n\nC.Wattage");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.Amperes");
		        getch();
		        system("cls");
		        break;
	    }
	        case 3:
		          printf("\n\n Pressure increases with an increase in?");
		          printf("\n\nA.length\t\tB.Width\n\nC.Height");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.Height");
		        getch();
		        system("cls");
		        break;
	    }
	        case 4:
		          printf("\n\n What is physics?");
		          printf("\n\nA.Study of machines\n\nB.Study of matter and its relation to energy\n\nC.Study of regular Engineering");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is B.Study of matter and its relation to Energy");
		        getch();
		        system("cls");
		        break;
	    }
	        case 5:
		          printf("\n\n When is a body said to be momentarily at rest?");
		          printf("\n\nA.When the velocity is Zero\n\B.When acceleration is zero\n\nC.When the time is zero");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.When the velocity is zero");
		        getch();
		        system("cls");
		        break;
	    }
        }
     }


        history:
        system("cls");
        count=0;
         for(i=1;i<=5;i++)
     {
        r1=i;
        switch(r1)
        {
                   case 1:
		          printf("\n\n What is the capital city of USA?");
		          printf("\n\nWashington DC\t\tB.New York\n\nC.Miami");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.Washington DC");
		        getch();
		        system("cls");
		        break;
	    }
	           case 2:
		          printf("\n\n Who invented a bulb?");
		          printf("\n\nA.Donald Trump\t\tB.Thomas Edison\n\nC.The Wright brother");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='B')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is B. Thomas Edison");
		        getch();
		        system("cls");
		        break;
	    }
	           case 3:
		          printf("\n\n Which year was Donald Trump elected as a USA president?");
		          printf("\n\nA.2020\t\tB.2012\n\nC.2016");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.2016");
		        getch();
		        system("cls");
		        break;
	    }
	           case 4:
		          printf("\n\n Who  was the most dangerous terrorist leader in the world's history?");
		          printf("\n\nA.Osama Bin Laden\n\B.William Ruto\n\nC.Hussein Dude");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is A.Osama Bin Laden");
		        getch();
		        system("cls");
		        break;
	    }
	           case 5:
		          printf("\n\n Which year did South Africa gain Independence?");
		          printf("\n\nA.1945\t\tB.1963\n\nC.1994");
		          printf("\n press the letter to submit");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C. 1994");
		        getch();
		        system("cls");
		        break;
	    }
        }
     }
    }


    else
        {
            system("cls");
            goto mainhome;
        }
    }
    else if (choice=='2'){
            int c,n;

            int numb[5];
            /*Initialise random*/
            srand(time(NULL));
    printf("Five random numbers in [1,100]\n");

    for (c = 1; c <= 5; c++) {
/*generate random number ranging from 0 to 100*/
            n = rand() % 100 + 1;
    printf("Enter your number\n");
    /*prompt the user to input the numbers*/
    scanf("%d",numb);
    /*check if there is a match*/
    if (*numb==n){
        printf("you have the correct values\n");

    }
    else
    {
        printf("wrong order input\n");
    }




  }

    }
    else if (choice=='Q'){
         exit(1);
    }

    else
    {
       system("cls");
       goto mainhome;
    }




    return 0;
}
