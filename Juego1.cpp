#include <iostream>
#include <time.h>
#include <windows.h>
#include <sstream>
#include <string>

using namespace std;

int numero,dig1,dig2,dig3,dig4,sum;
char opcion,dig11,dig22,dig33,dig44;
string numero1;

void separar_digitos(int num)
{
dig1=num/1000;
dig2=(num%1000)/100;
dig3=(num%100)/10;
dig4=(num%10);
}

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
cout<<"Ingrese un numero de 4 digitos: "<<endl;
cin>>numero;
separar_digitos(numero);

cout<<"Elige una opcion: \n A.Indicar cuanto da la suma de sus digitos. \n B.Eliminar los numeros pares del numero. \n C.Eliminar los numeros impares del numero. \n D.Eliminar los numeros repetidos del numero. \n E.Salir del programa. \n \nNota: Asegurate de responder con mayusculas."<<endl;	
cin>>opcion;

switch(opcion){
	
	case 'A': 
	
		sum= dig1+dig2+dig3+dig4;
		cout<<"La suma de los digitos del numero es: "<<sum<<endl;
	break;
	
	case 'B':
		
		
		
		if(dig1%2==0){
			
			dig1=0;			
		}
		if(dig2%2==0){
			
			dig2=0;			
		}
		if(dig3%2==0){
			
			dig3=0;			
		}
		if(dig4%2==0){
			
			dig4=0;			
		}
		cout<<"Asi quedaria el numero= "<<dig1<<dig2<<dig3<<dig4<<endl;
		
	break;
		
	case 'C':
		
		if(dig1%2==1){
			
			dig1=0;			
		}
		if(dig2%2==1){
			
			dig2=0;			
		}
		if(dig3%2==1){
			
			dig3=0;			
		}
		if(dig4%2==1){
			
			dig4=0;			
		}
		cout<<"Asi quedaria el numero= "<<dig1<<dig2<<dig3<<dig4<<endl;
		
	break;	
	
	case 'D':
		
		
		if(dig1==dig2){
			if(dig1==dig2&&dig1==dig3){
				if(dig1==dig2&&dig1==dig3&&dig1==dig4){
					dig1=0;
					dig2=0;
					dig3=0;
					dig4=0;
				}
					dig1=0;
					dig2=0;
					dig3=0;
			}
			
				dig1=0;
				dig2=0;
				
		}
		
		if(dig2==dig3){
			if(dig2==dig3&&dig2==dig4){									
					dig2=0;
					dig3=0;
					dig4=0;
				}
					dig2=0;
					dig3=0;
			}
			
			
		if(dig3==dig4){
			if(dig3==dig4&&dig3==dig1){
				
					dig1=0;					
					dig3=0;
					dig4=0;
				}
					dig4=0;
					dig3=0;
			}
			
		if(dig1==dig3){
			
				dig1=0;
				dig3=0;
				
			}
			
		if(dig1==dig4){
			
				dig1=0;
				dig4=0;
				
			}
		cout<<"Asi quedaria el numero= "<<dig1<<dig2<<dig3<<dig4<<endl;
		
				
		break;
	
	case 'E':
	
		cout<<"Fin del programa."<<endl;
	break;
	
	default:
		cout<<"¡Has ingresado una opcion erronea!"<<endl;	
	break;
		
}
return 0;
}




