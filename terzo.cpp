#include<iostream>
using namespace std;
long long int fattoriale(int n)
{
	 long long int f=1;
	 for (int i=1; i<=n; i++)
	 {
		f = f*i;
	 }
return f;
}

long double coeffbino(int n, int k)
{
	return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
}

int main()
{
	int num1;
		cout<<"inserisci il numero di cui fare il risultato che appare a schermo"<<endl;
		cin>>num1;
	cout<<"ti restituirò la somma dei coefficenti binomiali " <<num1 <<" su k che varia"<<endl;
	long long int coefnk = 0;
	for (int i = 0; i <= num1; i++)
	{
		if (i == 0)
		{
			i = 1;
		}
		coefnk = coefnk + coeffbino(num1, i);
	}
	cout<<"risultato: "<<coefnk <<endl;
}
