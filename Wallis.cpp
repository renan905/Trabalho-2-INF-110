#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){

    bool salvarDadosEmArquivo = true; // coloque em true para salvar os dados em em arquivo txt

    int termos = 1000000; //Numero total de termos a serem calculados
    long double pi = 1;
    double ultimo;

	//Abrir e criar arquivo onde seram salvos os passos e os valores de pi
	ofstream tabela;
	tabela.open("dataWallis.txt");
	tabela << "iteracao" << "," << "pi" << endl;

    for (int i = 1; i <= termos; i++){
  
        // Calcula os valores de PI
        ultimo = (((2.0 * i) / (2.0 * i - 1.0)) * ( (2.0 * i) / ( 2.0 * i + 1.0)));
        pi = pi * ultimo;
        
        //Escrever valores para arquivo
        if (salvarDadosEmArquivo == true)
            if((i < 20 ) || ( i % 100 == 0)) tabela << i << "," << setprecision (100) << (pi*2) << endl;
    }

    cout << setprecision (100) << (pi * 2) << endl; // Valor Final de PI

    return 0;
    // Fim do codigo
}