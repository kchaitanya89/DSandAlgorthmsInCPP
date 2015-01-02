#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<string> svec;

    string str;
    while (getline(cin, str)) {
        svec.push_back(str);
    }

    std::vector<string>::const_reverse_iterator b = svec.rbegin(), e =  svec.rend();

    while (b != e) {
        cout << *b++ << endl;
    }
    return EXIT_SUCCESS;
}
