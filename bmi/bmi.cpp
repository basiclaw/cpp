#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double m, h;
	cout << "Body mass m (in lb):  ";
	cin >> m;
	cout << "Body height h (in in): ";
	cin >> h;
	cout << "BMI = " << m/h/h*703 << endl;
	system("PAUSE");
	return 0;
}
