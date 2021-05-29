#include <iostream>

using namespace std;

int main(){    
	int vetor[5], aux=0;
	
	cout<< "Digite 5 Numeros"<<endl;
	for(int cont=0;cont<5;cont++)
	cin>>vetor[cont];
	
	
	cout<< "Os 5 numeros digitados sao: "<<endl;
	for(int cont=0;cont<5;cont++){
	cout<<vetor[cont]<< " ";
	if(vetor[cont]<0)
	aux++;
	}
	
	
	cout<< "Dos 5 numeros digitador, apenas "<< aux <<" sao negativos";



    
    system("PAUSE");
    return 0;
    
}