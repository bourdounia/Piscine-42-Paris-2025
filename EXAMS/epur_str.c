/*
Nom de l'affectation : epur_str
Fichiers attendus : epur_str.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et l'affiche avec exactement
un espace entre les mots, sans espace ni tabulation au début ni à la fin, et suivi d'un retour à la ligne.

Un « mot » est défini comme une portion de chaîne séparée par des espaces/tabulations ou
le début/la fin de la chaîne.

Si le nombre d'arguments est différent de 1 ou s'il n'y a aucun mot à afficher, le programme affiche un retour à la ligne.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

void	ft_epur_str(char *str)
{
	int	flag;

	flag = 0;
	while (ft_is_space(*str))
		str++;
	while (*str)
	{
		if (ft_is_space(*str))
			flag = 1;
		if (!ft_is_space(*str))
		{
			if (flag)
				ft_putchar(' ');
			flag = 0;
			ft_putchar(*str);
		}
		str++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}