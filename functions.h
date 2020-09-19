#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
/*Parameters:
 *unsigned int num - this represents the number you will convert
 *Description:
 *This function converts an unsigned int to binary storing the bits in an array
 *of integers and returns the array. You will need to dynamically allocated the
 *memory for the array of ints.  Suggestion you may want to use calloc to
 *dynamically allocate the memory so that the memory will be initialized.
 *Return:
 *the allocated memory is returned.*/
int* convert2Binary(unsigned int num);

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
char* convert2Hex(unsigned int num);

/*Parameter:
 *char* num - this is an array that will hold character value of the output.
 *should be only 0 - F
 *Description:
 *You will print the hexadecimal value in the following format. (255)
 *00 00 00 FF
 *Your output must look like this. The value above is the equivalent of 4 bytes
 *Return: void
 */
void printHex(char* num);

/*Parameter:
 *int* num - this is an array that will hold the integer value of the output
 *should be 1's and 0's
 *Description:
 *You will print the binary value in the following format. (255)
 *0000 0000 0000 0000 0000 0000 1111 1111
 *Your output must look like this. The above is the equavalent of 4 bytes.
 Return: void
 */
void printBinary(int* num);

#endif

