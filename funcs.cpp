
#include <iostream>
#include "funcs.h"


// Add your functions here
int fib (int num){
  if(num < 3)
    return 1;
  else
    return fib(num-1)+fib(num-2);
}

int sum (int a, int b){
  return a + b;
}

int main(){
  std::cout << fib(8) << " " << fib(2) << std::endl;
  std::cout << sum(4,6) << " " << sum(2,3) << std::endl;
  return 0;
}
