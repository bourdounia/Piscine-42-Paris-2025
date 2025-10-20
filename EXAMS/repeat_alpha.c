/*
Nom de l'affectation : repeat_alpha
Fichiers attendus : repeat_alpha.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme nommé repeat_alpha qui prend une chaîne et l'affiche,
en répétant chaque caractère alphabétique un nombre de fois égal à son index alphabétique,
suivi d'un saut de ligne.

« a » devient « a », « b » devient « bb », « e » devient « eeeee », et ainsi de suite…

Si le nombre d'arguments est différent de 1, affichez simplement un saut de ligne.
*/
#include <unistd.h>
 
  int     realpha(char c)
  {
      int repeat;
 
      if (c >= 'A' && c <= 'Z') 
          repeat = c - 'A' + 1;
      else if (c >= 'a' && c <= 'z') 
          repeat = c - 'a' + 1;
      else
          repeat = 1;  
                      
      return (repeat);
  }
 
  int     main(int argc, char **argv)
  {
      int repeat;
 
      if (argc >= 2) 
      {
          while (*argv[1])
          {
              repeat = realpha(*argv[1]);
              while (repeat--)
                  write(1, argv[1], 1);
              argv[1]++;
          }
      }
      write(1, "\n", 1);
      return (0);
  }