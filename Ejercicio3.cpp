#include<iostream>
using namespace std;

int main(){
	int n,A[20],aux;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese la posicion "<<i<<": ";
		cin>>A[i];
	}
	for(int i=0;i<n/2;i++){
		aux=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=aux;
	}
	for(int i=0;i<n;i++){
		cout<<i<<"->"<<A[i]<<endl;
	}
	return 0;
}