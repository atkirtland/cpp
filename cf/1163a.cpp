#include <bits/stdc++.h>

int main(void) {
  int n, m;
  std::cin >> n >> m;
  int ans;
  if (m == 0) {
    ans = 1;
  }
  else if (m <= n/2) {
    ans = m;
  }
  else {
    ans = n-m;
  }
  std::cout << ans << std::endl;
  return 0;
}
