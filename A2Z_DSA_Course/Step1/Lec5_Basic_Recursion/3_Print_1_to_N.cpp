/*
	Problem: Print from 1 to N using Recursion
 */

#include <iostream>

using namespace std;

void print_1_to_N(int i, int n)
{
	if (i > n) 
		return;
	cout << i << " ";
	print_1_to_N(++i, n);
}

int main()
{
	int number;
	cout << "Enter N value : ";
	cin >> number;
	print_1_to_N(1,number);
	cout << endl;
	return 0;
}
