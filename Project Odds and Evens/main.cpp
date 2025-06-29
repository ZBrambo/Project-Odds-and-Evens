/*
* Odds and Evens
* Author: Zachary Bram
*	This is a very simple program that checks whether an integer
*	is EVEN or ODD
*		Loops through values 0 to 50 (inclusive)
*	NO USER INPUT
*/



#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


//vector that fills based on const variable SIZE
vector<int> staticArrayFill()
{
	//this will fill the local array up to the SIZE variable 
	const int SIZE = 51;
	vector<int> myVector(SIZE);//51 elements = 0, 1, 2, ..., 50
	iota(begin(myVector), end(myVector), 0);//starts filling from 0

	//returns the filled vector
	return myVector;
}



int main()
{
	vector<int> values = staticArrayFill();


	//Loops through vector function and prints each value as even or odd
	for (int val : values) {
		cout << val << " is " << (val % 2 == 0 ? "EVEN!" : "ODD!") << endl;
	}

	return 0;
}
