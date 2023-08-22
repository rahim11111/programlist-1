#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,k=0;
	cout<<"Enter Any Number To Check If It Is Prime Or Not :: ";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"Number Is Not Prime";
			k++;
			break;
		}
	}
	if(k==0)
	cout<<"Number Is Prime.";
	return 0;
}#include<iostream>
using namespace std;
int plm(int);
int main()
{
	int n;
	cout<<"Enter Any Number To Check If It Is Palindrome Or Not :: ";
	cin>>n;
	plm(n);
	return 0;
}
int plm(int n)
{
	int temp,r,rev=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(rev==temp)
		 cout<<rev<<" Is A Palindrome Number.";
	else
		 cout<<rev<<" Is Not A Palindrome Number.";
	return 0;
}
