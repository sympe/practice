#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int r, c;
  int A[100][100];
  int x;
  scanf("%d %d", &r, &c);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i <= r; i++) {
    x = 0;
    for (int j = 0; j <= c; j++) {
      x += A[i][j];
      if (i == r) {
        printf("%d ", 1);
      } else {
        if (j == c) {
          printf("%d\n", x);
        } else {
          printf("%d ", A[i][j]);
        }
      }
    }
  }

  return 0;
}