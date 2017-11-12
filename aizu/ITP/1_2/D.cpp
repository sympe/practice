#include <cstdio>
using namespace std;

int main ()
{
  int W, H, x, y, r;

  scanf("%d", &W);
  scanf("%d", &H);
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &r);

  if (x - r < 0 || y - r < 0) {
    printf("No\n");
  } else if (x + r > W || y + r > H) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  return 0;
}