#include<iostream>
using namespace std;
int main()
{
	int n1,a,b,c;
	float n2;
	double n3;
	char c1;
	a=sizeof(n1);
	b=sizeof(n2);
	c=sizeof(n3);
	d=sizeof(c1);
	cout<<Size Of INT    :: <<a;
	cout<<Size Of FLOAT  :: <<b;
	cout<<Size Of DOUBLE :: <<c;
	cout<<Size Of CHAR   :: <<c1;
	return 0;
}
