#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  int n, x;
  char suit;
  vector<int> H(13);
  vector<int> S(13);
  vector<int> C(13);
  vector<int> D(13);

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%c", &suit);
    scanf("%d", &x);
    if (suit == 'H') {
      H[x - 1] = x;
    } else if (suit == 'S') {
      S[x - 1] = x;
    } else if (suit == 'C') {
      C[x - 1] = x;
    } else if (suit == 'D') {
      D[x - 1] = x;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (i == n - 1) {
      printf("%d\n", data[i]);
    } else {
      printf("%d ", data[i]);
    }
  }

  return 0;
}