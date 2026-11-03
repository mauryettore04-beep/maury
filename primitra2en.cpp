#include<iostream>
#include<cmath>
using namespace std;
bool primo(int n)
{
	for(int i=2; i<= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,c=0;
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		if(primo(i) == 0)
		{
			c = c+1;
		}
		else
		{
			cout<<"questo è primo: "<<endl;
			cout<<i<<endl;
		}
	}
	cout<<"ci stavano " <<n-c <<" numeri primi tra "<<2 <<" e " <<n <<endl;
}
