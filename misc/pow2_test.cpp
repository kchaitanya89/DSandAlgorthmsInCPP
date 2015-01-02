#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a number to test if it is a power of 2 : ";
    long num, test = 2;
    bool result = false;
    cin >> num;

    while (num >= test ) {
        test = test << 1;
        cout << num << endl;
        if (num == test)
            result = true;
    }
    if (result)
        cout << "\nyes\n";
    else
        cout << "\nno\n";

    return EXIT_SUCCESS;
}