#include <stdio.h>
#include <stdlib.h>
#include "journey.h"

void journey (struct Player* p)

{
    int choicejourney;
    int monstre = 1;
    printf("You are a fallen hero of a falling kingdom, you've won countless of battles in the name of your people but in the end \nbefore claiming your last victory, you've been betrayed by your own companions.\n\n");
    printf("They have been always secretly envious of your will and title as the great hero of war.\n\n");
    printf("Little did they know, upon receiving that title. You also have received the attention of the goddess of compassion.\n\n");
    printf("Between life and death you see her, she cries for your fate and decides to give you another chance to live for your desires.\n\n");
    printf("You became the hero who crave for revenge.");
    getch();
    loading();
    system("cls");
    printf("You see a random scavenger, looting for scraps of war.\n\n");
    printf("1.Kill him and absorb his soul\n2.Ignore him");
	do
    {
        scanf("%d",&choicejourney);
        switch(choicejourney)
        {
            case 1:
                system("cls");
                printf("You fight him with your rusted sword.\n");
                start(monstre);
                getch();
                system("cls");
                loading();
                printf("You killed him with no mercy.\n\n");
                printf("You continue movie forward seeking for your revenge\n");
                int choicejourney1;
                printf("You stumble in front of 2 deserters\n");
                printf("They look at you dumbfounded, as they recognized you and they thought of you to be dead\n\n");
                printf("1.Kill them\n2.Ignore them");
                do
                {
                    scanf("%d",&choicejourney1);
                    switch(choicejourney1)
                    {
                        case 1:
                            loading();
                            system("cls");
                            start(monstre);
                            start(monstre);
                            printf("You killed them, you feel yourself growing stronger from each kills");
                            int choicejourney2;
                            printf("You see a group of soldiers pillaging a village\n");
                            printf("1.Save the village\n2.Ignore them");
                            do
                            {
                                scanf("%d",&choicejourney2);
                                switch(choicejourney2)
                                {
                                    case 1:
                                        system("cls");
                                        loading();
                                        start(monstre);
                                        start(monstre);
                                        start(monstre);
                                        printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                        break;

                                    case 2:
                                        printf("You have chosen to ignore their death cries and continue your path");
                                        system("cls");
                                        loading();
                                        adventure(p);
                                        break;

                                    default:
                                        printf("Please choose a number between 1 and 2 \n");
                                        break;

                                }
                            }
                            while (choicejourney2!=2);

                        case 2:
                                printf("You have chosen to ignore the deserters and continue forth towards your journey for revenge");
                                system("cls");
                                loading();
                                adventure(p);
                                int choicejourney3;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney3);
                                        switch(choicejourney3)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                start(monstre);
                                                start(monstre);
                                                start(monstre);
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                                break;

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure(p);
                                                break;

                                            default:
                                                printf("Please choose a number between 1 and 2 \n");
                                                break;

                                        }
                                }
                                while (choicejourney3!=2);

                        default:
                            printf("Please choose a number between 1 and 2 \n");
                            break;
                    }

                }
                while (choicejourney1!=2);

            case 2:
                printf("You've chosen to ignore them and continue your way");
                system("cls");
                loading();
                adventure(p);
                printf("You continue movie forward seeking for your revenge");
                int choicejourney4;
                printf("You stumble in front of 2 deserters\n");
                printf("They look at you dumbfounded, as you are supposed to be dead\n");
                printf("1.Kill them and absorb their life force\n2.Ignore them");
                do
                {
                    scanf("%d",&choicejourney4);
                        switch(choicejourney4)
                        {
                            case 1:

                                loading();
                                system("cls");
                                start(monstre);
                                start(monstre);
                                printf("You killed them, you feel yourself growing stronger from each kills\n");
                                int choicejourney5;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney5);
                                        switch(choicejourney5)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                start(monstre);
                                                start(monstre);
                                                start(monstre);
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                                break;

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure(p);
                                                break;
                                            default:

                                                printf("Please choose a number between 1 and 2 \n");
                                                break;


                                        }
                                }
                                while (choicejourney5!=2);

                            case 2:
                                printf("You have chosen to ignore the deserters and continue forth towards your journey for revenge");
                                system("cls");
                                loading();
                                adventure(p);
                                int choicejourney6;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney6);
                                        switch(choicejourney6)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                start(monstre);
                                                start(monstre);
                                                start(monstre);
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure(p);
                                            default:

                                                printf("Please choose a number between 1 and 2 \n");
                                                break;


                                        }

                                }
                                while (choicejourney6!=2);
                            default:
                                printf("Please choose a number between 1 and 2 \n");
                                break;
                        }

                }
                while (choicejourney4!=2);
            }
        }

        while (choicejourney!=2);
}
