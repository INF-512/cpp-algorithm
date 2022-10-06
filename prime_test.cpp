#include <iostream>
#include <math.h>

namespace alg {
  
  bool is_prime(int x) {
    for (int i = sqrt(x); i >=2; i--)
      if (x % i == 0)
        return false;
    return x >= 2;
  }
  
}

int main() {
  
  for (int i = 1; i <= 50; i++)
    if (alg::is_prime(i))
      printf("%d ", i);
  printf("\n");
  
	return 0;
}
