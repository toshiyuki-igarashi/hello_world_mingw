#include <stdio.h>

/*
 * expected output :
 *

Hello World!
_POSIX_C_SOURCE:31069

 * but it fails on github action
compile main.c
main.c: In function 'main':
main.c:14:34: error: '_POSIX_C_SOURCE' undeclared (first use in this function)
   printf("_POSIX_C_SOURCE:%x\n", _POSIX_C_SOURCE);
                                  ^~~~~~~~~~~~~~~
main.c:14:34: note: each undeclared identifier is reported only once for each function it appears in
##[error]Process completed with exit code 1.*/

int main(void){
  printf("Hello World!\n");
#if !defined(_POSIX_C_SOURCE)
  printf("_POSIX_C_SOURCE is not defined.\n");
#else
  printf("_POSIX_C_SOURCE:%x\n", _POSIX_C_SOURCE);
#endif

  return 0;
}
