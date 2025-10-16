/*Nom de l'affectation : ft_print_numbers
Fichiers attendus : ft_print_numbers.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez une fonction qui affiche tous les nombres par ordre croissant.

Votre fonction doit être déclarée comme suit :

void ft_print_numbers(void);*/

#include <unistd.h>

void    ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}
/* Pour verifier ton code ;)
int main(void)
{
    ft_print_numbers();
}
*/