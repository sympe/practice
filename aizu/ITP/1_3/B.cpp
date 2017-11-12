#include <cstdio>
using namespace std;

int main ()
{
  int count = 1;
  int x;
  while (1) {
    scanf("%d", &x);
    if (x == 0) {
      return 0;
    }
    printf("Case %d: %d\n", count, x);
    count++;
  }
}