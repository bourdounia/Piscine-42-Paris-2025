/*
Nom de l'affectation : ft_swap
Fichiers attendus : ft_swap.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrivez une fonction qui échange le contenu de deux entiers dont les adresses sont passées en paramètres.

Votre fonction doit être déclarée comme suit :

void ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}