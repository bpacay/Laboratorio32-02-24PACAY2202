#include <iostream>

using namespace std;

int numpar(){
    int a;
    int salir;
    do{
		cout<<"Porfavor coloque un numero para evaluar si es par o impar: \n";
	    cin>>a;
	
	    if ( a%2 ==0) {
	        cout<<"el numero "<< a << " es par \n";
	    } else {
	        cout<<"el numero "<< a << " es impar \n";
	    }
    	cout<<"desea seguir evaluando los numeros pares e impares (coloque 0 si quiere seguir, de lo contrario coloque 1): \n";
	    cin>>salir;
	    
	}while(salir !=1);
   return 0;
}

int yearbisiesto(){
	int a;
	int salir;
	do{
	cout<<"Coloque un año para verificar si es bisiesto o no\n";
	cin>>a;
	if (a%100 == 0){
		cout<<"el año no es bisiesto\n";
	} else if(a%4 == 0){
		cout<<"el año es bisiesto\n";
	}else {
		cout<<"el año no es bisiesto\n";
	}
	cout<<"desea seguir evaluando los numeros pares e impares (coloque 0 si quiere seguir, de lo contrario coloque 1): \n";
	cin>>salir;
	} while(salir !=1);
	
	return 0;
}

int numeros (){
	int a;
	int b;
	int salir;
	do{
		cout<<"Porfavor ingrese un numero: \n";
		cin>>a;
		cout<<"Porfavor ingrese un segundo numero para comparar si es igual al primero: \n";
		cin>>b;

		if (a==b){
			cout<<"los numeros son iguales\n";
		}else {
			cout<<"los numeros no son iguales\n";
		}
		cout<<"desea seguir comparando numeros (coloque 0 si quiere seguir, de lo contrario coloque 1): \n";
	    cin>>salir;
	}while(salir != 1);
	

return 0;
}

int edad(){
    int edad;

        cout<<"Porfavor ingrese su edad para saber si usted es mayor de edad: \n";
        cin>>edad;

        if ( edad < 18 ) {
            cout<<"tu eres un ciudadano menor de edad\n";
        } else if (edad<101){
            cout<<"tu eres un ciudadano mayor de edad\n";
        }else{
            cout<<"tu eres un ciudadano mayor de edad centenario :O\n";
        }        
return 0;
} 

int aprobado(){ 
    int nota;
	int salir;
	do{
		cout<<"Porfavor ingrese la nota que quiere evaluar (para saber si es aprobatoria o no): \n";
	    cin>>nota;
	
	    if ( nota < 60 ) {
	        cout<<"la nota "<< nota << " es desaprobatoria (porfavor intenta mejorar)\n";
	        cout<<"desea salir del evaluador de notas (coloque 1 si quiere salir, de lo contrario coloque 0): \n";
	   		cin>>salir;
	    } else if (nota<101){
	        cout<<"la nota "<< nota << " es aprobatoria (felicidades sigue esforzandote)\n";
	        cout<<"desea salir del evaluador de notas (coloque 1 si quiere salir, de lo contrario coloque 0): \n";
	    	cin>>salir;
	    }else{
	        cout<<"la nota "<< nota <<" no es compatible con el sistema de calificacion\n";
	        cout<<"porfavor coloque una nota que este entre el 0 al 100, para poder evaluar si usted tiene nota aprobatoria \n";
	        salir = 0;
	    }
	    
	}while(salir !=1);
	
return salir;
}

int main(){
	int option;
	cout<<"Hola :D\n";
	
while (1==1)
{
	cout<<"Que deseas realizar: \n 1. verifiacar si un numero es par o impar \n 2. verificar si un año es bisiesto o no \n 3. determinar si dos numeros son iguales \n 4. Verificar si eres mayor de edad \n 5. Evaluar si un estudiante tiene nota aprobatoria \n 6. salir \n";
	cin>>option;
	switch (option)
	{
	case 1:
		numpar();
		break;
	
	case 2:
		yearbisiesto();
		break;

	case 3:
		numeros();
		break;

	case 4:
		edad();
		break;

	case 5:
		aprobado();
		break;
	
	case 6:
		exit(EXIT_SUCCESS);	
		break;

	default:
		cout<<"la opcion no es valida";
		break;
	}
}
return 0;
}