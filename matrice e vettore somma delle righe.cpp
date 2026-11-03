#include<iostream>
#include<cmath>
using namespace std;
constexpr int N = 3;
constexpr int M = 2;
int main()
{
	double X[M][N], s, Y[M];
	
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>X[i][j];
		}
	}
	for(int i=0; i<M; i++)
	{
		s = 0;
		for(int j=0; j<N; j++)
		{
			s = s + X[i][j];
		}
		Y[i] = s;
	}
	for(int i=0; i<M; i++)
	{
		cout<<Y[i]<<endl;
	}
}
