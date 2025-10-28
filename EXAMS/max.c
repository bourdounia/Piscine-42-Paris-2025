/*
Nom de l'affectation : max
Fichiers attendus : max.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrivez la fonction suivante :

int max(int* tab, unsigned int len);

Le premier paramètre est un tableau de nombres entiers, le second le nombre d'éléments du tableau.

La fonction renvoie le plus grand nombre du tableau.

Si le tableau est vide, la fonction renvoie 0.

*/
int		max(int *tab, unsigned int len)
{
	int		i;							
	int		max_value;					

	max_value = 0;
	if (tab)							
	{
		i = 0;							
		max_value = tab[0];				
		while (i < len)					
		{
			if(tab[i] > max_value)		
				max_value = tab[i];		
			i++;						
		}
	}
	return (max_value);					
}

/*
int		main(void)
{
	int	arr[] = { 1,2,4,7,3,5,6,9};

	ft_putchar(max(arr, 8) + '0');
	ft_putchar('\n');
	return (0);
}
*/