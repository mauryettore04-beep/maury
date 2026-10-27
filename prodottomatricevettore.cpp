#include <iostream>
using namespace std;
const int N=3;
int main()
{
double M[N][N], u[N], V[N];
cout<<"inseriesci i dati della matrice M"<<endl;
for (int i=0; i<N; i++)
{
	for(int j=0; j<N; j++)
	{
		cin>>M[i][j];
	}
	
}
cout<<"inseriesci i dati del vettore v"<<endl;
for(int j=0; j<N; j++)
{
	cin>>u[j];
	V[j] = 0;
}

for (int i=0; i<N; i++)
{
	for(int j=0; j<N; j++)
	{
		cout<<M[i][j]<<" ";
	}
cout<<endl;	
}

for (int i=0; i<N; i++)
{
	for(int j=0; j<N; j++)
	{
		{
			V[i]= V[i] + M[i][j]*u[j];
		}
	}
	
}
cout<<"ecco il vettore prodotto di M*u: "<<endl;
for(int j=0; j<N; j++)
{
	cout<<V[j] <<" ";
}
return 0;
}
