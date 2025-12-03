#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<"Enter a number "<<endl;
	cin >> a;
	cout<<"Enter a number "<<endl;
	cin >>b;
	cout<<"Enter a number "<<endl;
	cin >>c;
	(a<=13) ?(cout<<"Age "<<a <<" Falls under the category:Child\n") : (cout<<"Age "<<a <<" Falls under the category:Teenager \n");
	(b<=19) ?(cout<<"Age "<<b <<" Falls under the category:Teenager\n") : (cout<<"Age "<<b<<" Falls under the category:Adult\n");
	(c>=20) ?(cout<<"Age "<<c <<" Falls under the category:Adult\n") : (cout<<"Age "<<c<<" Falls under the category:Adult\n");
}
