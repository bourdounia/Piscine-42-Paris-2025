/*
Nom de l'affectation : ft_strcmp
Fichiers attendus : ft_strcmp.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Reproduisez le comportement de la fonction strcmp (man strcmp).

Votre fonction doit être déclarée comme suit :

int ft_strcmp(char *s1, char *s2);

*/


int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}