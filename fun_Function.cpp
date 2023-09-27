#include<iomanip>
#include <iostream>
#include<cmath>
#include<string>
#include<vector>


using namespace std;

string regerge(string house_Number,string  street_Name) {
	string result = house_Number + " " + street_Name;
	return result;
}

int main() 
{
	string house_Number;
	string street_Name;
	string city;
	string zipcode;

	cout << "What is your house number?\n";
	cin >> house_Number;
	cout << endl;
	cout << "What is your street name?\n";
	cin >> street_Name;
	cout <<  endl;

	string result;
	result = regerge(house_Number, street_Name);
	cout << result;


	return 0;

}




	


