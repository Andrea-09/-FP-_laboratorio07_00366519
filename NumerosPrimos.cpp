#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

    int from=0,to=0,cont=0,sum=0;
    cout<<"Valor minimo: ";
    cin>>from;
    
    cout<<"Valor maximo: ";
    cin>>to;
    
    for(from;from<=to;from++){
        for(int i=1;i<=from;i++){
            if(from%i==0){
                cont++;
            }
        }
        if(cont==2){
            sum++;
            cout<<from<<" ";
        }
        cont=0;
    }
    return 0;
}