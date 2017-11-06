#include <vector>
#include <cstdio>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int A;
int C[6];

void solve() {
  int ans = 0;
  int i;

  for (int i = 5; i >= 0; i--) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];
    ans += t;
  }

  printf("%d\n", ans);
}

int main ()
{
  int i;

  for (i = 0; i < 6; i++) {
    scanf("%d", C[i]);
  }

  scanf("%d", &A);

  solve();

  return 0;
}