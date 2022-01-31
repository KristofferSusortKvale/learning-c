#include <stdio.h>
#include "my-package/my_package.h"

int main() {
  int x = foo(123);
  printf("%d\n", x);
  return 0;
}
