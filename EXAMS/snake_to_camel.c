/*
Nom de l'affectation : snake_to_camel
Fichiers attendus : snake_to_camel.c
Fonctions autorisées : malloc, free, realloc, write
--------------------------------------------------------------------------------

Écrivez un programme qui accepte une chaîne unique au format snake_case et la convertit en chaîne au format lowerCamelCase.

Une chaîne snake_case est une chaîne dont chaque mot est en minuscules et séparé par un trait de soulignement (_).

Une chaîne lowerCamelCase est une chaîne dont tous les mots, sauf le premier, commencent par une majuscule.
*/
#include <unistd.h>

void	snake_to_camel(char *str)
{
	while (*str != '\0')
	{
		if (*str == '_')
		{
			++str;
			*str = *str - ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}