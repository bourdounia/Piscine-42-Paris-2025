/*
Nom de l'affectation : ft_strrev
Fichiers attendus : ft_strrev.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrivez une fonction qui inverse (sur place) une chaîne.

Elle doit renvoyer son paramètre.

Votre fonction doit être déclarée comme suit :

char *ft_strrev(char *str);

*/


int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}