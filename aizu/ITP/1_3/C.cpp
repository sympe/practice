#include <algorithm>
#include <cstdio>
#include <utility>
using namespace std;

int main ()
{
  int x, y;
  int count = 0;
  pair<int, int> data[3000];
  while (1) {
    scanf("%d", &x);
    scanf("%d", &y);
    if (x == 0 && y == 0) {
      break;
    }
    data[count].first = min(x, y);
    data[count].second = max(x, y);
    count++;
  }

  for (int i = 0; i < count; i++) {
    printf("%d %d\n", data[i].first, data[i].second);
  }

  return 0;
}