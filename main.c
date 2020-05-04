#include <stdio.h>

/*
 * expected output :
 *

Hello World!
_POSIX_C_SOURCE:31069

*/

int main(void){
  printf("Hello World!\n");
  printf("_POSIX_C_SOURCE:%x\n", _POSIX_C_SOURCE);
  return 0;
}
