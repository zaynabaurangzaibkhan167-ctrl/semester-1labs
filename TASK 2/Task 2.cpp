#include<iostream>
using namespace std;
int main()
{
//declaring variables
	int n;
	int i;
//taking input from user
	cout<<"Enter the number of which you want the table to print"<<endl;
	cin>>n;
//using for loop to print table
	for(i=1 ; i<=10; i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
