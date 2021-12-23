#include <iostream>
using namespace std;

int main()
{
	// BMI calculator
	// weight (lbs * 703) / (height * height) (inches)
	// underweight <18.5
	// normal weight 18.5 - 24.9
	// overweight > 25
	// obese > 30

	float weight, height, bmi;
	cout << "Weight (lbs), Height (inches): ";
	cin >> weight >> height;
	bmi = (weight * 703) / (height * height);

	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi > 30)
		cout << "Obese" << endl;
	else if (bmi > 25)
		cout << "Overweight" << endl;
	else
		cout << "Normal weight" << endl;
	cout << "Your BMI is: " << bmi << endl;

	system("pause>0");
}

