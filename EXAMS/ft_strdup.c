/*
Nom de l'affectation : ft_strdup
Fichiers attendus : ft_strdup.c
Fonctions autorisées : malloc
--------------------------------------------------------------------------------

Reproduisez le comportement de la fonction strdup (man strdup).

Votre fonction doit être déclarée comme suit :

char *ft_strdup(char *src);
*/

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = (char*)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}




