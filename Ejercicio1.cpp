#include<iostream>
using namespace std;

int  main(){
    int n,A[20],max;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor del elemento: ";
        cin>>A[i];
    }
    max=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"El mayor elemento del arreglo es: "<<max;
    return 0;
}