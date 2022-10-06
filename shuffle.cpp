#include <iostream>
#include <ctime>

namespace alg {
  
  void init() {
    srand(time(0));
  }
  
  template<class T>
  void shuffle(T * a, int n) {
    for ( ; n > 1; n--)
      std::swap(a[n - 1], a[rand() % n]);
  }
  
}

int main() {
  
  int a[25];
  
  for (int i = 0; i < 25; i++)
    a[i] = i;
  
  alg::init();
  alg::shuffle(a, 25);
  
  for (auto & x : a)
    printf("%d ", x);
  
	return 0;
}
