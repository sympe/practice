#include <cstdio>
using namespace std;

int main ()
{
  int x;
  int sum = 0;
  int a;

  scanf("%d", &x);

  while (x > 0) {
    a = x % 10;
    x /= 10;
    sum += a;
  }

  printf("%d\n", sum);
  return 0;
}