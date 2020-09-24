#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int num1,num2,num3,num4,num5,choto,choto1,resultado1,resultado, count;
	
	srand(time(NULL));
	num1=1+rand()%(10-1);
	num2=1+rand()%(10-1);
	num3=1+rand()%(10-1);
	num4=1+rand()%(3-1);
	num5=1+rand()%(4-1);
	count=0;
 do{
		
	
	if (num4==1){
		choto=num1+num2-num3;
			 if (num5==1){
				cout<<num1<<"+"<<"___"<<"-"<<"___"<<"="<<choto<<endl;
				cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=num1+resultado1-resultado;
				 				 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 	
				}
	   		if (num5==2){
	   	 		cout<<"___"<<"+"<<num2<<"-"<<"___"<<"="<<choto<<endl;
	   			cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=resultado1+num2-resultado;
				 				 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 
				}
		 	if	(num5==3){
		 		cout<<"___"<<"+"<<"___"<<"-"<<num3<<"="<<choto<<endl;
		 		cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=resultado1+resultado-num3;
				 				 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 
		 		}
	}else{
		choto=num1-num2+num3;
	     	if (num5==1){
				cout<<num1<<"-"<<"___"<<"+"<<"___"<<"="<<choto<<endl;
				cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=num1-resultado1+resultado;				
				 				 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 
				}
	   	 	if (num5==2){
	   	 		cout<<"___"<<"-"<<num2<<"+"<<"___"<<"="<<choto<<endl;
	   			cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=resultado1-num2+resultado;
								 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 
				}
		 	if	(num5==3){
				cout<<"___"<<"-"<<"___"<<"+"<<num3<<"="<<choto<<endl;
				cout<<"Escribe el primer numero que falta"<<endl;
				cin>>resultado1;
				cout<<"Escribe el segundo numero que falta"<<endl;
				cin>>resultado;
				choto1=resultado1-resultado+num3;
				 				 
					if (choto1==choto){
						cout<<"Eres el mejor"<<endl;
					}else{
						cout<<"Sigue intentando"<<endl;
					}
				 
				}
   		}
   	 count+=1;	
   	 cout<<"El resultado correcto es: " <<endl;
   	 cout<<"El numero 1 es: "<<num1<<endl;
	 cout<<"El numero 2 es: "<<num2<<endl;
	 cout<<"El numero 3 es: "<<num3<<endl;
   	 srand(time(NULL));
	 num1=1+rand()%(10-1);
	 num2=1+rand()%(10-1);
 	 num3=1+rand()%(10-1);
	 num4=1+rand()%(3-1);
	 num5=1+rand()%(4-1);
	}while(choto1==choto);
	cout<<"Quedaste en el nivel: " << count <<endl;
	return 0;	
}
