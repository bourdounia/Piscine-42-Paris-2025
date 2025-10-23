/*
Nom de l'affectation : rot_13
Fichiers attendus : rot_13.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et l'affiche, en remplaçant chacune de ses lettres par les 13 lettres suivantes, par ordre alphabétique.

« z » devient « m » et « Z » devient « M ». Le résultat reste inchangé.

Le résultat sera suivi d'une nouvelle ligne.

Si le nombre d'arguments est différent de 1, le programme affiche une nouvelle ligne.
*/

#include <unistd.h>
 
  void    ft_putchar(char c)
  {
      write(1, &c, 1);
  }
  int     rot_13(char c)
  {
      if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
          c += 13;
      else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <='z'))
          c -= 13;
      return (c);
  }
  int     main(int argc, char **argv)
  {
      if (argc == 2)
      {
          while (*argv[1])
          {
              ft_putchar(rot_13(*argv[1]++));
          }
      }
      ft_putchar('\n');
      return (0);
  }