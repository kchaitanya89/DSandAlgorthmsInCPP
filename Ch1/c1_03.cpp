#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int num;

    while (cin >> num) {
        ivec.push_back(num);
    }

    sort(ivec.begin(), ivec.end());

    vector<int>::const_iterator b = ivec.begin(), e = ivec.end();

    int dupCtr = 0;
    while (b != e) {
        if (*b == *(b + 1) && (b + 1) != e) {
            ++dupCtr; break;
        }
        ++b;
    }

    if (dupCtr != 0) {
        cout << "Duplicates found!!\n";
    } else {
        cout << "Duplicates NOT found!!\n";
    }
    return EXIT_SUCCESS;
}