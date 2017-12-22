#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int r, c;
  int A[100][100];
  int B[100];
  int x;
  int sum = 0;
  scanf("%d %d", &r, &c);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int j = 0; j < c; j++) {
    x = 0;
    for (int i = 0; i < r; i++) {
      x += A[i][j];
    }
    B[j] = x;
    sum += x;
  }

  for (int i = 0; i <= r; i++) {
    x = 0;
    for (int j = 0; j <= c; j++) {
      x += A[i][j];
      if (i == r) {
        if (j == c) {
          printf("%d\n", sum);
        } else {
          printf("%d ", B[j]);
        }
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