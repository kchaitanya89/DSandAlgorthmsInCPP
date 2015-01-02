#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned char a = 5, b = 9; // a = 4(00000101), b = 8(00001001)
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b); // The result is 00000001
    printf("a|b = %d\n", a | b); // The result is 00001101
    printf("a^b = %d\n", a ^ b); // The result is 00001100
    printf("~a = %d\n", a = ~a);   // The result is 11111010
    printf("b<<1 = %d\n", b << 1); // The result is 00010010
    printf("a<<1 = %d\n", a << 1); // The result is 00010010
    printf("b>>1 = %d\n", b >> 1); // The result is 00000100
    printf("a>>1 = %d\n", a >> 1); // The result is 00000100
    return EXIT_SUCCESS;
}