#include <cstdio>
#include <vector>
#include <math.h>
#include <utility>
using namespace std;

int main ()
{
  int N, x;
  int xmax;
  int maxmax;
  int ans = 0;
  int tmp;
  int zeroflag = 0;
  vector<int> f(100);

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    f[i] = 0;
    for (int j = 0; j < 10; j ++) {
      scanf("%d", &x);
      f[i] += x;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= 10; j++) {
      scanf("%d", &x);
      if (i == 0 && j == 1) {
        maxmax = x;
      }
      if (j <= f[i]) {
        if (j == 0) {
          xmax = x;
        } else {
          if (x > xmax) {
            xmax = x;
            zeroflag = 1;
          }
          if (x > maxmax) {
            maxmax = x;
          }
        }
      }
    }
    ans += xmax;
  }

  if (zeroflag == 1) {
    printf("%d\n", ans);
  } else {
    printf("%d\n", maxmax);
  }

  return 0;
}