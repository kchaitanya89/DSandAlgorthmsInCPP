#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100];
    cout << "Enter a bunch of numbers - ";
    int ctr = 0, i;
    while (ctr < 100 && cin >> i) {
        arr[ctr] = i;
        ctr++;
        cout << "ctr is = " << ctr << " and array = " << arr[ctr - 1] << "\n";
    }
    cout << "You entered - " << ctr << " numbers. They are: \n";
    while (--ctr >= 0) {
        cout << arr[ctr] << " - " << ctr << "\n";
    }
    return EXIT_SUCCESS;
}