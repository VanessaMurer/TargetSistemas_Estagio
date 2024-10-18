#include <iostream>
using namespace std;

int letraA (string palavra){
  int contadorA = 0;

  for(char letra : palavra){
    if(letra == 'a' || letra == 'A'){
      contadorA++;
    }
  }

  return contadorA;
}

int main(){
  
  string palavra;
  cout << "Digite uma palavra: ";
  cin >> palavra;

  int qtdA = letraA(palavra);

  if(qtdA == 0){
    cout << "A palavra " << palavra << " possui 0 letras A." << endl;
  }
  else {
    cout << "A palavra " << palavra << " possui " << qtdA <<  " letras A." << endl;
  }

  return 0;
}