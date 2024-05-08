
#include <stdio.h>

int
main ()
{

  int d;

  printf ("insira um valor de 1 a 7:\n");
  scanf ("%d", &d);

  switch (d)
	{
	case 1:

	  printf ("domingo.\n");
	  break;

	case 2:
	  printf ("segund-feira.\n");
	  break;

	case 3:
	  printf ("terca-feira.\n");
	  break;

	case 4:
	  printf ("quarta-feira.\n");
	  break;

	default:
	  printf (" invalido.\n");
	  break;
	}

  return 0;
}
