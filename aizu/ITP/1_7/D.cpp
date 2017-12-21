#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int n, m, l;

  scanf("%d %d %d", &n, &m, &l);
  int A[100][100];
  int B[100][100];
  int C[100][100];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      C[i][j] = 0;
      for (int k = 0; k < m; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      if (j == l - 1) {
        printf("%d\n", C[i][j]);
      } else {
        printf("%d ", C[i][j]);
      }
    }
  }

  return 0;
}