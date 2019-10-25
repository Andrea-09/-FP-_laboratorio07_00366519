#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n1, n2, Casos;

    cout<<"Ingrese el numero de casos: "<<endl;
    cin>>Casos;
    cout<<"Introduzca el primer numero : "<<endl;
    cin>>n1;
    cout<<"Introduzca el segundo numero: "<<endl;
    cin>>n2;

for(int i=0; i < Casos; i++){
    if ( n1 > n2 ){

        cout<<"El " <<n1<< " es mayor que "<< n2 <<endl;
    }
    if( n1 < n2 ){
            cout<<"El " <<n2<< " es mayor que "<< n1 <<endl;
    }
        else{
            cout<<"Son iguales"<<endl;
        }
}
    return 0;
}