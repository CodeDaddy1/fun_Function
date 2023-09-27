#include<iomanip>
#include <iostream>
#include<cmath>
#include<string>
#include<vector>


using namespace std;

string regerge(string first_Name,string  last_Name) {
	string result = last_Name + ", " + first_Name ;
	return result;
}

int main() 
{
	string first_Name;
	string last_Name;
	

	cout << "What is your first name?\n";
	cin >> first_Name;
	cout << endl;
	cout << "What is your last name?\n";
	cin >> last_Name;
	cout <<  endl;

	string result;
	result = regerge(first_Name, last_Name);
	cout << result;


	return 0;

}




	


