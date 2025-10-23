/*
Nom de l'affectation : rev_print
Fichiers attendus : rev_print.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et l'affiche à l'envers, suivie d'un saut de ligne.

Si le nombre de paramètres est différent de 1, le programme affiche un saut de ligne.
*/

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;						

	i = 0;						
	while(str[i])				
		i++;					
								
	return (i);
}
void	ft_rev_print(char *str)
{
	int i;						

	i = ft_strlen(str);			
	while(i)					
	{
		i--;					
		write(1, (str + i), 1);	 
								
	}
}

int		main(int argc, char *argv[])	
{
	if (argc == 2)						
		ft_rev_print(argv[1]);
	write(1 ,"\n", 1);					
	return (0);							
}