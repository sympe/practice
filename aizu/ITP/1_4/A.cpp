#include <cstdio>
#include <math.h>
using namespace std;

int main ()
{
  int a, b;
  int d, r;
  double f;

  scanf("%d", &a);
  scanf("%d", &b);

  d = a / b;
  r = a % b;
  f = a * 1.0 / b;

  printf("%d %d %f\n", d, r, f);

  return 0;
}