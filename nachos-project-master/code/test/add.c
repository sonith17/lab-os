/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;

    result = Mul(42, 2);
    PrintString("hi Sonith\n");
    PrintNum(result);
    PrintString("\n");
    PrintString("before sleep\n");
    Sleep(30000);
    PrintString("after sleep\n");
    Halt();
    /* not reached */
}
