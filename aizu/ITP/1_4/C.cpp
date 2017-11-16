#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main ()
{
  int x, y;
  char op;
  int count = 0;
  vector<int> data(10000);
  while (1) {
    scanf("%d", &x);
    scanf(" %c", &op);
    scanf("%d", &y);
    if (op == '?') {
      break;
    } else if (op == '+') {
      data[count] = x + y;
    } else if (op == '-') {
      data[count] = x - y;
    } else if (op == '*') {
      data[count] = x * y;
    } else if (op == '/') {
      data[count] = x / y;
    }
    count++;
  }

  for (int i = 0; i < count; i++) {
    printf("%d\n", data[i]);
  }

  return 0;
}