#include <iostream>
using namespace std;

int main()
{
	string name,family;
	float a,b,c,average;

	cout << "\n Enter name: "; cin >> name;
	cout << " Enter Last name: "; cin >> family;
	cout << "\t\n Enter your scores of 3 subjects: \n\n"; 
	cout << " ";	cin >> a;
	cout << " ";	cin >> b;
	cout << " ";	cin >> c;
	
	average = (a+b+c) / 3;
	
	if ( average > 0 && average <= 20 )
	{
		if ( average < 12 )
			cout << "\t\n Dear " << name << " " << family << " your average is " << average << " and your status is Fail. \n\n";
			
		else if ( average >= 12 && average < 17)
			cout << "\t\n Dear " << name << " " << family << " your average is " << average << " and your status is Normal. \n\n";
			
		else if ( average >= 17)
			cout << "\t\n Dear " << name << " " << family << " your average is " << average << " and your status is Great. \n\n";
	}
	
	else if ( average < 0 || average > 20 )
		cout << "\t\n Wrong numbers! \n\n";
	
	system("pause");
	return 0;
}