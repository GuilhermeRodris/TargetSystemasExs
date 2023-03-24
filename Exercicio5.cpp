#include <iostream>
#include <string>
using namespace std;

string p;

int main()
{
    cout << "Digite a palavra a ser invertida: ";
    cin >> p;

    int j = p.length() - 1;
    for(int i = 0; i < p.length()/2; i++)
    {
        char t = p[i];
        p[i] = p[j];
        p[j] = t;
        j--;
    }
    cout << "A palavra invertida fica sendo: " << p;
}
