#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int r, c;
  int A[100][100];
  scanf("%d %d", &r, &c);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %d", first[i][j]);
    }
    printf("\n");
  }

  return 0;
}