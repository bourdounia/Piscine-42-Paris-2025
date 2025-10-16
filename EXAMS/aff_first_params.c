/*Nom de l'affectation : aff_first_param
Fichiers attendus : aff_first_param.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui accepte des chaînes de caractères comme arguments et affiche leur premier argument, suivi d'un saut de ligne.

Si le nombre d'arguments est inférieur à 1, le programme affiche un saut de ligne.*/

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	i = 0;
	if (argc > 1)
	{
		while(argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}