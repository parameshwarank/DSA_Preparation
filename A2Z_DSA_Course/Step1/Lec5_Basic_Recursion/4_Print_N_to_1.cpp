/*
	Problem: Print from N to 1 using Recursion
 */

#include <iostream>

using namespace std;

void print_N_to_1(int n)
{
	if(n <= 0)
		return;
	cout << n << " ";
	print_N_to_1(n-1);
}

int main()
{
	int number;
	cout << "Enter N value : ";
	cin >> number;
	print_N_to_1(number);
	cout << endl;
	return 0;
}
