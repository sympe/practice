#include <cstdio>
using namespace std;

int main ()
{
  int N;
  int A;
  int B;
  int C;
  scanf("%d", &N);
  scanf("%d", &A);
  scanf("%d", &B);
  C = N * A;
  if (C > B) {
    printf("%d\n", B);
  } else {
    printf("%d\n", C);
  }
  return 0;
}