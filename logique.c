#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"

//IMPRESSION FICHIER
//BUT : ECRIRE LA SAISIE DANS LE FICHIER TEXTE
//ENTREE : SAISIE UTILISATEUR
//SORTIE : FICHIER TEXTE EDITE
void printfichier(tId* Identite)
{
    FILE * pIds;
    pIds=fopen("ids.txt","a");
    fprintf(pIds,"Nom : %s\n",Identite->sNom);
    fprintf(pIds,"Prenom : %s\n",Identite->sPrenom);
    fprintf(pIds,"Code Postal : %s\n",Identite->sCodePostal);
    fprintf(pIds,"Ville : %s\n",Identite->sVille);
    fclose(pIds);
}
