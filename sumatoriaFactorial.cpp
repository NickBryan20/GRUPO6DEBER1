#include <iostream>
using namespace std;

double factorial(int f1, int f2) {
  double fact = 1;
  if (f1 >= 3 && f1 <= 15) {
    for (int i = 1; i <= f1; i++) {
      for (int k = 1; k < f2; k++)
        fact = fact * k; // fact*=i
    }
  } else
    fact = -1;

  return fact;
}

int main(int argc, char *argv[]) {
  cout << factorial(3, 15);
  return 0;
}
