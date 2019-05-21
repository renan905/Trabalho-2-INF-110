#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){

    bool salvarDadosEmArquivo = true; // coloque em true para salvar os dados em em arquivo txt

    int total = 1000000; //Numero total de termos a serem calculados
    double ultimo = 0;

    long double pi = 1;

    //Abrir e criar arquivo onde seram salvos os passos e os valores de pi
	ofstream tabela;
	tabela.open("dataViete.txt");
	tabela << "iteracao" << "," << "pi" << endl;

    for (int i = 0 ; i <= total; i++){

        //Calcula valor de PI
        ultimo = sqrt(2.0 + ultimo);
        pi = (ultimo / 2 ) * pi;

        //Escrever valores para arquivo
        if (salvarDadosEmArquivo == true)
            if((i < 20 ) || ( i % 100 == 0)) tabela << i << "," << setprecision (100) << 2.0 / pi << endl;
    }

    cout << setprecision (100) << 2.0 / pi;// Valor Final de PI

    return 0;
    // Fim do codigo
}