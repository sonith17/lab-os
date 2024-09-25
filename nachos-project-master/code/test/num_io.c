/* num_io.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a syscall that read an interger and print it
 *
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i;
    int u =3;
    pid = Exec2("../test/add",10);
        if (pid < 0) 
        {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
     }
    while (1)
    {
        // PrintString("B");
        ;
    }
}