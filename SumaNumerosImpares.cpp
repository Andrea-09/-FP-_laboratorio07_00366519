#include<iostream>
using namespace std;

int main(){

    int numero = 0;
    int cantCasos = 0;
    int min = 0;
    int max = 0;
    int odd_suma = 0;
 
    cout<< "Ingrese la cantidad de casos de purueba: ";
    cin>>cantCasos;

    cout<<"Introduzca el valor minimo en el rango 1: "<<endl;
    cin>>min;

    cout<<"Introduzca el valor maximo en el rango 1: "<<endl;
    cin>>max;

    for(numero = min; numero <= max; numero++){
         if(numero % 2 !=0)
         odd_suma = odd_suma + numero;
         cout<<"La suma de los impares es: "<< odd_suma << endl;
         
        }

    cout<<"Introduzca el valor minimo en el rango 2: "<<endl;
    cin>>min;

    cout<<"Introduzca el valor maximo en el rango 2: "<<endl;
    cin>>max;

    for(numero = min; numero <= max; numero++){
         if(numero % 2 !=0)
         odd_suma = odd_suma + numero;
         cout<<"La suma de los impares es: "<< odd_suma << endl;
    }
 
    return 0;
}





 

  
  