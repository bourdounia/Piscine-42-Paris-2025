/*
Nom de l'affectation : alpha_mirror
Fichiers attendus : alpha_mirror.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme appelé alpha_mirror qui prend une chaîne et l'affiche après avoir remplacé chaque caractère alphabétique par le caractère alphabétique opposé, suivi d'un saut de ligne.

« a » devient « z », « Z » devient « A »
« d » devient « w », « M » devient « N »

et ainsi de suite.

La casse reste inchangée.

Si le nombre d'arguments est différent de 1, afficher uniquement un saut de ligne.


*/



#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'M' - (av[1][i] - 'N');
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'm' - (av[1][i] - 'n');
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}