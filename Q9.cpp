#include <iostream>

using namespace std;

int main(){    

	int matriz[8][8], aux=15, cont=10;//declaração das variaveis
	
	
	
	for(int l=0;l<8;l++)//adicionando valores a matriz
		for(int c=0;c<8;c++){
		matriz[l][c] = cont;
		cont++;
		}
	
	
	for(int l=0;l<8;l++){//mostrando a matriz para o usuario
		for(int c=0;c<8;c++)
		cout<< matriz[l][c] <<"\t";
	cout<<endl;
		}

	for(int l=0;l<8;l++){
		for(int c=0;c<aux;c++)
		if(l+c<9){ //verificando se a soma de l e c dao menor q 9, pq percebi q a diagonal secundaria é a soma de i+j, variando do tamanho 
			if(matriz[l][c]<aux){//consição para caso seja menor, e se for ele guarda na variavel aux
			aux=matriz[l][c];
			
			}
		}
	}	
	
	cout<<endl;
	cout<<aux<< " " <<endl;
	
	
    
    system("PAUSE");
    return 0;
    
}