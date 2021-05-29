#include <iostream>

using namespace std;

int main(){    

	int tam;
	
	
	cout<< " Digite o tamanho dos 2 vetores a ser calculado o produto escalar"<<endl;
	cin>>tam;
	
	int v1[tam],v2[tam], p_escalar=0;
	cout<<"Digite o primeiro vetor de tamanho "<<tam<<endl;
	for(int i=0;i<tam;i++)
	cin>>v1[i];
	cout<<"Digite o segundo vetor de tamanho "<<tam<<endl;
	for(int i=0;i<tam;i++)
	cin>>v2[i];
	
	
	for(int i=0;i<tam;i++)
		p_escalar = p_escalar+(v1[i]*v2[i])	;

	cout<< " O produto escalar e: "<<p_escalar<<endl;

    
    system("PAUSE");
    return 0;
    
}