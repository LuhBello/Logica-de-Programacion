#include <iostream>
#include <time.h>
#include <windows.h>
#include <sstream>

string numero;

using namespace std;

bool SeRepite(char b, string cad)
{
	
	int contador=0;
	for(int i=0; i<cad.size(); ++i)
		
		if(b==cad[i])
			contador++;
	if(contador>1)
		return true;
	return false;		
		
	
}

void EliminaLasCoincidencias(char e, string &cad){
	
	for(int i=0; i<cad.size(); ++i)
		if(e==cad[i]){
			
			cad.erase(i,1);
			i--;
		}
			
}

string EnteroToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}


int main()
{
        cout<<"Escribre otra vez el numero, por favor."	<<endl;		           		
		getline(cin, numero);
		
		for(int i; i<numero.size(); ++i){
			
			if(SeRepite(numero[i], numero))
				EliminaLasCoincidencias(numero[i], numero);
		}
		cout<<"El numero sin digitos repetidos seria asi= "<<numero<<endl;
	
		return 0;
		
	}
