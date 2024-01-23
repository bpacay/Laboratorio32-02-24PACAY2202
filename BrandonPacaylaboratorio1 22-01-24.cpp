#include <iostream>

int edad = 0;
float valor1 = 0;
float valor2 = 0;
char letra = 'i';
float resultado = 5;

float suma(){
    // instrucciones de programación para calcular la suma
    std::cout<<"ingresar primer valor ";
    std::cin>>valor1;
    std::cout<<"ingresar segundo valor ";
    std::cin>>valor2;
    
    resultado = valor1 + valor2;
    std::cout<<"el resultado es "<< resultado<< "\n";
    return resultado;
}

float resta(){
    // instrucciones de programación para calcular la resta
    std::cout<<"ingresar primer valor ";
    std::cin>>valor1;
    std::cout<<"ingresar segundo valor ";
    std::cin>>valor2;
    
    resultado = valor1 - valor2;
    std::cout<<"el resultado es "<< resultado<< "\n";
    return resultado;
}

float multiplicacion(){
    // instrucciones de programación para calcular la multiplicacion
    std::cout<<"ingresar primer valor ";
    std::cin>>valor1;
    std::cout<<"ingresar segundo valor ";
    std::cin>>valor2;
    
    resultado = valor1 * valor2;
    std::cout<<"el resultado es "<< resultado<< "\n";
    return resultado;
}

float division(){
    // instrucciones de programación para calcular la division
    std::cout<<"ingresar primer valor ";
    std::cin>>valor1;
    std::cout<<"ingresar segundo valor ";
    std::cin>>valor2;
    
    resultado = valor1/valor2;
    
    std::cout<<"el resultado es "<< resultado<< "\n";
    return resultado;
}


int main()
{
    suma();
    resta();
    multiplicacion();
    division();
}

