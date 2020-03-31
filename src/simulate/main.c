// Importamos el módulo estandar de input / output
#include <stdio.h>
#include <stdlib.h>
#include "titanic.h"

/** La función main ES EL PROGRAMA */
int main(int argc, char** argv)
{
  // Los statements deben estar terminados por un ;
  printf("Hello Titanic\n");

  printf("%i\n", terminal1 -> primera -> siguiente -> n);
  destruir_terminal(terminal1);

  // 0 significa que el programa terminó correctamente
  // Cualquier otro numero entre 1 y 255 significa error
  return 0;
}
