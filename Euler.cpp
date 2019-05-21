#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){

    bool salvarDadosEmArquivo = true; // coloque em true para salvar os dados em em arquivo txt

    long long int termos = 1000000;  //Numero total de termos a serem calculados
    long double ultimo;
    long double pi = 0;

    //Abrir e criar arquivo onde seram salvos os passos e os valores de pi
	ofstream tabela;
	tabela.open("dataEuler.txt");
	tabela << "iteracao" << "," << "pi" << endl;
    
    for (long long int i = 1.0 ; i <= termos ; i++){

        //Calcular Valor de PI
        ultimo = (6.0 / (i * i) );
        pi = pi + ultimo;

        //Escrever valores para arquivo
        if (salvarDadosEmArquivo == true)
            if((i < 20 ) || ( i % 100 == 0)) tabela << i << "," << setprecision (100) << sqrt(pi) << endl;
    }

    cout << setprecision(100) << sqrt(pi) << endl; // Valor Final de PI

    return 0;

    //Fim do codigo
}