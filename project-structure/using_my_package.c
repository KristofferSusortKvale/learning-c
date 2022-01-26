#include <stdio.h>
#include "my_package.h"

int main() {
  int int_foo = public_foo(123);
  printf("%d\n", int_foo);
  return 0;
}
