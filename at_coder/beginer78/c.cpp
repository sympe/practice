#include <cstdio>
#include <math.h>
using namespace std;

int main ()
{
  int N, M;
  int x, y;

  scanf("%d", &N);
  scanf("%d", &M);

  x = pow(2, M);
  y = (1900 * M + (N - M) * 100) * x;

  printf("%d\n", y);

  return 0;
}