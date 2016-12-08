#include<iostream>

using namespace std;

template <class T>
T *recebeBusca(T matriz[10][10], T escalar){
	T *vec = new T[2];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(escalar == matriz[i][j]){
				vec[0]=i;
				vec[1]=j;
				return vec;
			}
		}
	}
	vec[0]=-1;
	vec[1]=-1;
	return vec;
}


int main(){
	
	cout <<"\n\nTeste com int\n\n";
	
	int matriz[10][10];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			matriz[i][j] = ((i+j)*3)/2;
		}
	}
	
	int *vet;
	
	vet = (int*)recebeBusca(matriz,3);
	
	if(vet[0] != -1){
		cout <<"\nEncontrado na Linha: "<<vet[0]<<" Coluna: "<<vet[1]<<endl;
	}else{
		cout << "\nNão econtrado."<<endl;
	}
	
	cout <<"\n\nTeste com float\n\n";
	
	float matriz2[10][10];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			matriz2[i][j] = ((i+j)*3)/2;
		}
	}
	
	float *vet2;
	float esc = 3.0;
	
	vet2 = (float*)recebeBusca(matriz2,esc);
	
	if(vet[0] != -1){
		cout <<"\nEncontrado na Linha: "<<vet2[0]<<" Coluna: "<<vet2[1]<<endl;
	}else{
		cout << "\nNão econtrado."<<endl;
	}
	
	return 1;
}
