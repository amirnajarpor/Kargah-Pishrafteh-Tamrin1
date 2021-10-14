#include <iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout << "Enter the sides of your Triangle: \n";
	cin >> a; cin >> b; cin >> c;
	
	if ( a+b>=c && a+c>=b && b+c>=a )
		cout << "You can draw this one! \n";
	else 
		cout << "Not possible, dude! \n";
		
	cout << endl;
	system("pause");
	return 0;
}