#include <cstdio>

int main ()
{
  int a;
  int b;

  scanf("%d", &a);
  scanf("%d", &b);

  if (a < b) {
    printf("a < b\n");
  } else if (a > b) {
    printf("a > b\n");
  } else {
    printf("a == b\n");
  }

  return 0;
}