#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
        
  bool salvarDadosEmArquivo = true; // coloque em true para salvar os dados em em arquivo csv
  
  long long int termos = 1000000; //Numero total de termos a serem calculados
  long double pi = 0; 
	
	//Abrir e criar arquivo onde seram salvos os passos e os valores de pi
	ofstream tabela;
	tabela.open("dataLeibniz.txt");
	tabela << "iteracao" << "," << "pi" << endl;

  //Calcular PI
  for (long long int i = 1; i <= termos; i++){

    if (i%2 == 0) pi -= 4.0/((2.0*i) - 1.0); // Calcula o valor de pi para termos pares
    if (i%2 != 0) pi += 4.0/((2.0*i) - 1.0); // Calcula o valor de pi para termos impares

    //Escrever valores para arquivo
    if (salvarDadosEmArquivo == true)
      if((i < 20 ) || ( i % 100 == 0)) tabela << i << "," << setprecision (100) << pi << endl;

  }
  
  cout <<  setprecision (100) << pi << endl; // Valor Final de PI

  return 0;

  // Fim do codigo
}