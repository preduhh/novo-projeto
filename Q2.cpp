#include <iostream>

using namespace std;

int main(){    

	char v1[10], v2[10],v3[20]={' '},v4[10];
	
	
	cout<< "Digite o primeiro conjunto"<<endl;//recebendo o primeiro conjunto
	for(int cont=0;cont<10;cont++)
	cin>>v1[cont];

	cout<< "Digite o segundo conjunto"<<endl;//recebendo o segundo conjunto
	for(int cont=0;cont<10;cont++)
	cin>>v2[cont];
	
	
	for(int i=0;i<20;i++)//fazendo a união
		if(i<10)
		v3[i]=v1[i];
		else
		v3[i]=v2[i-10];
		
		
	
	cout<< "A uniao dos conjuntos e: "<<endl;//imprimindo a união
	cout<<" { ";
	for(int cont=0;cont<20;cont++)
	cout<<v3[cont];
	cout<<" } "<<endl;
	
	for(int i=0;i<10;i++)//fazendo a interseccao
		for(int j=0;j<10;j++)
		if(v1[i]==v2[j])
		v4[i]=v2[j];
		
	cout<<endl;
	cout<< "A interseccao dos conjunto e: "<<endl;//imprimindo a interseccao
	cout<<" { ";
	for(int cont=0;cont<10;cont++)
	cout<<v4[cont];
	
	cout<<" } "<<endl;
    
    system("PAUSE");
    return 0;
    
}