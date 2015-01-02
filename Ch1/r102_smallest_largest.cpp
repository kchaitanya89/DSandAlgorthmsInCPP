/*
 *COPYRIGHT
*/
#include <iostream>
#include <string>
#include <vector>
#define MAX_COUNT 10

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[MAX_COUNT]

    cout << "Enter an array : " << endl;

    int i, count = 0;
    while (count < MAX_COUNT && cin >> i) {
        arr[count++] = i;
    }

    int smallest, largest;
    smallest = largest = arr[0];
    int size = sizeof(arr) / sizeof(*arr);

    cout << "Size of the array is = " << size << endl;

    for (unsigned i = 1; i < size; ++i) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest number is = " << largest << endl;
    cout << "Smallest number is = " << smallest << endl;
    return 0;
}
