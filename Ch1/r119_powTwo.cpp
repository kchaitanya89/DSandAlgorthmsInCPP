#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <tgmath.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a number to check";
    double d;
    cin >> d;
    long l = log2(d);
    if (log2(d) / l == 1) {
        cout << "Yes, the number is a power of 2\n";
    } else {
        cout << "No, the number is not a power of 2\n";
    }
    return EXIT_SUCCESS;
}