#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  vector<int> x(3);

  for (int i = 0; i < 3; i ++) {
    scanf("%d", &x[i]);
  }

  sort(x.begin(), x.end());

  printf("%d %d %d\n", x[0], x[1], x[2]);

  return 0;
}