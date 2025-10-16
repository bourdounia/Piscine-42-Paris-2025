/*Nom de l'affectation : hello
Fichiers attendus : hello.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui affiche « Hello World!» suivi d'un saut de ligne.*/

#include <unistd.h>

int main(void)
{
    write(1, "Hello World!\n", 13);
    return (0);
}