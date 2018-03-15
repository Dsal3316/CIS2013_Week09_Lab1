#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8];

	strncpy(copy, last, 4);

	cout << "Firstname: " <<  name << " Lastname: " << copy << endl;

}

//#include <iostream>
//#include <string>
//using namespace std;

//int main(){

//string test= "Rockers";

//cout << test << endl;
//test = "Robert";
//cout << test << endl;
//cout << "The length of test is " << test.length() << endl;
//cout << "The 3rd char of test is " << test[2] << endl;

//for(int i=0; i<test.length(); i++){
//	cout << "You spell Robert with a " << test[i] << endl;
//	}
