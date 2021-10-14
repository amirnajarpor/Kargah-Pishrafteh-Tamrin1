#include <iostream>
using namespace std;

int main()
{
	float w, h, bmi;
	cout << "\n ------ BODY MASS INDEX (BMI) CALCULATOR ------ \n\n";
	cout << "\tEnter your Weight (in Kg): "; cin >> w;
	cout << "\tEnter your Height (in Meters): "; cin >> h;
	
	bmi = w / (h*h);
	
	if (bmi < 18.5)
	{
		cout << "\n\tYour BMI is " << bmi;
		cout << "\n\tUnderweight\n";
	}
	
	else if (18.5 <= bmi && bmi < 25)
	{
		cout << "\n\tYour BMI is " << bmi;
		cout << "\n\tNormal\n";
	}
		
	else if (25 <= bmi && bmi < 30)
	{
		cout << "\n\tYour BMI is " << bmi;
		cout << "\n\tOverweight\n";
	}	
	
	else if (30 <= bmi && bmi < 35)
	{
		cout << "\n\tYour BMI is " << bmi;
		cout << "\n\tObese\n";
	}
		
	else if (bmi >= 35)
	{
		cout << "\n\tYour BMI is " << bmi;
		cout << "\n\tExtremely obese\n";
	}
	
	cout << endl;
	system("pause");
	return 0;
}