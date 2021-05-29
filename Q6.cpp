#include <iostream>

using namespace std;

int main(){    
	
	int v1[10],impar=0, par=0;
	
	
	cout<<"Insira 10 numeros "<<endl;
	for(int i=0;i<10;i++)
	cin>>v1[i];
	
	cout<<"segue os 10 numeros "<<endl;
	for(int i=0;i<10;i++)
	cout<<v1[i]<<" ";
	
	cout<<endl;
	
	for(int i=0;i<10;i++)
	if(v1[i]%2==0)
	par++;
	else
	impar++;
		
		
	int v2[par],v3[impar],aux1=par,aux2=impar;
	
	
	for(int i=0;i<10;i++)
		if(v1[i]%2==0){
		v2[par-1] =v1[i];
		par--;}
		else{
		v3[impar-1]=v1[i];
		impar--;}
		
	
	
	
	
	
	cout<<"segue os numeros impares "<<endl;
	for(int i=0;i<aux2;i++)
	cout<<v3[i]<< " ";
	
	cout<<endl;
	cout<<"segue os numeros pares "<<endl;
	for(int i=0;i<aux1;i++)
	cout<<v2[i]<< " ";

    
    system("PAUSE");
    return 0;
    
}