#include <iostream>
using namespace std;

int main()
{
  int n, aux=0, temp=0, u=1, z=0;

  cout << "Digite o valor a ser checado: ";
  cin >> n;

  while(aux<n){
  
  temp = z;
  
  z = u;
  u = u + temp;
  aux = temp;
  }
  if (aux==n){
    cout << "Faz parte da sequencia.";
  }
  else{
    cout << "Não faz parte da sequencia.";
  }
  
}
