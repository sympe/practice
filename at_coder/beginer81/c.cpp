#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <utility>
using namespace std;

int main ()
{
  int n, k;
  int x;
  int ans = 0;
  vector<int> A(200000);

  scanf("%d", &n);
  scanf("%d", &k);

  for (int i = 0; i < n; i++) {
    A[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    A[x-1] += 1;
  }

  sort(A.begin(), A.begin() + n);

  for (int i = 0; i < n - k; i++) {
    if (A[i] == 0) {
      continue;
    }
    ans += A[i];
  }

  printf("%d\n", ans);

  return 0;
}