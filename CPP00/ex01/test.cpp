#include <stdio.h>

int test1()
{
  printf("hello\n");
  return 0;
}

int test2()
{
  printf("world\n");
  return 1;
}

int main()
{
  int n = -15;

  int (*(functions[2]))() = {test1, test2};

  n = functions[0]();

  printf("%d\n", n);
  return 0;
}
