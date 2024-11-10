#include <iostream>
#include <string>
using namespace std;

int main () {

//variable declaration
int speed;
int fine;
int demerit;
bool is_holiday = false;
string holiday;

//trafic violation time occur
cout << "is the trafic violation occur during holiday? (yes/no): ";
cin >> holiday;
//input speed
cout << "Enter speed : ";
cin >> speed ;


	if (speed >= 0 && speed <=9) {
		fine= 0 , 
		demerit = 0;
	}
	else if (speed >= 10 && speed <=19) {
		fine= 50 , 
		demerit = 1;
	}
	else if (speed >= 20 && speed <=29) {
		fine= 100 , 
		demerit = 2;
	}
	else if (speed >= 30 && speed <=39) {
		fine= 200 , 
		demerit = 4;
	}
	else if (speed >= 40) {
		fine= 300 , 
		demerit = 7;
	}

// output
 	cout << "Fine: RM  " << fine << " Demerit: "<<demerit<<endl;

	is_holiday = (holiday == "yes" || holiday == "Yes");

	if (is_holiday) {
	demerit *= 2;
	cout << "Demerit points are doubled because violation occur during holiday"<< endl;
}
return 0;

}
	
		
