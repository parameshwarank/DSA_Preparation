/*
	Problem: Print your Name N times using recursion
 */

#include <iostream>
#include <string>

using namespace std;

void print_recursion(string name, int n)
{
	if (n == 0)
		return;
	cout << name << endl;
	print_recursion(name, --n);
}

int main()
{
	string name;
	int n;

	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter the number of times to be printed : ";
	cin >> n;

	print_recursion(name, n);

	return 0;
}
