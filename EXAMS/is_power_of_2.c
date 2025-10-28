/*
Nom de l'affectation : is_power_of_2
Fichiers attendus : is_power_of_2.c
Fonctions autorisées : Aucune
--------------------------------------------------------------------------------

Écrivez une fonction qui détermine si un nombre donné est une puissance de 2.

Cette fonction renvoie 1 si le nombre donné est une puissance de 2 ; sinon, elle renvoie 0.

Votre fonction doit être déclarée comme suit :

int is_power_of_2(unsigned int n);
*/

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}