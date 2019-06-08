#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
  return n + sum(n-1);
}
int fib(int n){

return n;
}

int main()
{
  printf("Hello world!\n");
  int num=sum(5)
  printf("%d\n", fib(num));
  return 0;
}
