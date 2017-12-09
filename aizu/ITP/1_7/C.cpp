#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int n;
  int first[3][10];
  int second[3][10];
  int third[3][10];
  int fourth[3][10];
  int b, f, r, v;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      first[i][j] = 0;
      second[i][j] = 0;
      third[i][j] = 0;
      fourth[i][j] = 0;
    }
  }


  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d %d %d %d", &b, &f, &r, &v);
    if (b == 1){
      first[f - 1][r - 1] += v;
    } else if (b == 2) {
      second[f - 1][r - 1] += v;
    } else if (b == 3) {
      third[f - 1][r - 1] += v;
    } else if (b == 4) {
      fourth[f - 1][r - 1] += v;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %d", first[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %d", second[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %d", third[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %d", fourth[i][j]);
    }
    printf("\n");
  }

  return 0;
}