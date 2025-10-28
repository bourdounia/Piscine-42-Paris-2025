/*
Nom de l'affectation : fizzbuzz
Fichiers attendus : fizzbuzz.c
Fonctions autorisées : write

--------------------------------------------------------------------------------

Écrivez un programme qui affiche des nombres de 1 à 100, séparés par des sauts de ligne.

Si le nombre est un multiple de 3, affichez « fizz » à la place.

Si le nombre est un multiple de 5, affichez « buzz » à la place.

Si le nombre est à la fois un multiple de 3 et un multiple de 5, affichez « fizzbuzz » à la place.
*/

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_fizzbuzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		++i;
	}
}

int		main(void)
{
	ft_fizzbuzz();
	return (0);
}
