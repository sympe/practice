#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int n;
int x = 0;
vector<int> A(500000);

void merge(int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  vector<int> L(n);
  vector<int> R(n);

  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }

  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }

  L[n1] = 1000000001;
  R[n2] = 1000000001;
  int i = 0;
  int j = 0;

  for (int k = left; k < right; k++) {
    x++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }
    else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort (int left, int right) {
  int mid;
  if (left + 1 < right){
    mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main ()
{
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  mergeSort(0, n);

  for (int i = 0; i < n; i++) {
    if (i == n-1) {
      printf("%d", A[i]);
    } else {
      printf("%d ", A[i]);
    }
  }
  printf("\n%d\n", x);

  return 0;
}