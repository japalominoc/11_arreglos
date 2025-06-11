#include<iostream>
using namespace std;

int  main(){
    int n,A[20],prom,S=0;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor del elemento: ";
        cin>>A[i];
        S=S+A[i];
    }
    prom=S/n;
    for(int i=0;i<n;i++){
        if(A[i]>prom){
            cout<<A[i]<<" es mayor que el promedio"<<endl;
        }
    }
    return 0;
}