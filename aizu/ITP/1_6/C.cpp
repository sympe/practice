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

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d %d %d %d", &b, &f, &r, &v);
    if (b == 1){
      first[f - 1][r - 1] = v;
    } else if (b == 2) {
      second[f - 1][r - 1] = v;
    } else if (b == 3) {
      third[f - 1][r - 1] = v;
    } else if (b == 4) {
      fourth[f - 1][r - 1] = v;
    }
  }
  printf("\n");

  return 0;
}