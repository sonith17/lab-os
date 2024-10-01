/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int i = 10000;
    while (i)
    {
        // PrintString("A");
        i--;
    }
    PrintString("add-complete\n");
    /* not reached */
}
