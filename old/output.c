#include <stdio.h>
unsigned char array[3000000] = {0};
unsigned char *ptc = array;
int main()
{
    (*ptc) += 8;
    while (*ptc)
    {
        ptc += 1;
        (*ptc) += 4;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 2;
            ptc += 1;
            (*ptc) += 3;
            ptc += 1;
            (*ptc) += 3;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 1;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) -= 1;
        ptc += 2;
        (*ptc) += 1;
        while (*ptc)
        {
            ptc -= 1;
        }
        ptc -= 1;
        (*ptc) -= 1;
    }
    ptc += 2;
    putchar(*ptc);
    ptc += 1;
    (*ptc) -= 3;
    putchar(*ptc);
    (*ptc) += 7;
    putchar(*ptc);
    putchar(*ptc);
    (*ptc) += 3;
    putchar(*ptc);
    ptc += 2;
    putchar(*ptc);
    ptc -= 1;
    (*ptc) -= 1;
    putchar(*ptc);
    ptc -= 1;
    putchar(*ptc);
    (*ptc) += 3;
    putchar(*ptc);
    (*ptc) -= 6;
    putchar(*ptc);
    (*ptc) -= 8;
    putchar(*ptc);
    ptc += 2;
    (*ptc) += 1;
    putchar(*ptc);
    ptc += 1;
    (*ptc) += 2;
    putchar(*ptc);
    return 0;
}
