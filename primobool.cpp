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
	int n;
	cin>>n;
	if(primo(n) == 0)
	{
		cout<<"non è primo"<<endl;
	}
	else
	{
		cout<<"è primo"<<endl;
	}
}
