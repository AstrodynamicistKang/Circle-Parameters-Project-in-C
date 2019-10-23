#include <stdio.h>
#include "UDH.h"

int callout(int x) {
  printf("Argument is %i, output is %i\n", x, x++);
  return 0;
}