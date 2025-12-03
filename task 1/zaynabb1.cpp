#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the integer  ";
	cin >> x;
	(x % 2 == 0)? cout <<"the number  " << x <<" is even": cout << "the number" << x <<" is odd";  
}
