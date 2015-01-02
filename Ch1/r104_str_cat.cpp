#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "abc";
    string t = "cde";
    s += s + t[1] + s;

    cout << s << endl;

    return EXIT_SUCCESS;
}