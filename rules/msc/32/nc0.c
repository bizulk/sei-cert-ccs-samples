// MSC32-C: Noncompliant Code Example (POSIX)
#include <stdio.h>
#include <stdlib.h>
  
void func(void) {
  for (unsigned int i = 0; i < 10; ++i) {
    /* Always generates the same sequence */
    printf("%ld, ", random());
  }
}
