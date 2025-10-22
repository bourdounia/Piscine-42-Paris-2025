 /*
 Nom de l'affectation : search_and_replace
Fichiers attendus : search_and_replace.c
Fonctions autorisées : écrire, quitter
--------------------------------------------------------------------------------

Choisissez le programme avec search_and_replace, avec 3 arguments.
Le programme d'argumentation précédent - c'est ce qui vous permet de choisir et de réserver des billets.
Dans le programme de discussion - vous devez sélectionner les premiers achats, qui doivent être programmés.
Les trois programmes d'argumentation - vous devez utiliser les premiers achats, qui correspondent à vos achats dans votre propre argument.
L'argumentation, dans le cadre de votre achat, est de 3 millions d'arguments.

Si les arguments ne sont pas du même ordre que le numéro 3, vous devrez alors lancer un nouveau coup.

Si votre argument n'est pas pris en compte dans le temps (temps), alors le programme va commencer le travail pour que ce soit le nouveau travail.
 
 */
 
 
 
 
 
 #include <unistd.h>
 
  int     main(int argc, char **argv)
  {
      int i;
 
      if (argc !=4) 
      {
          write(1, "\n", 1); 
          return (0);
      }
 
      if (argv[2][1] != '\0' || argv[3][1] != '\0') 
      {
          write(1, "\n", 1);
          return (0);
      }
 
      i = 0;
      while (argv[1][i] != '\0')
      {
          if (argv[1][i] == argv[2][0]) 
              argv[1][i] = argv[3][0]; 
          write(1, &argv[1][i], 1);
          i++;
      }
       write(1, "\n", 1);
      return (0);
  }