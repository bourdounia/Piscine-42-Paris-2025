/*
Nom de l'affectation : inter
Fichiers attendus : inter.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend deux chaînes et affiche, sans doubles caractères, les caractères qui apparaissent dans les deux chaînes, dans l'ordre où ils apparaissent dans la première.

Ceci sera suivi d'un saut de ligne.

Si le nombre d'arguments n'est pas égal à 2, le programme affiche un saut de ligne.
*/
#include <unistd.h>
int     ft_verif_char(char *str, char c, int index)
{
    int i;

    i = 0;
    while (str[i] && (i < index || index == -1))
    {
        if (str[i] == c)
        return (0);
        i++;
    }
    return (1);
}

void	ft_inter(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i])
    {
        if (ft_verif_char(s1, s1[i], i) && !ft_verif_char(s2, s1[i], -1))
        write(1, &s1[i], 1);
        i++;
    }
}
int		main(int argc, char **argv)
{
    if (argc == 3)
    ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);	
}