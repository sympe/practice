#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  int n, x;
  vector<int> data(100);

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    data.insert(data.begin(), x);
  }

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d\n", data[i]);
    } else {
      printf("%d ", data[i]);
    }
  }

  return 0;
}