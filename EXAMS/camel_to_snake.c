/*
Nom de l'affectation : camel_to_snake
Fichiers attendus : camel_to_snake.c
Fonctions autorisées : malloc, free, realloc, write
--------------------------------------------------------------------------------

Écrivez un programme qui convertit une chaîne de caractères au format lowerCamelCase en chaîne de caractères snake_case.

Une chaîne lowerCamelCase est une chaîne dont tous les mots commencent par une majuscule, sauf le premier.

Une chaîne snake_case est une chaîne dont tous les mots sont écrits en minuscules et séparés par un trait de soulignement « _ ».
*/

#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + ('a' - 'A');
		}
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}