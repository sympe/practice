#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main ()
{
  int n, x;
  int min, max;
  int sum = 0;
  vector<int> data(10001);

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    data[i] = x;
    sum += x;
  }

  min = *min_element(data.begin(), data.begin() + n);
  max = *max_element(data.begin(), data.begin() + n);

  printf("%d %d %d\n", min, max, sum);

  return 0;
}