#include<iostream>
#include<cmath>
using namespace std;
constexpr int N = 3;
int main()
{
	double X[N], m, s=0, si = 0;
	for(int i=0; i<N; i++){
		cin>>X[i];
	}
	for (int i=0; i<N; i++)
	{
		s = s + X[i];
	}
	m = s/N;
	for (int i=0; i<N; i++)
	{
		si = si + pow((X[i] - m), 2)/(N-1);
	}
	cout<<"media: "<<m <<" varianza: "<<si <<" " <<endl;
}
