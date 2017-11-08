#include <cstdio>
#include <math.h>

int main ()
{
  int x;
  int y;
  int S;
  int L;

  scanf("%d", &x);
  scanf("%d", &y);
  S = x * y;
  L = x * 2 + y * 2;
  printf("%d %d\n", S, L);

  return 0;
}