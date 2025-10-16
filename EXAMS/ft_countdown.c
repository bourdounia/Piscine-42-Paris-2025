/*Nom de l'affectation : ft_countdown
Fichiers attendus : ft_countdown.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui affiche tous les nombres par ordre décroissant, puis affiche une nouvelle ligne.*/

#include <unistd.h>

int main(void)
{
    write(1, "9876543210\n", 11);
    return (0);
}