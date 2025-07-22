/*
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)
 */

#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
    //your code goes here
    
    if (n == 0 || n == 1)
        return n;
    return  (fib(n-1) + fib(n-2));
}

int main()
{
    vector<int> numbers;
    int N, num;
    cout << "Enter N value : ";
    cin >> N;

    cout << "Fibonacci number : " << fib(N) << endl;
    return 0;
}
