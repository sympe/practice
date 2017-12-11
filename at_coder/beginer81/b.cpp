#include <cstdio>
#include <vector>
using namespace std;

int main ()
{
  int n;
  int count = 0;
  vector<int> A(200);

  scanf("%d", &n);

  for (int i =0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  while (1) {
    for (int i = 0; i < n; i++) {
      if (A[i] % 2 != 0) {
        printf("%d\n", count);
        return 0;
      }
    }
    count++;
    for (int i = 0; i < n; i++) {
      A[i] /= 2;
    }
  }
}