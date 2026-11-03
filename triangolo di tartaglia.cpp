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

long long int coeffbino(int n, int k)
{
	return fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
}

int main()
{
	int n1,c,j,a;
	cout<<"inserisci il numero di righe del triangolo di tartaglia"<<endl;
	cin>> n1;
	if (n1%2 == 0)
	{
		n1 = n1+1;
	}
	string M[n1][n1];
	for (int i=0; i<n1; i++)
	{
		for (int k=0; k<n1; k++) 
		{
			M[i][k] = " ";
		}
	}
	for (int i=0; i<n1; i++)
	{
		c = n1/2;
		j = i;
		a = c-j;
		for (int k=0; k<=i; k++) 
		{
			M[i][a] = char (coeffbino(i, k) + '0') + M[i][a];
			if (a==(n1/2) && (i%2)!=0)
			{
				j = j+2;
			}
			a++;
			j--;
			a = a-j;
		}
	}
	for (int i=0; i<n1; i++)
	{
		for (int k=0; k<n1; k++) 
		{
			cout<<M[i][k] <<" ";
		}
		cout<<endl;
	}
	return 0;
}
