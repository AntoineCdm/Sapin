#include "sapin.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
  /* Vérification de la validité de l'argument initial */
  if (argc < 2)
  {
    my_putstr("The input argument must be given as a postive number.\n");
    return (0);
  }

  int size = atoi(argv[1]);

  sapin(size);
  
  return (0);
}
