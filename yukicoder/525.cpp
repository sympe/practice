#include <cstdio>
using namespace std;

int main ()
{

  int a, b;
  int c;
  scanf("%d %d", &a, &b);

  c = b / a;
  if (b % a == 0) {
    printf("%d\n", c);
  } else {
    printf("%d\n", c + 1);
  }

  return 0;
}