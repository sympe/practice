#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <utility>
using namespace std;

int main ()
{
  int n, k;
  int x;
  int count = 0;
  vector<int> A(50);
  pair<int, int> ans[100];

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    if (A[i] <= A[i+1]) {
      continue;
    } else {
      if (A[i] < 0 && A[i+1] < 0) {
        while(A[i] > A[i+1]) {
          A[i] += A[i+1];
          ans[count].first = i+2;
          ans[count].second = i+1;
          count++;
        }
      } else {
        while(A[i] > A[i+1]) {
          if (A[i] == 0) {
            A[i+1] += *max_element(A.begin(), A.begin() + n);
            vector<int>::iterator iter = std::max_element(A.begin(), A.begin() + n);
            ans[count].first = distance(A.begin(), iter) + 1;
            ans[count].second = i+2;
          } else {
            A[i+1] += A[i];
            ans[count].first = i+1;
            ans[count].second = i+2;
          }
          count++;
        }
      }
    }
  }

  printf("%d\n", count);
  for (int i = 0; i < count; i++) {
    printf("%d %d\n", ans[i].first, ans[i].second);
  }

  return 0;
}