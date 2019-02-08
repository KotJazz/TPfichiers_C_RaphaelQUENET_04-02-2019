#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"

//LECTURE
//BUT : LIRE LE FICHIER TEXTE
//ENTREE : FICHIER TEXTE
//SORTIE : AFFICHAGE
void lecture()
{
    //VAR
    FILE * pIds;
    char ch;
    //
    pIds=fopen("ids.txt","r");
    while((ch = fgetc(pIds)) != EOF)
        printf("%c",ch);
    fclose (pIds);
}
