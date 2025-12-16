#include<iostream>
using namespace std;
int main()
{
//declaring variables	
	int n;
	int i;
	int a=0;
//Taking number which display the sum of natural numbers upto upper limit set by user
	cout<<"Enter the upper Limit"<<endl;
	cin>>n;
//using for loop
	for(i=1; i<=n; i++)
	{
		a=a+i;
		cout<<a<<endl;
	}	
}
