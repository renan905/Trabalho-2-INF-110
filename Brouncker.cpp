#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    long double ultimo, pi = 1, ultimoPi=0,a,b,c;

    long long int impar;

    long int termos = 10000;


    for(long int i = termos; i >= 1 ; i--){

        impar = (2.0*i) - 1.0;
        cout << "Impar  " << impar;

        if (i == termos){
            a = 2 + (impar * impar);
            cout << "  primeiro " << a << endl;
        }

        if (i != termos){
            a = 2 + ((impar * impar) / a);
            cout << "   iteração   "<< i << "  pi  " << a << endl;
        }
 

    }

    c = 1.0 / a;

    cout << setprecision (100) << c/ 4;

    return 0;


}