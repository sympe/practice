#include <cstdio>
using namespace std;

int main ()
{
  char X;
  char Y;
  scanf("%c", &X);
  scanf(" %c", &Y);
  if (X > Y) {
    printf(">\n");
  } else if (X < Y) {
    printf("<\n");
  } else {
    printf("=\n");
  }
  return 0;
}