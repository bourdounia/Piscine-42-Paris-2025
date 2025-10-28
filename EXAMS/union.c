/*
Nom de l'affectation : union
Fichiers attendus : union.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend deux chaînes et affiche, sans doubles caractères,
les caractères qui apparaissent dans une seule des chaînes.

Les caractères seront affichés dans l'ordre où ils apparaissent sur la ligne de commande,
suivis d'un saut de ligne.

Si le nombre d'arguments n'est pas égal à 2, le programme affiche un saut de ligne.
*/

#include <unistd.h>

int		ft_check_symbol(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}


void	ft_union(char *s, char *u, int *p)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!ft_check_symbol(u, s[i]))
		{
			write(1, &s[i], 1);
			u[*p] = s[i];
			(*p)++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int p;
	char u[1024];

	if (argc == 3)
	{
		p = 0;
		ft_union(argv[1], u, &p);
		ft_union(argv[2], u, &p);
	}
	write(1, "\n", 1);
	return (0);
}