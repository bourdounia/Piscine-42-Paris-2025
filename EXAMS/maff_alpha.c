/*Nom de l'affectation : maff_alpha
Fichiers attendus : maff_alpha.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui affiche l'alphabet avec les lettres paires en majuscules et les lettres impaires en minuscules, suivi d'un saut de ligne.*/

#include <unistd.h>

int main(void)
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 26);
    return (0);
}