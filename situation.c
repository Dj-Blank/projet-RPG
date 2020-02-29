#include <stdio.h>
#include <stdlib.h>
#include <situation.h>
//je veux ajouter des "events" = "situation" comme par exemple


/*printf("You're walking thru mountain corpses\n");
printf("You see a golden sword under the body of a disfigured monster\n");
printf("It is bright and shiny\n");
printf("It's a blessed sword, a gift from the divin\n");

printf("Here are your choices\n");*/

void Situation1()
{
    int choiceMenu;
    printf("1. Equipe The Golden sword [+50attack]\n");
    printf("2. Break it with your sword\n");
    printf("3. Leave\n");

    do {
        scanf("%d",&choiceMenu);
        switch (choiceMenu);



        case 1:

            {

            printf("You equiped the golden sword\n");
            printf("You feel the golden power running thru your body\n");
            printf("The Sword is sharp enough to cut boulders like butter\n");
            printf("You have aquired the weapon to carry gods will");

            }

        case 2:

            {

            printf("You broke the shiny artifact with your sword\n");
            printf("The Golden aura from the artifact turns crimson as your sword absorbs it\n");
            printf("x2 stat growth\n");
            printf("You have gained the body to challenge the gods\n");

            }

        case 3:

            {

            printf("You ignore the sword\n");
            printf("You have chosen to walk your own path\n");
            printf("Your likability increased\n");
            printf("+45% Persuation\n");

            }

    }
}

void situation1();#include <stdio.h>
#include <stdlib.h>
#include <situation.h>#include <stdio.h>
#include <stdlib.h>
#include <situation.h>
//je veux ajouter des "events" = "situation" comme par exemple




void Situation1()
{
    printf("You're walking through mountain corpses\n");
    printf("You see a golden sword under the body of a disfigured monster\n");
    printf("It is bright and shiny\n");
    printf("It's a blessed sword, a gift from the divine\n");

    int choiceMenu;
    printf("Here are your choices\n");
    printf("1. Equip The Golden sword [+50attack]\n");
    printf("2. Break it with your sword\n");
    printf("3. Leave it\n");

    do {
        scanf("%d",&choiceMenu);
        switch (choiceMenu);



        case 1:

            {

            printf("You've equiped the golden sword\n");
            printf("You feel the golden aura running through your body\n");
            printf("The Sword is sharp enough to cut boulders like butter\n");
            printf("You have acquired the weapon to carry gods will");

            }

        case 2:

            {

            printf("You broke the shiny artifact with your sword\n");
            printf("The Golden aura from the artifact turns crimson as your sword absorbs it\n");
            printf("x2 stat growth\n");
            printf("You have gained the body to challenge the gods\n");

            }

        case 3:

            {

            printf("You ignore the sword of fate\n");
            printf("You have chosen to walk your own path\n");
            printf("Your likability increased\n");
            printf("+10% Crit\n");

            }

    }
}


void Situation2()
{
    printf("You see an old man with ragged clothes and an unkept beard\n");
    printf("He looks like he was expecting for you\n");
    printf("His suspicious grin creeps you out\n");
    printf("But he looks lonely, like a grandfather waiting for his grandchild to visit him")
    int choiceMenu;

    printf("Here are your choices\n");
    printf("1. Give him company\n");
    printf("2. Stab him\n");
    printf("3. Ignore\n");
    do {
        scanf("%d",&choiceMenu);
        switch (choiceMenu);

     case 1 :

        {
            printf("You kept him company long enough to be called a day");
            printf("As you suddenly open your eyes, he was nowhere to be seen");
            printf("Your body turns bright for a moment");
            printf("You've acquired "ghosts affection" +40% in persuasion");
        }

     case 2 :

        {
            printf("Your Sword went through his body");
            printf("The old man's ghost turns black");
            printf("He want's to take control of your body");
            void Attack(); //on met un combat ici
        }

     case 3:
        {
            printf("You ignore the old man");
            printf("You have chosen to walk your own path\n");
            printf("Your likability increased\n");
            printf("+10% Crit\n");
        }

    }
}

//je veux ajouter des "events" = "situation" comme par exemple


/*printf("You're walking thru mountain corpses\n");
printf("You see a golden sword under the body of a disfigured monster\n");
printf("It is bright and shiny\n");
printf("It's a blessed sword, a gift from the divin\n");

printf("Here are your choices\n");*/

void Situation1()
{
    int choiceMenu;
    printf("1. Equipe The Golden sword [+50attack]\n");
    printf("2. Break it with your sword\n");
    printf("3. Leave\n");

    do {
        scanf("%d",&choiceMenu);
        switch (choiceMenu);



        case 1:

            {

            printf("You equiped the golden sword\n");
            printf("You feel the golden power running thru your body\n");
            printf("The Sword is sharp enough to cut boulders like butter\n");
            printf("You have aquired the weapon to carry gods will");

            }

        case 2:

            {

            printf("You broke the shiny artifact with your sword\n");
            printf("The Golden aura from the artifact turns crimson as your sword absorbs it\n");
            printf("x2 stat growth\n");
            printf("You have gained the body to challenge the gods\n");

            }

        case 3:

            {

            printf("You ignore the sword\n");
            printf("You have chosen to walk your own path\n");
            printf("Your likability increased\n");
            printf("+45% Persuation\n");

            }

    }
}

