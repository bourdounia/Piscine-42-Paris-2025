 /*
 Nom de l'affectation : ulstr
Fichiers attendus : ulstr.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne et inverse la casse de chaque lettre.
Les autres caractères restent inchangés.

Le résultat doit être affiché suivi d'un saut de ligne.

Si le nombre d'arguments est différent de 1, le programme affiche « \n ».
 */
 
 #include <unistd.h>
 
  int     main(int argc, char *argv[])
  {
      int i;
      char letter;
 
      i = 0;
      if (argc == 2) 
      {
          while (argv[1][i]) 
          {
               letter = argv[1][i];
              if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
              if (argv[1][i] >= 'a' && argv[1][i] <= 'z') 
              write(1, &letter, 1); 
              i += 1; 
          }
      }
      write(1, "\n", 1);
      return (0);
  }