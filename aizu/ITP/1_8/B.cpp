#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string str;
  int count = 0;
  int sum;
  int a;
  vector<string> strList;

  while (1) {
    cin << str;
    
    if (x[count] == 0) {
      break;
    }
    count++;
  }

  for (int i = 0; i < count; i++) {
    sum = 0;
    a = x[i];
    printf("%f\n", a);
    while (a > 0) {
      printf("%f\n", sum);
      sum += a % 10;
      a /= 10;
    }
    // printf("%d\n", sum);
  }

  return 0;
}