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
int nextprime(int n)
{
int i = 1;
	if(primo(n) == 1)
	{
		do
		{
			primo(n+i);
			i++;
		}	while(primo(n+i) == 0);
		return n+i;
	}
	else
	{
		cout<<"non era primo il: ";
		return n;
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<"ecco il numero primo successivo a " <<n <<" : " <<nextprime(n) <<endl;
}
