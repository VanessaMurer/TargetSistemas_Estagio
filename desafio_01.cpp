#include <iostream>
using namespace std;

bool isFibonacci(int numero) {
    
    if (numero < 0)
        return false;

   
    int fib_anterior = 0, fib_atual = 1;

    
    if (numero == 0 || numero == 1)
        return true;

   
    while (fib_atual <= numero) {
        if (fib_atual == numero){
          return true;
        } 
        else {
          int proximoFib = fib_anterior + fib_atual;
          fib_anterior = fib_atual;
          fib_atual = proximoFib;
        }
    }

   
    return false;
}

int main() {  
    int numero;
    cout << "Digite um número: ";
    cin >> numero;


    if (isFibonacci(numero)) {
        cout << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << numero << " NÃO pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}