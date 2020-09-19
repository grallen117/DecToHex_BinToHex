#include "functions.h"
/*Parameters:
 *unsigned int num - this represents the number you will convert
 *Description:
 *This function converts an unsigned int to binary storing the bits in an array
 *of integers and returns the array. You will need to dynamically allocated the
 *memory for the array of ints.  Suggestion you may want to use calloc to
 *dynamically allocate the memory so that the memory will be initialized.
 *Return:
 *the allocated memory is returned.*/
int* convert2Binary(unsigned int num)
{
    int* binary;
    unsigned int temp = num;
    int counter = 0;
    static int size = 32;
    //first count how many binary values there are
    while (temp != 0) {
        temp = temp / 2;
        counter++;
    }
    //now allocate using calloc 32 ints
    binary = calloc(size, sizeof(int));
    //reset temp
    temp = num;
    //initialize all binary numbers up till counter to be 0, length is 32 bits or 4 bytes
    for (int i = 0; i < (32 - counter); i++) {
        *(binary + i) = 0;
    }
    //fill with actual values now
    for (int i = (size-1); i >= (size-counter); i--) {
        *(binary + i) = temp % 2;
        temp = temp / 2;
    }
    return binary;
    
    
    
}
/*Parameters:
 *unsigned int num - this represents the number you will convert
 *Description:
 *This functions convers an unsigned int to hexadecimal. Remember hexadecimals
 *have characers and not just integers.  The characters should the capital 
 *letters. The characters will be stored in an array and the array will be 
 *returned.  You will need to dynamically allocated the memory for the the array
 *of characters.
 *Return:
 *the allocated memory is returned.*/
char* convert2Hex(unsigned int num)
{
    //size is 8, each nibble is 4 bits
    static int size = 8;
    char* hex;
    //first, initialize hex using calloc
    hex = calloc(size, sizeof(char));
    //next, initialize all to 0
    for (int i = 0; i < size; i++) {
        *(hex + i) = '0';
    }
    //next, figure out how many places it will use
    //use temp to do the division
    unsigned int temp = num;
    int counter = 0;
    while (temp != 0) {
        temp = temp / 16;
        counter++;
    }
    temp = num;
    //next, fill hex with the appropriate values
    for (int i = (size - 1); i >= (size - counter); i--) {
        char c;
        if (temp % 16 == 10) { c = 'A'; }
        else if (temp % 16 == 11) { c = 'B'; }
        else if (temp % 16 == 12) { c = 'C'; }
        else if (temp % 16 == 13) { c = 'D'; }
        else if (temp % 16 == 14) { c = 'E'; }
        else if (temp % 16 == 15) { c = 'F'; }
        else { c = (temp % 16) + '0'; }
        *(hex + i) =  c;
        temp = temp / 16;
    }
    return (hex);
}

/*Parameter:
 *char* num - this is an array that will hold character value of the output.
 *should be only 0 - F
 *Description:
 *You will print the hexadecimal value in the following format. (255)
 *00 00 00 FF
 *Your output must look like this. The value above is the equivalent of 4 bytes
 *Return: void
 */
void printHex(char* num)
{
    static int size = 8;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        //print the number previously initialized into it via c2h function
        printf("%c", *(num + i));
        //increment counter, once it is divisible by 2 then make a space
        counter++;
        if (counter % 2 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}
/*Parameter:
 *int* num - this is an array that will hold the integer value of the output
 *should be 1's and 0's
 *Description:
 *You will print the binary value in the following format. (255)
 *0000 0000 0000 0000 0000 0000 1111 1111
 *Your output must look like this. The above is the equavalent of 4 bytes.
 Return: void
 */
void printBinary(int* num)
{
    //size is 32 bits or 4 bytes
    static int size = 32;
    //counter is for making space between every 4 binary places
    int counter = 0;
    //for the size of the calloc'd array
    for (int i = 0; i < size; i++) {
        //print the number previously initialized into it via c2b function
        printf("%d", *(num+i));
        //increment counter, once it is divisible by 4 then make a space
        counter++;
        if (counter % 4 == 0) {
            printf(" ");
        }
    }
    
    printf("\n");
}

