#include <iostream>
using namespace std;

float x, tot, pt, sp = 67836.43,
rj = 36678.66,
mg = 29229.88,
es = 27165.48,
outr = 19849.53;

float calcula (float x, float y ){
    float porc = (y*100)/x;
    return porc;

}

int main()
{
    tot = sp + rj + mg + es + outr;

    pt =  calcula(tot,sp);
    cout << "O valor em porcetagem de SP foi: " << pt << "%" << '\n';
    pt=  calcula(tot,rj);
    cout << "O valor em porcetagem de RJ foi: " << pt << "%" << '\n';
    pt =  calcula(tot,mg);
    cout << "O valor em porcetagem de MG foi: " << pt << "%" << '\n';
    pt =  calcula(tot,es);
    cout << "O valor em porcetagem de ES foi: " << pt << "%" << '\n';
    pt =  calcula(tot,outr);
    cout << "O valor em porcetagem de OUTROS foi: " << pt << "%" << '\n'; 


}
