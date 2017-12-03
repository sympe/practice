#include <cstdio>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;

int main ()
{
  int N;
  int Z, W;
  vector<int> a(2000);
  int i;
  int x, s, tmp, t;

  scanf("%d", &N);
  scanf("%d", &Z);
  scanf("%d", &W);

  for (i = 0; i < n; i+=) {
    scanf("%d", &a[i]);
  }

  t = 0;
  x = 0;
  s = W;
  while (t < n - 1) {
    for (i = t; i < n; i++) {
      tmp = max(x, a[i]);
      if (tmp >= x) {
        x = tmp;
        t = i;
      }
    }

    for (i = t; i < n; i++) {
      tmp = min(s, a[i]);
      if (tmp <= s) {
        s = tmp;
        t = i;
      }
    }
  }

  if (x-s > 0) {
    printf("%d\n", x-s);
  } else {
    printf("%d\n", s-x);
  }

  return 0;
}