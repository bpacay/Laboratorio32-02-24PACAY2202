#include <iostream>

using namespace std;

int Operadoresyvariables(){
    float  x1, x2, r1, r2, r3, r4;
    
    cout<<"porfavor ingresar dos numeros enteros \n";
    cout<<"variable 1: ";
    cin>>x1;
    cout<<"variable 2: ";
    cin>>x2;
    r1 = x1 + x2;
    r2 = x1 - x2;
    r3 = x1 * x2;


    cout<<"se mostraran los resultados de las suma, resta, multiplicacion y divicion de ambos numeros: \n";
    cout<<"suma: "<<x1<<"+"<<x2<<"="<<r1<<"\n";
    cout<<"resta: "<<x1<<"-"<<x2<<"="<<r2<<"\n";
    cout<<"multiplicasion: "<<x1<<"*"<<x2<<"="<<r3<<"\n";
    
    if(x2 != 0){
		r4 = x1 / x2;
		cout<<"divicion: "<<x1<<"/"<<x2<<"="<<r4<<"\n";
	} else{
		cout<<"divicion: no se puede divinir entre cero \n";
	}
    
	system("PAUSE");
	system("cls");
	return 0;
	}
	
int calcularPotencia(){
	int n1;
	int m2;
	float res = 1;
	
	cout<<"Porfavor ingresar un numero entero y luego su exponente \n";
    cout<<"Variable: ";
    cin>>n1;
    cout<<"Exponente: ";
    cin>>m2;
    
    if (m2 == 0){
    	res = 1;
    	cout<<"el valor "<<n1<<" elevado a "<<m2<<" es igual a "<<res<<"\n";
	}else if(m2 < 0){
		for(int i=0;i>m2;i--){
			res = n1*res;
		}
		res = 1/res;
		cout<<"el valor "<<n1<<" elevado a "<<m2<<" es igual a "<<res<<"\n";
	}else if(m2 > 0){
		for(int i=0;i<m2;i++){
			res = n1*res;
		}
		cout<<"el valor "<<n1<<" elevado a "<<m2<<" es igual a "<<res<<"\n";
	}
	
	system("PAUSE");
	system("cls");
    return 0;
}

int esPrimo(){
	int num;
	cout<<"porfavor ingresar un numero entero para conocer si es primo o no \n";
    cout<<"variable: ";
    cin>>num;
    
    if(num == 1 or num == 0  or num < 0){
    	cout<<"No es un numero primo\n";
		}else if(num==2 or num==3){
			cout<<"Es un numero primo\n";
			return 0;
			}else {for(int i=2;i<num;i++){
			if(num%i == 0){
			cout<<"No es un numero primo\n";
			return 0;
			}}}
			
	if (num%1 == 0 and num%num == 0){
		cout<<"Es un numero primo\n";
	}
	
	system("PAUSE");
	system("cls");
	return 0;
}

int esBisiesto(){
	int a;

	cout<<"Coloque un año para verificar si es bisiesto o no\n";
	cin>>a;
	if (a%100 == 0 and a%400==0){
		cout<<"el año es bisiesto\n";
	} else if(a%100 == 0){
		cout<<"el año no es bisiesto\n";
	}else if(a%4 == 0){
		cout<<"el año es bisiesto\n";
	}else{
		cout<<"el año no es bisiesto\n";
	}
	system("PAUSE");
	system("cls");
	return 0;
}
int main(){
    
    int option;
    
    while (1==1)
{
	cout<<"Que deseas realizar: \n 1. Operadores y Variables \n 2. Potencias \n 3. Primos \n 4. año bisiesto \n 5. salir \n";
	cin>>option;
	switch (option)
	{
	case 1:
		Operadoresyvariables();
		break;
	
	case 2:
		calcularPotencia();
		break;

	case 3:
		esPrimo();
		break;

	case 4:
		esBisiesto();
		break;

	case 5:
		exit(EXIT_SUCCESS);	
		break;

	default:
		cout<<"la opcion no es valida\n";
		break;
	}
}
return 0;
}