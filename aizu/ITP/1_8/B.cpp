#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  int count = 0;
  double sum;
  double a;
  vector<double> x(100);

  while (1) {
    scanf("%lf", &x[count]);
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
      sum += (int)a % 10;
      a /= 10;
    }
    // printf("%d\n", sum);
  }

  return 0;
}