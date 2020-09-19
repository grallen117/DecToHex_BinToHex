#include "functions.h"


int main(int argc, char* argv[])
{
    
    unsigned int num = atoi(argv[1]);
    char* ans = convert2Hex(num);
    printHex(ans);
    int* bits = convert2Binary(num);
    printBinary(bits);
    free(ans);
    free(bits);
    return 0;
}