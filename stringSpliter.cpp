/*
	Written by Muhammad Ilyas
	This Program is explain you have separates long string into small sub string
	Hope you like it ;)


*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string test1 = "1.45E+15,1.68E+15,8.92E+14,4.62E+14,8.38E+14,1.44E+15,7.82E+14,6.50E+14,";
	string test2[10];
	int found, i = 0;
	while (test1 != "\0"){
		found = test1.find(",");
		for (int f = 0; f < found; f++){
			test2[i] += test1[f];
		}
		test1.erase(0, found + 1);
		i++;
	}
	for (int d = 0; d < i; d++){
		cout << test2[d] << endl;
	}
	return 0;
}
