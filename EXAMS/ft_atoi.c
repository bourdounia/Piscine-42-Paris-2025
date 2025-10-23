/*
Nom de l'affectation : ft_atoi
Fichiers attendus : ft_atoi.c
Fonctions autorisées : Aucune
--------------------------------------------------------------------------------

Écrivez une fonction qui convertit l'argument chaîne « str »
en entier (type int) et le renvoie.

Son fonctionnement est identique à celui de la fonction standard atoi(const char * str);
voir le manuel « man ».

Votre fonction doit être déclarée comme suit :

int ft_atoi(const char *str);
*/

int		ft_atoi(const char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}