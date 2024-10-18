#include <iostream>
using namespace std;

int main(){
  int i = 12, soma = 0, k = 1;

  while (k < i)
  {
    k = k + 1;
    soma = soma + k;
  } 

  cout << soma;
  
}