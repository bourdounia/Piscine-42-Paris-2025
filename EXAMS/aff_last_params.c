/*
Nom de l'affectation : aff_last_param
Fichiers attendus : aff_last_param.c
Fonctions autorisées : écrire
--------------------------------------------------------------------------------

Sélectionnez le programme qui comporte des actions dans les principaux arguments et
отображает последний аргумент, за которым следует новая строка.

Si les arguments sont dans le menu 1, le programme lance un nouveau coup.


*/


#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	i = 0;
	if (argc > 1)
	{
		while(argv[argc - 1][i])
			write(1, &argv[argc - 1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}