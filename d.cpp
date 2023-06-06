#include <iostream>
using namespace std;
int FibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}
