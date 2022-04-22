#include<stdio.h>
#include<stdlib.h>
#include "rules.h"
int main ()
{
	int i,s,v,r,h,q,ans,choice;
	char name[20];
	printf("\t\t\t*********************************************** \n");
	printf("\t\t\t\t  C program quiz game  \n");
	printf("\t\t\t*********************************************** \n");
	printf("\t\t\t\t WELCOME TO THE QUIZ GAME \n");
	printf("\t\t\t*********************************************** \n");
	printf("\t\t\t\t CREATED BY PRABHAT KAPIL GANESH \n");
	printf("\t\t\t*********************************************** \n");
	printf("\t\t\t\t TEST YOUR KNOWLEDGE \n");
	printf("\t\t\t*********************************************** \n");
	
	printf("Enter your name:\n");
	scanf("%s",&name);
	
	system("cls");
	
	printf("\t\t\t\t Welcome %s\n",name);
	printf("\t\t\t*********************************************** \n");
	
	printf("\t\t\t 1. Start the game \n");
	printf("\t\t\t 2. View the highest score \n");
	printf("\t\t\t 3. Reset score \n");
	printf("\t\t\t 4. Rules \n");
	printf("\t\t\t 5. Quit \n");
	printf("\t\t\t************************************************ \n");	
	
	for (i=1; i<6; i++)
{
	
	printf("Press any number:(1 to 5)\n");
	scanf("%d",&choice);
	switch(choice)
    {
    	case  1:
    		//printf("Starting Game...\n");
        	printf("\nWho is the first prime minister of Nepal ?\n1.KP oli \t\t2.BP Koirala \n3.Bhimsen Thapa \t4.Junga bdr Rana\n ");
        	scanf("%d",&ans);
        
			if (ans == 3)
			{
        	  	printf("\nCorrect\n");
        	}
			else
        	{	
				printf("\nIncorrect \nThe ans is Bhimsen Thapa");
			}
			
			
    	    //scanf("%d",& s);
        	break;
                
		case 2:
            printf("The highest score is\n");
            //scanf("%d",& v);
            break;
            
        case 3:
    		printf("Score resetted\n");
            //scanf("%d",& r);
            break;
                
        case 4:
            //Rules
           system("cls");
		    rules();
		    
            break;
                    
        case 5:
			//To quit the game
            exit(0);
            break;
        
		default :
            printf("\nEnter number between 1 to 5 only !\n");
    }
}
	return 0;
}
