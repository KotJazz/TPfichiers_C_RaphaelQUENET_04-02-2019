#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"
//MENU
//BUT : PERMETTRE A L'UTILISATEUR DE CHOISIR UNE OPTION
//ENTREE : SAISIE UTILISATEUR
//SORTIE : ENTIER DETERMINANT LA SUITE DU DEROULEMENT DU PROGRAMME.
void menu(int* nEntrees)
{
    int nChoix;
    tId Identite;
    do
    {
        printf("Saisissez 1 pour creer un nouvel ID.\nSaisissez 2 pour lire les ID.\nSaisissez 0 pour quitter.");
        fflush(stdin);
        scanf("%d",&nChoix);
        switch(nChoix)
        {
            case 1 :
                saisie(&Identite);
                printfichier(&Identite);
                nEntrees++;
                break;
            case 2 :
                lecture(&Identite);
                break;
            default :
                break;
        }
    }while (nChoix!=0);
}

//SAISIE
//BUT : SAISIR L'IDENTITE DE QQUN
//ENTREE : SAISIE UTILISATEUR, VARIABLE "Identite" NULLE
//SORTIE : VARIABLE "Identite" INITIALISEE
void saisie(tId* Identite)
{
    fflush(stdin);
    printf("\nNom :\n");
    scanf("%s",Identite->sNom);
    fflush(stdin);
    printf("\nPrenom :\n");
    scanf("%s",Identite->sPrenom);
    fflush(stdin);
    printf("\nCode Postal :\n");
    scanf("%s",Identite->sCodePostal);
    fflush(stdin);
    printf("\nVille :\n");
    scanf("%s",Identite->sVille);
}
