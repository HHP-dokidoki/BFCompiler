#include <stdio.h>
unsigned char array[3000000] = {0};
char *ptc = array;
int main()
{
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 11;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 14;
        while (*ptc)
        {
            ptc += 13;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 14;
            (*ptc) -= 1;
        }
        ptc += 14;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        ptc -= 14;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 14;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 14;
            (*ptc) += 1;
            ptc += 14;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 11;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 10;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 13;
        while (*ptc)
        {
            ptc += 12;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 13;
            (*ptc) -= 1;
        }
        ptc += 13;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        ptc -= 13;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 13;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 13;
            (*ptc) += 1;
            ptc += 13;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 8;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 7;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 10;
        while (*ptc)
        {
            ptc += 9;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 10;
            (*ptc) -= 1;
        }
        ptc += 10;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        ptc -= 10;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 10;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 10;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 9;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 12;
        while (*ptc)
        {
            ptc += 11;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 12;
            (*ptc) -= 1;
        }
        ptc += 12;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        ptc -= 12;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 12;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 12;
            (*ptc) += 1;
            ptc += 12;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 9;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 8;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 11;
        while (*ptc)
        {
            ptc += 10;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 11;
            (*ptc) -= 1;
        }
        ptc += 11;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        ptc -= 11;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 11;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 11;
            (*ptc) += 1;
            ptc += 11;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 10;
            (*ptc) += 1;
            ptc += 10;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 7;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 6;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    scanf("%c", ptc);
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    (*ptc) -= 10;
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    (*ptc) -= 32;
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 2;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                ptc -= 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 4;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 9;
        while (*ptc)
        {
            ptc += 8;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 9;
            (*ptc) -= 1;
        }
        ptc += 9;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        ptc -= 9;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 9;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            ptc += 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 2;
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 9;
            (*ptc) += 1;
            ptc += 9;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 48;
        while (*ptc)
        {
            ptc -= 8;
            (*ptc) += 1;
            ptc += 8;
            (*ptc) -= 1;
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        scanf("%c", ptc);
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) -= 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 2;
        (*ptc) -= 32;
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 12;
    while (*ptc)
    {
        ptc += 11;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 12;
        (*ptc) -= 1;
    }
    ptc += 12;
    while (*ptc)
    {
        ptc -= 12;
        (*ptc) += 1;
        ptc += 12;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 10;
    while (*ptc)
    {
        ptc += 9;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 10;
        (*ptc) -= 1;
    }
    ptc += 10;
    while (*ptc)
    {
        ptc -= 10;
        (*ptc) += 1;
        ptc += 10;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 3;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 11;
    while (*ptc)
    {
        ptc += 10;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 11;
        (*ptc) -= 1;
    }
    ptc += 11;
    while (*ptc)
    {
        ptc -= 11;
        (*ptc) += 1;
        ptc += 11;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 12;
    while (*ptc)
    {
        ptc += 10;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 12;
        (*ptc) -= 1;
    }
    ptc += 12;
    while (*ptc)
    {
        ptc -= 12;
        (*ptc) += 1;
        ptc += 12;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 4;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 4;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 1;
        (*ptc) -= 1;
        ptc += 1;
        (*ptc) -= 1;
    }
    ptc -= 8;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 7;
    while (*ptc)
    {
        ptc -= 7;
        (*ptc) += 1;
        ptc += 7;
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 8;
    while (*ptc)
    {
        ptc += 7;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 8;
        (*ptc) -= 1;
    }
    ptc += 8;
    while (*ptc)
    {
        ptc -= 8;
        (*ptc) += 1;
        ptc += 8;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 10;
    while (*ptc)
    {
        ptc += 9;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 10;
        (*ptc) -= 1;
    }
    ptc += 10;
    while (*ptc)
    {
        ptc -= 10;
        (*ptc) += 1;
        ptc += 10;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 3;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 11;
    while (*ptc)
    {
        ptc += 10;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 11;
        (*ptc) -= 1;
    }
    ptc += 11;
    while (*ptc)
    {
        ptc -= 11;
        (*ptc) += 1;
        ptc += 11;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 9;
    while (*ptc)
    {
        ptc += 7;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 9;
        (*ptc) -= 1;
    }
    ptc += 9;
    while (*ptc)
    {
        ptc -= 9;
        (*ptc) += 1;
        ptc += 9;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 4;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 4;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 1;
        (*ptc) -= 1;
        ptc += 1;
        (*ptc) -= 1;
    }
    ptc -= 7;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 6;
    while (*ptc)
    {
        ptc -= 6;
        (*ptc) += 1;
        ptc += 6;
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 12;
    while (*ptc)
    {
        ptc += 11;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 12;
        (*ptc) -= 1;
    }
    ptc += 12;
    while (*ptc)
    {
        ptc -= 12;
        (*ptc) += 1;
        ptc += 12;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 8;
    while (*ptc)
    {
        ptc += 7;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 8;
        (*ptc) -= 1;
    }
    ptc += 8;
    while (*ptc)
    {
        ptc -= 8;
        (*ptc) += 1;
        ptc += 8;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 3;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 8;
    while (*ptc)
    {
        ptc += 7;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 8;
        (*ptc) -= 1;
    }
    ptc += 8;
    while (*ptc)
    {
        ptc -= 8;
        (*ptc) += 1;
        ptc += 8;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 12;
    while (*ptc)
    {
        ptc += 10;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) += 1;
        ptc -= 12;
        (*ptc) -= 1;
    }
    ptc += 12;
    while (*ptc)
    {
        ptc -= 12;
        (*ptc) += 1;
        ptc += 12;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        (*ptc) -= 1;
        ptc += 4;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            ptc -= 1;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) -= 1;
        }
        ptc -= 4;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 1;
        (*ptc) -= 1;
        ptc += 1;
        (*ptc) -= 1;
    }
    ptc -= 6;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 4;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 7;
    while (*ptc)
    {
        ptc += 6;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 7;
        (*ptc) -= 1;
    }
    ptc += 7;
    while (*ptc)
    {
        ptc -= 7;
        (*ptc) += 1;
        ptc += 7;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 4;
                (*ptc) += 1;
                ptc += 2;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 5;
                (*ptc) -= 1;
            }
            ptc -= 3;
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 7;
    while (*ptc)
    {
        ptc += 6;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 7;
        (*ptc) -= 1;
    }
    ptc += 7;
    while (*ptc)
    {
        ptc -= 7;
        (*ptc) += 1;
        ptc += 7;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 5;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 5;
            (*ptc) -= 1;
        }
        ptc += 5;
        while (*ptc)
        {
            ptc -= 5;
            (*ptc) += 1;
            ptc += 5;
            (*ptc) -= 1;
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 4;
                (*ptc) += 1;
                ptc += 2;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 5;
                (*ptc) -= 1;
            }
            ptc -= 3;
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 120;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 61;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 3;
    while (*ptc)
    {
        ptc += 2;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 3;
        (*ptc) -= 1;
    }
    ptc += 3;
    while (*ptc)
    {
        ptc -= 3;
        (*ptc) += 1;
        ptc += 3;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        ptc += 1;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 2;
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        ptc -= 2;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 100;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 4;
            (*ptc) -= 100;
            ptc += 1;
            (*ptc) += 1;
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 4;
            (*ptc) -= 10;
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) += 48;
        printf("%c", *ptc);
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 4;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) += 48;
        printf("%c", *ptc);
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 3;
    (*ptc) += 48;
    printf("%c", *ptc);
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 32;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 121;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 61;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        ptc += 1;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 2;
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        ptc -= 2;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 2;
    while (*ptc)
    {
        ptc += 1;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 2;
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        ptc -= 2;
        (*ptc) += 1;
        ptc += 2;
        (*ptc) -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 2;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 100;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 4;
            (*ptc) -= 100;
            ptc += 1;
            (*ptc) += 1;
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 1;
    while (*ptc)
    {
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 6;
        while (*ptc)
        {
            ptc += 4;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) += 1;
            ptc -= 6;
            (*ptc) -= 1;
        }
        ptc += 6;
        while (*ptc)
        {
            ptc -= 6;
            (*ptc) += 1;
            ptc += 6;
            (*ptc) -= 1;
        }
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 10;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        while (*ptc)
        {
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 6;
            while (*ptc)
            {
                ptc += 5;
                (*ptc) += 1;
                ptc += 1;
                (*ptc) += 1;
                ptc -= 6;
                (*ptc) -= 1;
            }
            ptc += 6;
            while (*ptc)
            {
                ptc -= 6;
                (*ptc) += 1;
                ptc += 6;
                (*ptc) -= 1;
            }
            ptc -= 1;
            while (*ptc)
            {
                ptc -= 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc -= 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 5;
                (*ptc) -= 1;
                ptc += 6;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                (*ptc) += 1;
                ptc -= 1;
                while (*ptc)
                {
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc -= 6;
                    (*ptc) -= 1;
                    ptc += 5;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc += 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc += 1;
            while (*ptc)
            {
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 1;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc -= 7;
                while (*ptc)
                {
                    ptc += 6;
                    (*ptc) += 1;
                    ptc += 1;
                    (*ptc) += 1;
                    ptc -= 7;
                    (*ptc) -= 1;
                }
                ptc += 7;
                while (*ptc)
                {
                    ptc -= 7;
                    (*ptc) += 1;
                    ptc += 7;
                    (*ptc) -= 1;
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 1;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 1;
                while (*ptc)
                {
                    ptc -= 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                    (*ptc) += 1;
                    ptc += 4;
                    while (*ptc)
                    {
                        (*ptc) -= 1;
                    }
                }
                ptc -= 3;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
                ptc += 2;
                while (*ptc)
                {
                    (*ptc) -= 1;
                }
            }
            ptc -= 2;
        }
        ptc -= 3;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            (*ptc) += 1;
            ptc += 2;
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc -= 2;
        while (*ptc)
        {
            ptc += 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 2;
        while (*ptc)
        {
            ptc -= 2;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            ptc -= 4;
            (*ptc) -= 10;
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
            (*ptc) += 1;
            ptc += 3;
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 2;
        while (*ptc)
        {
            while (*ptc)
            {
                (*ptc) -= 1;
            }
        }
        ptc -= 1;
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 4;
        while (*ptc)
        {
            ptc += 3;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 4;
            (*ptc) -= 1;
        }
        ptc += 4;
        while (*ptc)
        {
            ptc -= 4;
            (*ptc) += 1;
            ptc += 4;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) += 48;
        printf("%c", *ptc);
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 5;
    while (*ptc)
    {
        ptc += 4;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 5;
        (*ptc) -= 1;
    }
    ptc += 5;
    while (*ptc)
    {
        ptc -= 5;
        (*ptc) += 1;
        ptc += 5;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc += 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    ptc -= 4;
    while (*ptc)
    {
        ptc += 3;
        (*ptc) += 1;
        ptc += 1;
        (*ptc) += 1;
        ptc -= 4;
        (*ptc) -= 1;
    }
    ptc += 4;
    while (*ptc)
    {
        ptc -= 4;
        (*ptc) += 1;
        ptc += 4;
        (*ptc) -= 1;
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        (*ptc) += 1;
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 1;
    while (*ptc)
    {
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc += 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
        ptc -= 3;
        while (*ptc)
        {
            ptc += 2;
            (*ptc) += 1;
            ptc += 1;
            (*ptc) += 1;
            ptc -= 3;
            (*ptc) -= 1;
        }
        ptc += 3;
        while (*ptc)
        {
            ptc -= 3;
            (*ptc) += 1;
            ptc += 3;
            (*ptc) -= 1;
        }
        ptc -= 1;
        (*ptc) += 48;
        printf("%c", *ptc);
        ptc -= 1;
        while (*ptc)
        {
            (*ptc) -= 1;
        }
    }
    ptc -= 3;
    (*ptc) += 48;
    printf("%c", *ptc);
    ptc -= 1;
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 32;
    printf("%c", *ptc);
    while (*ptc)
    {
        (*ptc) -= 1;
    }
    (*ptc) += 10;
    printf("%c", *ptc);
    while (1)
    {
        ;
    }
    return 0;
}
