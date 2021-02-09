#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int codpeca1, numpecas1, codpeca2, numpecas2;
    double valorpeca1, valorpeca2, total;

    cin >> codpeca1 >> numpecas1 >> valorpeca1 >> fixed >> setprecision(2);

    cin >> codpeca2 >> numpecas2 >> valorpeca2 >> fixed >> setprecision(2);

    total = numpecas1 * valorpeca1 + numpecas2 * valorpeca2;
    
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
