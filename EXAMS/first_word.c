/*
Nom de l'affectation : first_word
Fichiers attendus : first_word.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et affiche son premier mot, suivi d'un saut de ligne.

Un mot est une section d'une chaîne, séparée par des espaces/tabulations ou le début/la fin d'une ligne.

Si le nombre de paramètres est différent de 1 ou qu'il n'y a aucun mot, affichez simplement un saut de ligne.
*/

#include <unistd.h>


int		ft_isspace(char i)												
{
	if (i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ')	
		return (1);														
	return (0);															
}

void	ft_first_word(char *str)
{
	while (ft_isspace(*str))				
		str++;								
	while (*str && !(ft_isspace(*str)))		
		write(1, str++, 1);					
}


int		main(int argc, char *argv[])		
{
	if (argc == 2)							
		ft_first_word(argv[1]);				
	write(1, "\n", 1);						
	return (0);					
}