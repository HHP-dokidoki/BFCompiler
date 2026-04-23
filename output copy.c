#include <stdio.h>
unsigned char array[3000000] = {0};
unsigned char* ptc = array;
int main()
{
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += 8;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+1) += 8;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+-1) += 4;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+3) += 4;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+-1) += 4;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+5) += 5;
    *(ptc+4) += 3;
    *(ptc+3) += 2;
    *(ptc+2) += 7;
    *(ptc+1) += 6;
    }
    *(ptc+5) += -2;
    putchar(*(ptc+5));
    *(ptc+2) += -8;
    putchar(*(ptc+2));
    *(ptc+2) += 3;
    putchar(*(ptc+2));
    putchar(*(ptc+2));
    *(ptc+2) += 7;
    putchar(*(ptc+2));
    *(ptc+3) += -2;
    putchar(*(ptc+3));
    *(ptc+2) += -5;
    putchar(*(ptc+2));
    *(ptc+1) += 2;
    putchar(*(ptc+1));
    *(ptc+1) += 1;
    putchar(*(ptc+1));
    *(ptc+2) += -1;
    putchar(*(ptc+2));
    putchar(*(ptc+3));
    *(ptc+2) += -3;
    putchar(*(ptc+2));
    *(ptc+2) += 2;
    putchar(*(ptc+2));
    *(ptc+2) += -3;
    putchar(*(ptc+2));
    *(ptc+1) += -2;
    putchar(*(ptc+1));
    *(ptc+2) += 3;
    putchar(*(ptc+2));
    *(ptc+1) += -6;
    putchar(*(ptc+1));
    *(ptc+2) += -5;
    putchar(*(ptc+2));
    putchar(*(ptc+3));
    *(ptc+2) += 1;
    putchar(*(ptc+2));
    *(ptc+1) += 4;
    putchar(*(ptc+1));
    putchar(*(ptc+1));
    *(ptc+1) += -1;
    putchar(*(ptc+1));
    *(ptc+2) += 5;
    putchar(*(ptc+2));
    putchar(*(ptc+3));
    *(ptc+1) += -3;
    putchar(*(ptc+1));
    *(ptc+2) += -5;
    putchar(*(ptc+2));
    putchar(*(ptc+3));
    *(ptc+4) += 5;
    putchar(*(ptc+4));
    *(ptc+1) += 1;
    putchar(*(ptc+1));
    *(ptc+2) += -5;
    putchar(*(ptc+2));
    *(ptc+2) += 11;
    putchar(*(ptc+2));
    putchar(*(ptc+3));
    *(ptc+1) += 7;
    putchar(*(ptc+1));
    *(ptc+1) += 5;
    putchar(*(ptc+1));
    putchar(*(ptc+2));
    *(ptc+1) += -9;
    putchar(*(ptc+1));
    *(ptc+2) += -2;
    putchar(*(ptc+2));
    *(ptc+2) += -2;
    putchar(*(ptc+2));
    *(ptc+2) += 2;
    putchar(*(ptc+2));
    putchar(*(ptc+1));
    *(ptc+2) += 2;
    putchar(*(ptc+2));
    putchar(*(ptc+1));
    *(ptc+2) += -2;
    putchar(*(ptc+2));
    *(ptc+0) += 10;
    putchar(*(ptc+0));
    ptc += -2;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += 8;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+1) += 8;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    *(ptc+-1) += 4;
    }
    *(ptc+0) += 1;
    ptc += -1;
    while(*ptc) {
    *(ptc+1) += -1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-1) += 1;
    *(ptc+86) += 1;
    *(ptc+0) += -1;
    ptc += -1;
    while(*ptc) {
    ptc += 1;
    while(*ptc) {
    *(ptc+48) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+48) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+48) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+6) += 1;
    *(ptc+8) += -1;
    ptc += 6;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += 1;
    }
    *(ptc+37) += -1;
    ptc += 39;
    while(*ptc) {
    ptc += -1;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    while(*ptc) {
    *(ptc+4) += -1;
    *(ptc+-1) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+8) += 1;
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += 8;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -53;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += -116;
    ptc += 51;
    }
    ptc += -7;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -21;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 10;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += -1;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    while(*ptc) {
    *(ptc+-26) += -1;
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    ptc += -28;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 26;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-24) += -1;
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    ptc += -28;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 24;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+9) += 1;
    ptc += -22;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+33) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+33) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+33) += 1;
    *(ptc+0) += -1;
    }
    ptc += 20;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += -30;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 26;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -9;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -14;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 26;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += -24;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 4;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += 2;
    while(*ptc) {
    *(ptc+-14) += -1;
    *(ptc+0) += -1;
    ptc += -16;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += -1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    *(ptc+-4) += -1;
    ptc += -1;
    }
    *(ptc+-2) += -1;
    ptc += 14;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-12) += -1;
    *(ptc+0) += -1;
    ptc += -16;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += -1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-4) += -1;
    ptc += 12;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-16) += -1;
    *(ptc+0) += -1;
    }
    ptc += -46;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 4;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 22;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += -48;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) = getchar();
    *(ptc+2) += -1;
    *(ptc+0) += 1;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+-1) += 1;
    *(ptc+0) += -1;
    ptc += 1;
    }
    *(ptc+-2) += -1;
    ptc += -4;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 50;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    while(*ptc) {
    *(ptc+3) += -1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+3) += -1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+3) += -1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+-2) += 1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+-3) += 1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+-4) += 1;
    }
    ptc += -4;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -53;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += 4;
    ptc += 51;
    }
    ptc += -7;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -39;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += -1;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    ptc += 38;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -33;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 16;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 20;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += -1;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    while(*ptc) {
    *(ptc+-38) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 38;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-36) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 36;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+9) += 1;
    ptc += -46;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 44;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += -42;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 38;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -39;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 4;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 22;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-24) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += -42;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 16;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 20;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += -2;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    while(*ptc) {
    *(ptc+-38) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 38;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-36) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 36;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += -46;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+53) += 1;
    ptc += -2;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 44;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += -42;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 38;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -39;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+0) += 57;
    ptc += 16;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 10;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+-12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += -1;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    while(*ptc) {
    *(ptc+-26) += -1;
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    ptc += -28;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 26;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-24) += -1;
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    ptc += -28;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 24;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+9) += 1;
    ptc += -46;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+57) += 1;
    *(ptc+0) += -1;
    }
    ptc += 44;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += -30;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+42) += 1;
    *(ptc+0) += -1;
    }
    ptc += 26;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -9;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -14;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+28) += 1;
    *(ptc+12) += 1;
    *(ptc+0) += -1;
    }
    ptc += 26;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-28) += 1;
    *(ptc+0) += -1;
    }
    ptc += -42;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 16;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+22) += 1;
    *(ptc+-18) += 1;
    *(ptc+0) += -1;
    }
    ptc += 20;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-22) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+0) += -1;
    *(ptc+-1) += -1;
    *(ptc+-2) += -1;
    while(*ptc) {
    *(ptc+-38) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 38;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-36) += -1;
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    ptc += -40;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 36;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+8) += 1;
    ptc += -40;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+40) += 1;
    *(ptc+54) += 1;
    *(ptc+0) += -1;
    }
    ptc += 38;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-40) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += -33;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -8;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+6) += 1;
    *(ptc+0) += -1;
    }
    ptc += 44;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    *(ptc+6) += 1;
    ptc += -18;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+30) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+30) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+16) += 1;
    *(ptc+30) += 1;
    *(ptc+0) += -1;
    }
    ptc += 14;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    }
    *(ptc+0) += -1;
    *(ptc+-2) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+9) += 1;
    *(ptc+1) += 1;
    *(ptc+0) += -1;
    ptc += 9;
    while(*ptc) {
    *(ptc+-14) += -1;
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    ptc += -16;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+2) += -1;
    *(ptc+-2) += 1;
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    *(ptc+-1) += 1;
    ptc += -1;
    }
    ptc += 14;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-12) += -1;
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    ptc += -16;
    while(*ptc) {
    ptc += 2;
    }
    *(ptc+2) += 1;
    ptc += 2;
    while(*ptc) {
    *(ptc+2) += 1;
    *(ptc+-3) += 1;
    *(ptc+0) += -1;
    ptc += 2;
    }
    ptc += 12;
    }
    ptc += -1;
    while(*ptc) {
    *(ptc+-16) += 1;
    *(ptc+0) += -1;
    }
    ptc += -46;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 50;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-52) += 1;
    *(ptc+0) += -1;
    }
    ptc += -48;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+43) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+43) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+46) += 1;
    *(ptc+43) += 1;
    *(ptc+0) += -1;
    }
    ptc += 44;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+-46) += 1;
    *(ptc+0) += -1;
    }
    ptc += -8;
    while(*ptc) {
    *(ptc+13) += -1;
    *(ptc+0) += -1;
    ptc += 3;
    while(*ptc) {
    ptc += 5;
    }
    *(ptc+5) += 1;
    ptc += 5;
    while(*ptc) {
    *(ptc+0) += -1;
    ptc += -8;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 2;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+8) += 1;
    *(ptc+-2) += 1;
    ptc += 8;
    }
    *(ptc+-10) += -1;
    ptc += -13;
    }
    *(ptc+11) += -1;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += -2;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 6;
    }
    *(ptc+4) += 1;
    ptc += 4;
    while(*ptc) {
    *(ptc+0) += -1;
    ptc += -6;
    while(*ptc) {
    *(ptc+9) += -1;
    *(ptc+0) += -1;
    ptc += 3;
    while(*ptc) {
    ptc += 3;
    }
    *(ptc+3) += 1;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    ptc += -2;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+-1) += 1;
    ptc += -4;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    *(ptc+9) += 1;
    ptc += 9;
    }
    *(ptc+-6) += -1;
    ptc += -9;
    }
    *(ptc+9) += -1;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 3;
    }
    *(ptc+3) += 1;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    ptc += -5;
    while(*ptc) {
    *(ptc+5) += -1;
    *(ptc+0) += -1;
    ptc += 3;
    while(*ptc) {
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+-5) += 1;
    *(ptc+0) += -1;
    ptc += 1;
    }
    *(ptc+-2) += -1;
    ptc += -5;
    }
    *(ptc+5) += -1;
    ptc += 3;
    while(*ptc) {
    *(ptc+0) += -1;
    }
    ptc += 1;
    }
    *(ptc+1) += 1;
    ptc += 1;
    while(*ptc) {
    *(ptc+1) += 1;
    *(ptc+-5) += 1;
    *(ptc+0) += -1;
    ptc += 1;
    }
    *(ptc+3) += 1;
    ptc += 3;
    return 0;
}
