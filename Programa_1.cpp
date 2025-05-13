#include <iostream>
#include <cstdlib>
#define TAM 10

using namespace std;

bool hola();

int main(){
  bool aux;

  aux = hola();

  if(aux == true){
    cout << endl;
    for(int i=0; i<TAM; i++){
      cout << "\tHola Mundo" << endl;
    }
  }else{
    cout << endl;
    cout << "Adios";
  } 

  return 0;
}

bool hola(){
  bool aux;
  char resp;
  do{
    cout << "Quieres que el mundo sea saludado? s/n: ";
    cin >> resp;
  }while(resp != 's' && resp != 'S' && resp != 'N' && resp != 'n');

  if(resp == 's' || resp == 'S'){
    aux = true;
  }else{
    aux = false;
  }

  return aux;
}