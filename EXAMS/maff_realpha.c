/*Nom de l'affectation : maff_revalpha
Fichiers attendus : maff_revalpha.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui affiche l'alphabet dans l'ordre inverse, avec les lettres paires en majuscules et les lettres impaires en minuscules, suivi d'un saut de ligne.*/

#include <unistd.h>

int main(void)
{
    write(1, "zYxWuTsRqPoNmLkJiGfEdCbA\n", 25);
    return (0);
}