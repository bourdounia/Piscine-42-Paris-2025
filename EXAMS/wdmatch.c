/*
Nom de l'affectation : wdmatch
Fichiers attendus : wdmatch.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend deux chaînes et vérifie s'il est possible d'écrire
la première chaîne avec les caractères de la seconde, en respectant l'ordre d'apparition de ces caractères dans la seconde chaîne.

Si c'est possible, le programme affiche la chaîne suivie d'un saut de ligne ; sinon, il affiche simplement un saut de ligne.

Si le nombre d'arguments est différent de 2, le programme affiche un saut de ligne.
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str2[j])
	{
		if (str1[i] == str2[j++])
			i++;
		if (!str1[i])
			ft_putstr(str1);
	}
}
int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1][0], argv[2][0]);
	ft_putstr("\n");
	return (0);
}