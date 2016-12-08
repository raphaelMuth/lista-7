/*Usando o mesmo codigo da quest�o anterior vemos o que se pede nessa quest�o.
Se observamos, quando passamos uma matriz por Valor no par�metro ela n�o faz altera��es
na matriz. J� quando passamos por referencia ela � capaz de modificar a matriz mesmo
que ela n�o seja uma variavel local.
*/

#include<iostream>
#include<time.h>

using namespace std;

void passaPorReferencia(int **m, int linha, int coluna){
	int matriz[linha][coluna];
	for(int i=0;i < linha;i++){
		for(int j=0;j< coluna;j++){
			matriz[i][j] = m[i][j];
		}
	}
}

void passaPorValor(int m[500][500], int l, int c){
	int matriz[l][c];
	for(int i=0;i < l;i++){
		for(int j=i;j< c;j++){
			matriz[i][j] = m[i][j];
		}
	}	
}


int main(){

	int **matriz = new int*[500];
	for(int i = 0; i < 500; i++)
	{
		matriz[i] = new int[500];
	}
	
	for(int i=0;i < 500;i++){
		for(int j=0;j< 500;j++){
			matriz[i][j] = i*j;
		}
	}
	
	clock_t inicio,fim;
	inicio = clock();
	for(int i=0;i<500;i++){
		passaPorReferencia(matriz,500,500);
	}
	fim = clock() - inicio;
	double tempo = (fim * 1000.0) / CLOCKS_PER_SEC;
	cout <<endl<<"Tempo passado por referencia: "<<fim;
	
	int matriz2[500][500];
	for(int i=0;i < 500;i++){
		for(int j=0;j< 500;j++){
			matriz[i][j] = i*j;
		}
	}
	
	inicio = clock();
	for(int i=0;i<500;i++){
		passaPorValor(matriz2,500,500);
	}
	fim = clock() - inicio;
	tempo = (fim * 1000.0) / CLOCKS_PER_SEC;
	cout <<endl<<"Tempo passado por referencia: "<<fim;
	
}
