/*Nom de l'affectation : aff_a
Fichiers attendus : aff_a.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et affiche le premier caractère « a », suivi d'un saut de ligne. Si la chaîne ne contient aucun caractère « a », le programme écrit simplement un saut de ligne. Si le nombre de paramètres est différent de 1, le programme affiche « a » suivi d'un saut de ligne.*/

#include <unistd.h>

int main(void)
{
    write(1, "a\n", 2);
    return (0);
}
