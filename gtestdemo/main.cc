#include <stdio.h>


int add_int(int a, int b)
{
    return (a+b);
}

int minus_int(int a, int b)
{
    return (a-b);
}

int main(void) {
  printf("Hello CMake!\n");

  int res = add_int(10, 24);
  printf("10 + 24 = %d\n", res);

  res = minus_int(40, 96);
  printf("40 - 96 = %d\n", res);

  return 0;
}
