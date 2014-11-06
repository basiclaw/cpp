#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double m, h;
	cout << "Body mass m (in kg):  ";
	cin >> m;
	cout << "Body height h (in m): ";
	cin >> h;
	cout << "BMI = " << m/h/h << endl;
	system("PAUSE");
	return 0;
}
