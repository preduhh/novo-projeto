#include <iostream>

using namespace std;

int main(){    

	int colunas, linhas,aux=0;
	
	
	cout<<" Qual o numero de colunas da matriz?"<<endl;
	cin>>colunas;
	
	cout<<" Qual o numero de linhas da matriz?"<<endl;
	cin>>linhas;
	
	int m[linhas][colunas], repete[linhas];
	
	
	for(int l=0;l<linhas;l++){
		cout<<"Linha "<<l+1<<endl;
		for(int c=0;c<colunas;c++)
		cin>>m[l][c];
		
	}
	
	for(int l=0;l<linhas;l++){
		for(int c=0;c<colunas;c++)
		cout<<m[l][c]<<" ";
	cout<<endl;
		
	}
	
	
	for(int l=0;l<linhas;l++){
		for(int c=0;c<colunas;c++)
		if(m[l][c]==m[c][l]){
		repete[l] = m[l][c];
		aux++;
		}
	}
	
	for(int i=0;i<linhas;i++)
		cout<<repete[i]<< " ";
		
	cout<<endl;
    system("PAUSE");
    return 0;
    
}