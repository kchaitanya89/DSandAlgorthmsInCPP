#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

bool binSearch(int *arr, int min, int max, int val)
{

}

int main(int argc, char const *argv[])
{
    int ctr = 0, r;
    int initArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    int i = 0;
    do {
        int random = rand() % 10;
        // cout << "The random number generated is - " << random << endl;

        if (find(arr, arr + 9, random) == (arr + 9)) {
            // cout << " and the random number being put in arr is - " << random << endl;
            arr[i] = random;
            ++i;
            // cin.ignore();
        }
    } while (i < 10);

    cout << "the random array is - \n" << endl;
    for (unsigned i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }

    cout << "The numbers in random order are - \n";
    for (unsigned i = 0; i < 10; ++i) {
        cout << initArr[arr[i]] << endl;
    }
    return EXIT_SUCCESS;
}