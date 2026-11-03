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
	int num1, num2;
	do
	{
		cout<<"inserisci o reinserisci i numeri di cui vuoi fare il coeff binomiale (il primo maggiore del secondo)"<<endl;
		cin>>num1 >>num2;
	} while(num1 <= num2);
	if (num2 == 0)
	{
		num2 = 1;
	}
	long long int coefnk;
	coefnk = coeffbino(num1, num2);
	cout<<"coeff bino di"<<num1 <<" su "<<num2 <<" e' " <<coefnk <<endl;
}
