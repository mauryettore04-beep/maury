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
int main()
{
	int num;
	cout<<"inserisci un numero "<<endl;
	cin>>num;
	long long int fatt;
	for (int i=1; i<=num; i++)
	{
		fatt = fattoriale(i);
		cout<<i <<"! = "<<fatt<<endl;
	}
}
