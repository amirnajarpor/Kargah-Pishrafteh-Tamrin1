#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a , b , degree, result;
	string op;

	cout << "Enter the Operation: ";
	cin >> op;
	
	if ( op == "+" ) //jame
	{
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		result = a + b;
		cout << "The result is " << result << '\n';
	}
	else if ( op == "-" ) //tafrigh
	{
		cout << "Enter a: "; cin >> a;
		cout << "Enter b:"; cin >> b;
		result = a - b;
		cout << "The result is " << result << '\n';
	}
	else if ( op == "/" ) //taghsim
	{
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		if ( b == 0 )
		{
			cout << "Cannot divide by zero" << '\n';
		} else {
			result = a / b;
			cout << "The result is " << result << '\n';
		}
	}
	else if ( op == "sin" ) //sinus
	{
		cout << "Enter degree: ";
		cin >> degree;
		degree = degree * M_PI / 180; //Convert degree to Radian
		result = sin(degree);
		cout << "The result is " << result << '\n';
	}
	else if ( op == "*") //zarb
	{
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		result = a * b;
		cout << "The result is " << result << '\n';
	}
	else if ( op == "radical") //radical
	{
		cout << "Enter Number: "; cin >> a;
		result = sqrt(a);
		cout << "The result is " << result << '\n';
	}
	else if ( op == "cos") //cosinus
	{
		cout << "Enter degree: "; cin >> degree;
		
		if ( degree == 90 || degree == 270 ) //Baraye hale moshkele zavie 90 daraje mishe in kar ro anjam dad chon dar halate normale code, cos(90) mishod -4.37114e-08
		{
			result = 0;
			cout << "The result is " << result << '\n';
		}
		else
		{
			degree = degree * M_PI / 180; //Convert degree to Radian
			result = cos(degree);
			cout << "The result is " << result << '\n';
		}
		
	}
	else if ( op == "cot") //cotangent
	{
		cout << "Enter degree: "; cin >> degree;
		if (degree == 0)
			cout << "Error! Undefined!" << '\n';
		else
		{
			degree = degree * M_PI / 180; //Convert degree to Radian
			result = cos(degree)/sin(degree);
			cout << "The result is " << result << '\n';
		}
	}
	else if ( op == "tan") //tangent
	{
		cout << "Enter degree: "; cin >> degree;
		if (degree == 90)
			cout << "Error! Undefined!" << '\n';
		else 
		{
			degree = degree * M_PI / 180; //Convert degree to Radian
			result = sin(degree)/cos(degree);
			cout << "The result is " << result << '\n';
		}
	}
	else if ( op == "fact") //factorial
	{
		result = 1;
		cout << "Enter Number: "; cin >> a;
		
		for(int i=1 ; i<=a ; i++)
		{
		  result=result*i;
		}    
		
		cout << "The result is " << result << '\n';
	}
	system("pause");
	return 0;
}