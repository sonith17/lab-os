/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i,u=6;
    pid = Exec2("../test/num_io",50);
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } //else
    //     Join(pid);
    while (1)
    {
        // PrintString("C");
        ;
    }
    
}
