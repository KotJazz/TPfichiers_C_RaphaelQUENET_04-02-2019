#ifndef ID_H_INCLUDED
#define ID_H_INCLUDED
#define TAILLE 20

typedef struct tId
{
    int nId;
    char sNom[TAILLE];
    char sPrenom[TAILLE];
    char sCodePostal[TAILLE];
    char sVille[TAILLE];
}tId;
extern void menu(int*);
extern void saisie(tId*);
extern void lecture();
extern void printfichier(tId*);

#endif // ID_H_INCLUDED
