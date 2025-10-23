
/*
Nom de l'affectation x : rotone
Fichiers attendus : rotone.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et l'affiche, en remplaçant chacune de ses lettres par la suivante dans l'ordre alphabétique.

« z » devient « a » et « Z » devient « A ». La casse reste inchangée.

La sortie sera suivie d'un \n.

Si le nombre d'arguments est différent de 1, le programme affiche \n.
*/

#include <unistd.h>

void	ft_rotone(char *str)
{
	int		i;					
	
	i = 0;						
	while (str[i])				
    
	{
		if (str[i] >= 'A' && str[i] <= 'Y')		
			str[i] += 1;
		if (str[i] >= 'a' && str[i] <= 'y')		
        
			str[i] += 1;
		if (str[i] == 'z' || str[i] == 'Z')		
			str[i] -= 25;
		write(1, (str + i), 1);					
		i++;									
	}
}



int		main(int argc, char *argv[])	/* здесь принимаем количество строк в массиве и сам массив со строками */
{
	if (argc == 2)						/* Проверяем есть ли там кроме имени программы в аргументах еще одна строка в которой мы хотим изменить буквы. */
		ft_rotone(argv[1]);
	write(1, "\n", 1);					/* Печатаем символ перехода на новую строку */
	return (0);							/* Завершаем программу */
}