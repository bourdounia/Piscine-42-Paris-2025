/*
Nom de l'affectation : ft_putstr
Fichiers attendus : ft_putstr.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez une fonction qui affiche une chaîne sur la sortie standard.

Le pointeur passé à la fonction contient l'adresse du premier caractère de la chaîne.

Votre fonction doit être déclarée comme suit :

void ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
