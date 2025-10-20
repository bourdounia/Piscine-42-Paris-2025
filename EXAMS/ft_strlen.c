/*
Nom de la mission : ft_strlen
Fichiers attendus : ft_strlen.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Exploitez la fonction, celle-ci s'allume et vous activez les symboles de course.


Cette fonction est juste pour vous aider à résoudre le problème :

int ft_strlen(char *str);
*/

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    i++;
    return (i);
}