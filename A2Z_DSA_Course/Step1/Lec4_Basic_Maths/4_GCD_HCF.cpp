/*
 	Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
 	The Greatest Common Divisor of any two integers is the largest number that divides both integers.
               
               Example 1:
               Input:N1 = 9, N2 = 12
                

                Output:3
                Explanation:Factors of 9: 1, 3 and 9
                Factors of 12: 1, 2, 3, 4, 6, 12
                Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.



                                
                Example 2:
                Input:N1 = 20, N2 = 15
                
                
                Output: 5
                Explanation:Factors of 20: 1, 2, 4, 5
                Factors of 15: 1, 3, 5
                Common Factors: 1, 5 out of which 5 is the greatest hence it is the GCD. *
 */

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter number 1 : " ;
	cin >> num1;

	cout << "Enter number 2 : " ;
	cin >> num2;

	while (num1 && num2)
	{
		if (num1 > num2)
		{
			num1 = num1%num2;
		}
		else
		{
			num2 = num2%num1;
		}
	}

	if (num1 == 0)
		cout << "GCD/HCF :" << num2 << endl;
	else
		cout << "GCD/HCF :" << num1 << endl;

	return 0;

}

/*
 * Tip - Subtract bigger number by the smaller number until it becomes zero. Return the non-zero number which is GCD or HCF
 */
