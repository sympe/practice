#include <vector>
#include <cstdio>
using namespace std;

int N;
vector<char> S(2000);
vector<char> T(2000);

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
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", S[i]);
  }

  solve();

  return 0;
}