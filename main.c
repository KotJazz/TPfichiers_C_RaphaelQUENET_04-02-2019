#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"

//MAIN
int main()
{
    FILE *pCpt;
    int nEntrees;
    pCpt=fopen("cpt.bin","rb");
    fread(&nEntrees,sizeof(int),1,pCpt);
    fclose(pCpt);
    menu(&nEntrees);
    pCpt=fopen("cpt.bin","wb");
    fwrite(&nEntrees,sizeof(int),1,pCpt);
    fclose(pCpt);
}
