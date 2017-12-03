#include <cstdio>
using namespace std;

int main ()
{
  int N;
  int x, a;
  int sum = 0;

  scanf("%d", &N);

  x = N;
  while (x > 0) {
    a = x % 10;
    x /= 10;
    sum += a;
  }

  if (N % sum == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}