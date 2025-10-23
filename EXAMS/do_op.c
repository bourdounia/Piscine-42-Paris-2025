/*
Nom de l'affectation : do_op
Fichiers attendus : *.c, *.h
Fonctions autorisées : atoi, printf, write
--------------------------------------------------------------------------------

Écrivez un programme qui prend trois chaînes :
- La première et la troisième sont des représentations d'entiers signés en base 10
qui tiennent dans un int.
- La seconde est un opérateur arithmétique choisi parmi : + - * / %

Le programme doit afficher le résultat de l'opération arithmétique demandée,
suivi d'un retour à la ligne. Si le nombre de paramètres n'est pas égal à 3, le programme
affiche simplement un retour à la ligne.

La chaîne doit être considérée comme exempte d'erreurs et de caractères superflus. Les nombres négatifs, en entrée comme en sortie, seront précédés d'un seul « - ». Le résultat de l'opération
tient dans un int.

*/


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int result;
	char op;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}