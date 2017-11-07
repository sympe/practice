#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int n;
vector<int> s(100000);
vector<int> t(100000);
pair<int, int> itv[100000];

void solve() {
  int ans = 0;
  int ft = 0;
  int i;

  for (i = 0; i < n; i++) {
    itv[i].first = t[i];
    itv[i].second = s[i];
  }

  sort(itv, itv + n);

  for (i = 0; i < n; i++) {
    if (ft < itv[i].second) {
      ans++;
      ft = itv[i].first;
    }
  }

  printf("%d\n", ans);
}

int main ()
{
  int i;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &s[i]);
  }

  for (i = 0; i < n; i++) {
    scanf("%d", &t[i]);
  }

  solve();

  return 0;
}