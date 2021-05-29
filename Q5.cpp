#include <iostream>

using namespace std;

int main(){    

	int matriz[10][10],cont=1,aux;
	
	for(int l=0;l<10;l++)
		for(int c=0;c<10;c++)
		matriz[l][c] = cont++;


	cout<<"Segue a matriz "<<endl;
	for(int l=0;l<10;l++){
		for(int c=0;c<10;c++)
		cout<<matriz[l][c] <<"\t";
	cout<<endl;
		
	}
    
    for(int l=0;l<10;l++)
		for(int c=0;c<10;c++){
			if(l<c){
			aux = matriz[c][l];
			matriz[c][l] =matriz[l][c];
			matriz[l][c] = aux;
			}
		}
		
	cout<<"Segue a matriz alterada "<<endl;
	for(int l=0;l<10;l++){
		for(int c=0;c<10;c++)
		cout<<matriz[l][c] <<"\t";
	cout<<endl;
		
	}
		
    
    
    
    
    system("PAUSE");
    return 0;
    
}