#include <iostream>
using namespace std;
const int N=3;
int main()
{
double M[N][N], Tr;
cout<<"inseriesci i dati della matrice M"<<endl;
for (int i=0; i<N; i++)
{
	for(int j=0; j<N; j++)
	{
		cin>>M[i][j];
	}
	
}

for (int i=0; i<N; i++)
{
	for(int j=0; j<N; j++)
	{
		if(i==j)
		{
			Tr = Tr + M[i][j];
		}
	}
	
}
cout<<"ecco la traccia di M: "<<Tr<<endl;
return 0;
}
