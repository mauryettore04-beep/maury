#include <iostream>
using namespace std;
const int N=5;
int main()
{
double u[N], v[N], w[N], a,b;
cout<<"inserire tutti glie elementi del vettore u poi v ed infine dei coefficenti reali a e b, ricorda gli array hanno dimensione "<<N <<endl;
for (int i=0; i<N; i++)
{
	cin>>u[i];
}
for (int i=0; i<N; i++)
{
	cin>>v[i];
}
cin>>a >>b;
for (int i=0; i<N; i++)
{
	w[i] = a*u[i]+b*v[i];
}
for (int i=0; i<N; i++)
{
	cout<<w[i]<<" ";
}
return 0;
}
