#include <iostream>

using namespace std;

int main(){  

	int a[50],b[50],cont=1, soma=0,cont_sub=0;
	
	
	for(int l=0;l<50;l++)
		a[l] = cont++;
	cont=1;
	for(int l=0;l<50;l++)
		b[l] = cont++;
		
		
	cout<<"Segue o vetor A de 50 posicoes"<<endl;
	for(int i=0;i<50;i++)
	cout<<a[i]<<" ";

	cout<<endl;
	cout<<"Segue o vetor B de 50 posicoes"<<endl;
	for(int i=0;i<50;i++)
	cout<<b[i]<<" ";

    
    for(int i=50;i>25;i--){
	   soma = soma+(b[i]-a[cont_sub]);
	   cont_sub++;
    }
    
    cout<< " O valor da soma e: "<< soma<<endl;;
    
    
    system("PAUSE");
    return 0;
    
}