#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10], nums[2];

    int ctr = 0, num;
    while (ctr < 10 && cin >> num) {
        arr[ctr++] = num;
    }
    int newCtr = 0, evenCtr = 0;
    while (newCtr < ctr) {
        num = arr[newCtr++];
        if (num % 2 == 0) {
            ++evenCtr;
            break;
        }
    }

    if (evenCtr == 1) {
        cout << "Yes, 2 of these nums form an even product.\n";
    } else {
        cout << "No, none of these nums form an even product.\n";
    }
    return EXIT_SUCCESS;
}