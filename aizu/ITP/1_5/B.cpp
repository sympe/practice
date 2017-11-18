#include <cstdio>
#include <math.h>
using namespace std;

int main ()
{
  int r;
  double S, L;

  scanf("%d", &r);

  L = 2 * r * M_PI;
  S = r * r * M_PI;

  printf("%f %f\n", S, L);

  return 0;
}