#include<iostream>
#include<cmath>
using namespace std;
constexpr int N = 4;
//cifre scritte in base 2 di un numero;
int main()
{
	int Y[N], n =0 ;
	for(int j=0; j<N; j++)
	{
		cout<<"inserisci la prima cifra da destra in binario del tuo numero, massimo 4 cifre binarie"<<endl;
		cin>>Y[j];
	}
	for(int i=0; i<N; i++)
	{
		n = n + Y[i]*pow(2,i);
	}
	cout<<n; 
}
