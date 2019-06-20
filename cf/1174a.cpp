#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;
  int A[2*n] = {0};
  for(int a : A) {
    std::cin >> a;
  }
  for (int a : A) {
    if (a != A[0]) {
      std::cout << -1 << std::endl;
      return 0;
    }
  }


  std::set<int> 
}
