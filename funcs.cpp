
#include <iostream>
#include "funcs.h"


// Add your functions here
int fib (int n){
  if(n < 3)
    return 1;
  else
    return fib(n-1)+fib(n-2);
}

int sum (int n){
  if(n<1)
    return 0;
  else
    return n+sum(n-1);
}
