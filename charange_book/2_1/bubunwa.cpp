#include <cstdio>
using namespace std;

int a[20];
int n, k;

bool dfs(int i, int sum) {
  if (i == n) {
    return sum == k;
  }

  if (dfs(i + 1, sum)) {
    return true;
  }

  if (dfs(i + 1, sum + a[i])) {
    return true;
  }

  return false;
}

int main ()
{
  int i;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  scanf("%d", &k);

  if (dfs(0, 0)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}