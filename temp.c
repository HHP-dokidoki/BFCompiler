#include <stdio.h>
unsigned char array[3000000] = {0};
char* ptc = array;
int main()
{
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
}
(*ptc) += 8;
while(*ptc) {
ptc += 1;
(*ptc) += 8;
ptc -= 1;
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
ptc -= 1;
(*ptc) += 4;
ptc += 1;
(*ptc) -= 1;
}
ptc -= 1;
while(*ptc) {
ptc += 3;
(*ptc) += 4;
while(*ptc) {
ptc -= 1;
(*ptc) += 4;
ptc += 1;
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
ptc += 1;
(*ptc) += 6;
ptc += 1;
(*ptc) += 7;
ptc += 1;
(*ptc) += 2;
ptc += 1;
(*ptc) += 3;
ptc += 1;
(*ptc) += 5;
ptc -= 5;
(*ptc) -= 1;
}
ptc += 5;
(*ptc) -= 2;
printf("%c", *ptc);
ptc -= 3;
(*ptc) -= 8;
printf("%c", *ptc);
(*ptc) += 3;
printf("%c", *ptc);
printf("%c", *ptc);
(*ptc) += 7;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 2;
printf("%c", *ptc);
ptc -= 1;
(*ptc) -= 5;
printf("%c", *ptc);
ptc -= 1;
(*ptc) += 2;
printf("%c", *ptc);
(*ptc) += 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 1;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc -= 1;
(*ptc) -= 3;
printf("%c", *ptc);
(*ptc) += 2;
printf("%c", *ptc);
(*ptc) -= 3;
printf("%c", *ptc);
ptc -= 1;
(*ptc) -= 2;
printf("%c", *ptc);
ptc += 1;
(*ptc) += 3;
printf("%c", *ptc);
ptc -= 1;
(*ptc) -= 6;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 5;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc -= 1;
(*ptc) += 1;
printf("%c", *ptc);
ptc -= 1;
(*ptc) += 4;
printf("%c", *ptc);
printf("%c", *ptc);
(*ptc) -= 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) += 5;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc -= 2;
(*ptc) -= 3;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 5;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) += 5;
printf("%c", *ptc);
ptc -= 3;
(*ptc) += 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 5;
printf("%c", *ptc);
(*ptc) += 11;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc -= 2;
(*ptc) += 7;
printf("%c", *ptc);
(*ptc) += 5;
printf("%c", *ptc);
ptc += 1;
printf("%c", *ptc);
ptc -= 1;
(*ptc) -= 9;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 2;
printf("%c", *ptc);
(*ptc) -= 2;
printf("%c", *ptc);
(*ptc) += 2;
printf("%c", *ptc);
ptc -= 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) += 2;
printf("%c", *ptc);
ptc -= 1;
printf("%c", *ptc);
ptc += 1;
(*ptc) -= 2;
printf("%c", *ptc);
ptc -= 2;
(*ptc) += 10;
printf("%c", *ptc);
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
}
(*ptc) += 8;
while(*ptc) {
ptc += 1;
(*ptc) += 8;
ptc -= 1;
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
ptc -= 1;
(*ptc) += 4;
ptc += 1;
(*ptc) -= 1;
}
(*ptc) += 1;
ptc -= 1;
while(*ptc) {
ptc += 1;
(*ptc) -= 1;
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
}
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
ptc += 87;
(*ptc) += 1;
ptc -= 87;
(*ptc) += 1;
while(*ptc) {
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 42;
(*ptc) += 1;
ptc -= 48;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 42;
(*ptc) += 1;
ptc -= 48;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 42;
(*ptc) += 1;
ptc -= 48;
}
ptc += 8;
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
}
ptc += 37;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) -= 116;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 31;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
scanf("%c", ptc);
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 4;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 38;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 55;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 57;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 14;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 45;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 19;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
scanf("%c", ptc);
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 17;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 38;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 20;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 21;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 6;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 54;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 29;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 57;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 54;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 45;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 39;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 68;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
scanf("%c", ptc);
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
(*ptc) += 1;
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
(*ptc) += 1;
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 66;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 38;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 69;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 70;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 21;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 18;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 26;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 1;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 26;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 1;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 31;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 55;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 99;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 105;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 99;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 98;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 100;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 14;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 99;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 100;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 85;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 46;
printf("%c", *ptc);
ptc += 46;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 6;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 9;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) -= 126;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 9;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) -= 1;
ptc -= 10;
while(*ptc) {
ptc += 5;
}
ptc += 5;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
(*ptc) += 1;
ptc += 10;
(*ptc) += 1;
}
ptc -= 10;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 11;
(*ptc) -= 1;
ptc -= 8;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 6;
}
ptc += 4;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 1;
(*ptc) += 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 9;
(*ptc) += 1;
}
ptc -= 6;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 9;
(*ptc) -= 1;
ptc -= 6;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 3;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 5;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 5;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
}
ptc += 3;
(*ptc) += 1;
}
ptc -= 3;
ptc += 4;
(*ptc) += 1;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 7;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
ptc += 2;
(*ptc) += 1;
}
ptc -= 49;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 45;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc += 6;
(*ptc) += 1;
ptc -= 52;
}
ptc += 50;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 52;
(*ptc) += 1;
ptc += 52;
}
ptc -= 5;
ptc += 2;
ptc -= 5;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 3;
(*ptc) -= 1;
ptc -= 3;
}
ptc -= 1;
(*ptc) += 1;
ptc += 2;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 2;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 3;
}
ptc += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
}
ptc -= 4;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 123;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 10;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) -= 1;
ptc += 46;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 14;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 124;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 125;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 7;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 110;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 46;
printf("%c", *ptc);
ptc += 46;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 6;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 48;
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 46;
printf("%c", *ptc);
ptc += 46;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 18;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 26;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 1;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 26;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 52;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 1;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 31;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 22;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
ptc += 2;
(*ptc) += 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 3;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) -= 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 4;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) -= 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) -= 113;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 22;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) -= 110;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 22;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 22;
}
ptc += 20;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 22;
(*ptc) += 1;
ptc += 22;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 2;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 38;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 36;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 8;
(*ptc) += 1;
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 34;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 6;
(*ptc) += 1;
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc += 3;
(*ptc) += 1;
ptc -= 43;
}
ptc += 41;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 43;
(*ptc) += 1;
ptc += 43;
}
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 44;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 42;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 28;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) -= 102;
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 10;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 12;
(*ptc) += 1;
ptc += 28;
(*ptc) += 1;
ptc -= 16;
}
ptc += 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
ptc += 1;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 26;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 24;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 9;
(*ptc) += 1;
ptc -= 55;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 11;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 14;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 8;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 10;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
(*ptc) += 1;
ptc += 16;
(*ptc) += 1;
ptc -= 28;
}
ptc += 26;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 28;
(*ptc) += 1;
ptc += 28;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 2;
(*ptc) += 77;
ptc += 51;
}
ptc -= 7;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 1;
(*ptc) += 1;
ptc -= 40;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 4;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 46;
(*ptc) += 1;
ptc -= 40;
}
ptc += 38;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 40;
(*ptc) += 1;
ptc += 40;
}
ptc -= 2;
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 2;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
ptc += 1;
(*ptc) += 1;
}
ptc += 14;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 4;
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
ptc += 2;
}
ptc += 2;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
(*ptc) += 1;
ptc += 5;
(*ptc) += 1;
}
ptc += 12;
}
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 16;
(*ptc) += 1;
ptc += 16;
}
ptc -= 46;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 2;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 8;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
(*ptc) += 1;
ptc += 40;
(*ptc) += 1;
ptc -= 46;
}
ptc += 44;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 46;
(*ptc) += 1;
ptc += 46;
}
ptc -= 61;
while(*ptc) {
(*ptc) -= 1;
}
while(*ptc) {
(*ptc) -= 1;
}
ptc += 53;
}
ptc -= 2;
(*ptc) -= 1;
ptc -= 3;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
while(*ptc) {
ptc -= 1;
}
ptc -= 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
(*ptc) += 1;
}
ptc += 2;
(*ptc) -= 1;
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 16;
while(*ptc) {
(*ptc) -= 1;
ptc += 6;
while(*ptc) {
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 200713;
(*ptc) += 1;
ptc -= 11;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 792;
(*ptc) += 1;
ptc -= 9;
}
ptc += 3;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
while(*ptc) {
(*ptc) -= 1;
ptc -= 15;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 7;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 15;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 7;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 15;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 7;
}
ptc -= 9;
while(*ptc) {
(*ptc) -= 1;
ptc += 7;
(*ptc) += 1;
ptc -= 7;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 7;
(*ptc) += 1;
ptc -= 7;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 7;
(*ptc) += 1;
ptc -= 7;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 10;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 10;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 18;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 10;
}
ptc -= 12;
while(*ptc) {
(*ptc) -= 1;
ptc += 10;
(*ptc) += 1;
ptc -= 10;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 10;
(*ptc) += 1;
ptc -= 10;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 10;
(*ptc) += 1;
ptc -= 10;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 15;
while(*ptc) {
(*ptc) -= 1;
ptc -= 21;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 13;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 21;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 13;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 21;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 13;
}
ptc -= 15;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) += 1;
ptc -= 13;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) += 1;
ptc -= 13;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 13;
(*ptc) += 1;
ptc -= 13;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 18;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 24;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 16;
}
ptc -= 18;
while(*ptc) {
(*ptc) -= 1;
ptc += 16;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 16;
(*ptc) += 1;
ptc -= 16;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 16;
(*ptc) += 1;
ptc -= 16;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 21;
while(*ptc) {
(*ptc) -= 1;
ptc -= 27;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 19;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 27;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 19;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 27;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 19;
}
ptc -= 21;
while(*ptc) {
(*ptc) -= 1;
ptc += 19;
(*ptc) += 1;
ptc -= 19;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 19;
(*ptc) += 1;
ptc -= 19;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 19;
(*ptc) += 1;
ptc -= 19;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
while(*ptc) {
(*ptc) -= 1;
ptc -= 30;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 30;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 30;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 22;
}
ptc -= 24;
while(*ptc) {
(*ptc) -= 1;
ptc += 22;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 22;
(*ptc) += 1;
ptc -= 22;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 22;
(*ptc) += 1;
ptc -= 22;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 27;
while(*ptc) {
(*ptc) -= 1;
ptc -= 33;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 25;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 33;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 25;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 33;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 25;
}
ptc -= 27;
while(*ptc) {
(*ptc) -= 1;
ptc += 25;
(*ptc) += 1;
ptc -= 25;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 25;
(*ptc) += 1;
ptc -= 25;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 25;
(*ptc) += 1;
ptc -= 25;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
while(*ptc) {
(*ptc) -= 1;
ptc -= 36;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 36;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 36;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 28;
}
ptc -= 30;
while(*ptc) {
(*ptc) -= 1;
ptc += 28;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 28;
(*ptc) += 1;
ptc -= 28;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 28;
(*ptc) += 1;
ptc -= 28;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 31;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 31;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 39;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 31;
}
ptc -= 33;
while(*ptc) {
(*ptc) -= 1;
ptc += 31;
(*ptc) += 1;
ptc -= 31;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 31;
(*ptc) += 1;
ptc -= 31;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 31;
(*ptc) += 1;
ptc -= 31;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 36;
while(*ptc) {
(*ptc) -= 1;
ptc -= 42;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 34;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 42;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 34;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 42;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 34;
}
ptc -= 36;
while(*ptc) {
(*ptc) -= 1;
ptc += 34;
(*ptc) += 1;
ptc -= 34;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 34;
(*ptc) += 1;
ptc -= 34;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 34;
(*ptc) += 1;
ptc -= 34;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 39;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 37;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 37;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 45;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 37;
}
ptc -= 39;
while(*ptc) {
(*ptc) -= 1;
ptc += 37;
(*ptc) += 1;
ptc -= 37;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 37;
(*ptc) += 1;
ptc -= 37;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 37;
(*ptc) += 1;
ptc -= 37;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
while(*ptc) {
(*ptc) -= 1;
ptc -= 48;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 48;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 48;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 40;
}
ptc -= 42;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc -= 40;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 40;
(*ptc) += 1;
ptc -= 40;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 45;
while(*ptc) {
(*ptc) -= 1;
ptc -= 51;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 51;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 51;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 43;
}
ptc -= 45;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc -= 43;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 43;
(*ptc) += 1;
ptc -= 43;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 48;
while(*ptc) {
(*ptc) -= 1;
ptc -= 54;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 54;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 54;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 46;
}
ptc -= 48;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc -= 46;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 46;
(*ptc) += 1;
ptc -= 46;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 51;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 49;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 49;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 49;
}
ptc -= 51;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc -= 49;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc -= 49;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 49;
(*ptc) += 1;
ptc -= 49;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
while(*ptc) {
(*ptc) -= 1;
ptc -= 60;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 60;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 60;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 52;
}
ptc -= 54;
while(*ptc) {
(*ptc) -= 1;
ptc += 52;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 52;
(*ptc) += 1;
ptc -= 52;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 52;
(*ptc) += 1;
ptc -= 52;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
while(*ptc) {
(*ptc) -= 1;
ptc -= 63;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 55;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 63;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 55;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 63;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 55;
}
ptc -= 57;
while(*ptc) {
(*ptc) -= 1;
ptc += 55;
(*ptc) += 1;
ptc -= 55;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 55;
(*ptc) += 1;
ptc -= 55;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 55;
(*ptc) += 1;
ptc -= 55;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 60;
while(*ptc) {
(*ptc) -= 1;
ptc -= 66;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 58;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 66;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 58;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 66;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 58;
}
ptc -= 60;
while(*ptc) {
(*ptc) -= 1;
ptc += 58;
(*ptc) += 1;
ptc -= 58;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 58;
(*ptc) += 1;
ptc -= 58;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 58;
(*ptc) += 1;
ptc -= 58;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 63;
while(*ptc) {
(*ptc) -= 1;
ptc -= 69;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 61;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 69;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 61;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 69;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 61;
}
ptc -= 63;
while(*ptc) {
(*ptc) -= 1;
ptc += 61;
(*ptc) += 1;
ptc -= 61;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 61;
(*ptc) += 1;
ptc -= 61;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 61;
(*ptc) += 1;
ptc -= 61;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 66;
while(*ptc) {
(*ptc) -= 1;
ptc -= 72;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 64;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 72;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 64;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 72;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 64;
}
ptc -= 66;
while(*ptc) {
(*ptc) -= 1;
ptc += 64;
(*ptc) += 1;
ptc -= 64;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 64;
(*ptc) += 1;
ptc -= 64;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 64;
(*ptc) += 1;
ptc -= 64;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 69;
while(*ptc) {
(*ptc) -= 1;
ptc -= 75;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 67;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 75;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 67;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 75;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 67;
}
ptc -= 69;
while(*ptc) {
(*ptc) -= 1;
ptc += 67;
(*ptc) += 1;
ptc -= 67;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 67;
(*ptc) += 1;
ptc -= 67;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 67;
(*ptc) += 1;
ptc -= 67;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 72;
while(*ptc) {
(*ptc) -= 1;
ptc -= 78;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 70;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 78;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 70;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 78;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 70;
}
ptc -= 72;
while(*ptc) {
(*ptc) -= 1;
ptc += 70;
(*ptc) += 1;
ptc -= 70;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 70;
(*ptc) += 1;
ptc -= 70;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 70;
(*ptc) += 1;
ptc -= 70;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 75;
while(*ptc) {
(*ptc) -= 1;
ptc -= 81;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 73;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 81;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 73;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 81;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 73;
}
ptc -= 75;
while(*ptc) {
(*ptc) -= 1;
ptc += 73;
(*ptc) += 1;
ptc -= 73;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 73;
(*ptc) += 1;
ptc -= 73;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 73;
(*ptc) += 1;
ptc -= 73;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 78;
while(*ptc) {
(*ptc) -= 1;
ptc -= 84;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 76;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 84;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 76;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 84;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 76;
}
ptc -= 78;
while(*ptc) {
(*ptc) -= 1;
ptc += 76;
(*ptc) += 1;
ptc -= 76;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 76;
(*ptc) += 1;
ptc -= 76;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 76;
(*ptc) += 1;
ptc -= 76;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 81;
while(*ptc) {
(*ptc) -= 1;
ptc -= 87;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 79;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 87;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 79;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 87;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 79;
}
ptc -= 81;
while(*ptc) {
(*ptc) -= 1;
ptc += 79;
(*ptc) += 1;
ptc -= 79;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 79;
(*ptc) += 1;
ptc -= 79;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 79;
(*ptc) += 1;
ptc -= 79;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 84;
while(*ptc) {
(*ptc) -= 1;
ptc -= 90;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 82;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 90;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 82;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 90;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 82;
}
ptc -= 84;
while(*ptc) {
(*ptc) -= 1;
ptc += 82;
(*ptc) += 1;
ptc -= 82;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 82;
(*ptc) += 1;
ptc -= 82;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 82;
(*ptc) += 1;
ptc -= 82;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 87;
while(*ptc) {
(*ptc) -= 1;
ptc -= 93;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 85;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 93;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 85;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 93;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 85;
}
ptc -= 87;
while(*ptc) {
(*ptc) -= 1;
ptc += 85;
(*ptc) += 1;
ptc -= 85;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 85;
(*ptc) += 1;
ptc -= 85;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 85;
(*ptc) += 1;
ptc -= 85;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 90;
while(*ptc) {
(*ptc) -= 1;
ptc -= 96;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 88;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 96;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 88;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 96;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 88;
}
ptc -= 90;
while(*ptc) {
(*ptc) -= 1;
ptc += 88;
(*ptc) += 1;
ptc -= 88;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 88;
(*ptc) += 1;
ptc -= 88;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 88;
(*ptc) += 1;
ptc -= 88;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 93;
while(*ptc) {
(*ptc) -= 1;
ptc -= 99;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 91;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 99;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 91;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 99;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 91;
}
ptc -= 93;
while(*ptc) {
(*ptc) -= 1;
ptc += 91;
(*ptc) += 1;
ptc -= 91;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 91;
(*ptc) += 1;
ptc -= 91;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 91;
(*ptc) += 1;
ptc -= 91;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 96;
while(*ptc) {
(*ptc) -= 1;
ptc -= 102;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 94;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 102;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 94;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 102;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 94;
}
ptc -= 96;
while(*ptc) {
(*ptc) -= 1;
ptc += 94;
(*ptc) += 1;
ptc -= 94;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 94;
(*ptc) += 1;
ptc -= 94;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 94;
(*ptc) += 1;
ptc -= 94;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 99;
while(*ptc) {
(*ptc) -= 1;
ptc -= 105;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 97;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 105;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 97;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 105;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 97;
}
ptc -= 99;
while(*ptc) {
(*ptc) -= 1;
ptc += 97;
(*ptc) += 1;
ptc -= 97;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 97;
(*ptc) += 1;
ptc -= 97;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 97;
(*ptc) += 1;
ptc -= 97;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 102;
while(*ptc) {
(*ptc) -= 1;
ptc -= 108;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 100;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 108;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 100;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 108;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 100;
}
ptc -= 102;
while(*ptc) {
(*ptc) -= 1;
ptc += 100;
(*ptc) += 1;
ptc -= 100;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 100;
(*ptc) += 1;
ptc -= 100;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 100;
(*ptc) += 1;
ptc -= 100;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 105;
while(*ptc) {
(*ptc) -= 1;
ptc -= 111;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 103;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 111;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 103;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 111;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 103;
}
ptc -= 105;
while(*ptc) {
(*ptc) -= 1;
ptc += 103;
(*ptc) += 1;
ptc -= 103;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 103;
(*ptc) += 1;
ptc -= 103;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 103;
(*ptc) += 1;
ptc -= 103;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 108;
while(*ptc) {
(*ptc) -= 1;
ptc -= 114;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 106;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 114;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 106;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 114;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 106;
}
ptc -= 108;
while(*ptc) {
(*ptc) -= 1;
ptc += 106;
(*ptc) += 1;
ptc -= 106;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 106;
(*ptc) += 1;
ptc -= 106;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 106;
(*ptc) += 1;
ptc -= 106;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 111;
while(*ptc) {
(*ptc) -= 1;
ptc -= 117;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 109;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 117;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 109;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 117;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 109;
}
ptc -= 111;
while(*ptc) {
(*ptc) -= 1;
ptc += 109;
(*ptc) += 1;
ptc -= 109;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 109;
(*ptc) += 1;
ptc -= 109;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 109;
(*ptc) += 1;
ptc -= 109;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 114;
while(*ptc) {
(*ptc) -= 1;
ptc -= 120;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 112;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 120;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 112;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 120;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 112;
}
ptc -= 114;
while(*ptc) {
(*ptc) -= 1;
ptc += 112;
(*ptc) += 1;
ptc -= 112;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 112;
(*ptc) += 1;
ptc -= 112;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 112;
(*ptc) += 1;
ptc -= 112;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 117;
while(*ptc) {
(*ptc) -= 1;
ptc -= 123;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 115;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 123;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 115;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 123;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 115;
}
ptc -= 117;
while(*ptc) {
(*ptc) -= 1;
ptc += 115;
(*ptc) += 1;
ptc -= 115;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 115;
(*ptc) += 1;
ptc -= 115;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 115;
(*ptc) += 1;
ptc -= 115;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 120;
while(*ptc) {
(*ptc) -= 1;
ptc -= 126;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 118;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 126;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 118;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 126;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 118;
}
ptc -= 120;
while(*ptc) {
(*ptc) -= 1;
ptc += 118;
(*ptc) += 1;
ptc -= 118;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 118;
(*ptc) += 1;
ptc -= 118;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 118;
(*ptc) += 1;
ptc -= 118;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 123;
while(*ptc) {
(*ptc) -= 1;
ptc -= 129;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 121;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 129;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 121;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 129;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 121;
}
ptc -= 123;
while(*ptc) {
(*ptc) -= 1;
ptc += 121;
(*ptc) += 1;
ptc -= 121;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 121;
(*ptc) += 1;
ptc -= 121;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 121;
(*ptc) += 1;
ptc -= 121;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 126;
while(*ptc) {
(*ptc) -= 1;
ptc -= 132;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 124;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 132;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 124;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 132;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 124;
}
ptc -= 126;
while(*ptc) {
(*ptc) -= 1;
ptc += 124;
(*ptc) += 1;
ptc -= 124;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 124;
(*ptc) += 1;
ptc -= 124;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 124;
(*ptc) += 1;
ptc -= 124;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 129;
while(*ptc) {
(*ptc) -= 1;
ptc -= 135;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 127;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 135;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 127;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 135;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 127;
}
ptc -= 129;
while(*ptc) {
(*ptc) -= 1;
ptc += 127;
(*ptc) += 1;
ptc -= 127;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 127;
(*ptc) += 1;
ptc -= 127;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 127;
(*ptc) += 1;
ptc -= 127;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 132;
while(*ptc) {
(*ptc) -= 1;
ptc -= 138;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 130;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 138;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 130;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 138;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 130;
}
ptc -= 132;
while(*ptc) {
(*ptc) -= 1;
ptc += 130;
(*ptc) += 1;
ptc -= 130;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 130;
(*ptc) += 1;
ptc -= 130;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 130;
(*ptc) += 1;
ptc -= 130;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 135;
while(*ptc) {
(*ptc) -= 1;
ptc -= 141;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 133;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 141;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 133;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 141;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 133;
}
ptc -= 135;
while(*ptc) {
(*ptc) -= 1;
ptc += 133;
(*ptc) += 1;
ptc -= 133;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 133;
(*ptc) += 1;
ptc -= 133;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 133;
(*ptc) += 1;
ptc -= 133;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 138;
while(*ptc) {
(*ptc) -= 1;
ptc -= 144;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 136;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 144;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 136;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 144;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 136;
}
ptc -= 138;
while(*ptc) {
(*ptc) -= 1;
ptc += 136;
(*ptc) += 1;
ptc -= 136;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 136;
(*ptc) += 1;
ptc -= 136;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 136;
(*ptc) += 1;
ptc -= 136;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 141;
while(*ptc) {
(*ptc) -= 1;
ptc -= 147;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 139;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 147;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 139;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 147;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 139;
}
ptc -= 141;
while(*ptc) {
(*ptc) -= 1;
ptc += 139;
(*ptc) += 1;
ptc -= 139;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 139;
(*ptc) += 1;
ptc -= 139;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 139;
(*ptc) += 1;
ptc -= 139;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 144;
while(*ptc) {
(*ptc) -= 1;
ptc -= 150;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 142;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 150;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 142;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 150;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 142;
}
ptc -= 144;
while(*ptc) {
(*ptc) -= 1;
ptc += 142;
(*ptc) += 1;
ptc -= 142;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 142;
(*ptc) += 1;
ptc -= 142;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 142;
(*ptc) += 1;
ptc -= 142;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 147;
while(*ptc) {
(*ptc) -= 1;
ptc -= 153;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 145;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 153;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 145;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 153;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 145;
}
ptc -= 147;
while(*ptc) {
(*ptc) -= 1;
ptc += 145;
(*ptc) += 1;
ptc -= 145;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 145;
(*ptc) += 1;
ptc -= 145;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 145;
(*ptc) += 1;
ptc -= 145;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 150;
while(*ptc) {
(*ptc) -= 1;
ptc -= 156;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 148;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 156;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 148;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 156;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 148;
}
ptc -= 150;
while(*ptc) {
(*ptc) -= 1;
ptc += 148;
(*ptc) += 1;
ptc -= 148;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 148;
(*ptc) += 1;
ptc -= 148;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 148;
(*ptc) += 1;
ptc -= 148;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 153;
while(*ptc) {
(*ptc) -= 1;
ptc -= 159;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 151;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 159;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 151;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 159;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 151;
}
ptc -= 153;
while(*ptc) {
(*ptc) -= 1;
ptc += 151;
(*ptc) += 1;
ptc -= 151;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 151;
(*ptc) += 1;
ptc -= 151;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 151;
(*ptc) += 1;
ptc -= 151;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 156;
while(*ptc) {
(*ptc) -= 1;
ptc -= 162;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 154;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 162;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 154;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 162;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 154;
}
ptc -= 156;
while(*ptc) {
(*ptc) -= 1;
ptc += 154;
(*ptc) += 1;
ptc -= 154;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 154;
(*ptc) += 1;
ptc -= 154;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 154;
(*ptc) += 1;
ptc -= 154;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 159;
while(*ptc) {
(*ptc) -= 1;
ptc -= 165;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 157;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 165;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 157;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 165;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 157;
}
ptc -= 159;
while(*ptc) {
(*ptc) -= 1;
ptc += 157;
(*ptc) += 1;
ptc -= 157;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 157;
(*ptc) += 1;
ptc -= 157;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 157;
(*ptc) += 1;
ptc -= 157;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 162;
while(*ptc) {
(*ptc) -= 1;
ptc -= 168;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 160;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 168;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 160;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 168;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 160;
}
ptc -= 162;
while(*ptc) {
(*ptc) -= 1;
ptc += 160;
(*ptc) += 1;
ptc -= 160;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 160;
(*ptc) += 1;
ptc -= 160;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 160;
(*ptc) += 1;
ptc -= 160;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 165;
while(*ptc) {
(*ptc) -= 1;
ptc -= 171;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 163;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 171;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 163;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 171;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 163;
}
ptc -= 165;
while(*ptc) {
(*ptc) -= 1;
ptc += 163;
(*ptc) += 1;
ptc -= 163;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 163;
(*ptc) += 1;
ptc -= 163;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 163;
(*ptc) += 1;
ptc -= 163;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 168;
while(*ptc) {
(*ptc) -= 1;
ptc -= 174;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 166;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 174;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 166;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 174;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 166;
}
ptc -= 168;
while(*ptc) {
(*ptc) -= 1;
ptc += 166;
(*ptc) += 1;
ptc -= 166;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 166;
(*ptc) += 1;
ptc -= 166;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 166;
(*ptc) += 1;
ptc -= 166;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 171;
while(*ptc) {
(*ptc) -= 1;
ptc -= 177;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 169;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 177;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 169;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 177;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 169;
}
ptc -= 171;
while(*ptc) {
(*ptc) -= 1;
ptc += 169;
(*ptc) += 1;
ptc -= 169;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 169;
(*ptc) += 1;
ptc -= 169;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 169;
(*ptc) += 1;
ptc -= 169;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 174;
while(*ptc) {
(*ptc) -= 1;
ptc -= 180;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 172;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 180;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 172;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 180;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 172;
}
ptc -= 174;
while(*ptc) {
(*ptc) -= 1;
ptc += 172;
(*ptc) += 1;
ptc -= 172;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 172;
(*ptc) += 1;
ptc -= 172;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 172;
(*ptc) += 1;
ptc -= 172;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 177;
while(*ptc) {
(*ptc) -= 1;
ptc -= 183;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 175;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 183;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 175;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 183;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 175;
}
ptc -= 177;
while(*ptc) {
(*ptc) -= 1;
ptc += 175;
(*ptc) += 1;
ptc -= 175;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 175;
(*ptc) += 1;
ptc -= 175;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 175;
(*ptc) += 1;
ptc -= 175;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 180;
while(*ptc) {
(*ptc) -= 1;
ptc -= 186;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 178;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 186;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 178;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 186;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 178;
}
ptc -= 180;
while(*ptc) {
(*ptc) -= 1;
ptc += 178;
(*ptc) += 1;
ptc -= 178;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 178;
(*ptc) += 1;
ptc -= 178;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 178;
(*ptc) += 1;
ptc -= 178;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 183;
while(*ptc) {
(*ptc) -= 1;
ptc -= 189;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 181;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 189;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 181;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 189;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 181;
}
ptc -= 183;
while(*ptc) {
(*ptc) -= 1;
ptc += 181;
(*ptc) += 1;
ptc -= 181;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 181;
(*ptc) += 1;
ptc -= 181;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 181;
(*ptc) += 1;
ptc -= 181;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 186;
while(*ptc) {
(*ptc) -= 1;
ptc -= 192;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 184;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 192;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 184;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 192;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 184;
}
ptc -= 186;
while(*ptc) {
(*ptc) -= 1;
ptc += 184;
(*ptc) += 1;
ptc -= 184;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 184;
(*ptc) += 1;
ptc -= 184;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 184;
(*ptc) += 1;
ptc -= 184;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 189;
while(*ptc) {
(*ptc) -= 1;
ptc -= 195;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 187;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 195;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 187;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 195;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 187;
}
ptc -= 189;
while(*ptc) {
(*ptc) -= 1;
ptc += 187;
(*ptc) += 1;
ptc -= 187;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 187;
(*ptc) += 1;
ptc -= 187;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 187;
(*ptc) += 1;
ptc -= 187;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 192;
while(*ptc) {
(*ptc) -= 1;
ptc -= 198;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 190;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 198;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 190;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 198;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 190;
}
ptc -= 192;
while(*ptc) {
(*ptc) -= 1;
ptc += 190;
(*ptc) += 1;
ptc -= 190;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 190;
(*ptc) += 1;
ptc -= 190;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 190;
(*ptc) += 1;
ptc -= 190;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 195;
while(*ptc) {
(*ptc) -= 1;
ptc -= 201;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 193;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 201;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 193;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 201;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 193;
}
ptc -= 195;
while(*ptc) {
(*ptc) -= 1;
ptc += 193;
(*ptc) += 1;
ptc -= 193;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 193;
(*ptc) += 1;
ptc -= 193;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 193;
(*ptc) += 1;
ptc -= 193;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 198;
while(*ptc) {
(*ptc) -= 1;
ptc -= 204;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 196;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 204;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 196;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 204;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 196;
}
ptc -= 198;
while(*ptc) {
(*ptc) -= 1;
ptc += 196;
(*ptc) += 1;
ptc -= 196;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 196;
(*ptc) += 1;
ptc -= 196;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 196;
(*ptc) += 1;
ptc -= 196;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 201;
while(*ptc) {
(*ptc) -= 1;
ptc -= 207;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 199;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 207;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 199;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 207;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 199;
}
ptc -= 201;
while(*ptc) {
(*ptc) -= 1;
ptc += 199;
(*ptc) += 1;
ptc -= 199;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 199;
(*ptc) += 1;
ptc -= 199;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 199;
(*ptc) += 1;
ptc -= 199;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 204;
while(*ptc) {
(*ptc) -= 1;
ptc -= 210;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 202;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 210;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 202;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 210;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 202;
}
ptc -= 204;
while(*ptc) {
(*ptc) -= 1;
ptc += 202;
(*ptc) += 1;
ptc -= 202;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 202;
(*ptc) += 1;
ptc -= 202;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 202;
(*ptc) += 1;
ptc -= 202;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 207;
while(*ptc) {
(*ptc) -= 1;
ptc -= 213;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 205;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 213;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 205;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 213;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 205;
}
ptc -= 207;
while(*ptc) {
(*ptc) -= 1;
ptc += 205;
(*ptc) += 1;
ptc -= 205;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 205;
(*ptc) += 1;
ptc -= 205;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 205;
(*ptc) += 1;
ptc -= 205;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 210;
while(*ptc) {
(*ptc) -= 1;
ptc -= 216;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 208;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 216;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 208;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 216;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 208;
}
ptc -= 210;
while(*ptc) {
(*ptc) -= 1;
ptc += 208;
(*ptc) += 1;
ptc -= 208;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 208;
(*ptc) += 1;
ptc -= 208;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 208;
(*ptc) += 1;
ptc -= 208;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 213;
while(*ptc) {
(*ptc) -= 1;
ptc -= 219;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 211;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 219;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 211;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 219;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 211;
}
ptc -= 213;
while(*ptc) {
(*ptc) -= 1;
ptc += 211;
(*ptc) += 1;
ptc -= 211;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 211;
(*ptc) += 1;
ptc -= 211;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 211;
(*ptc) += 1;
ptc -= 211;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 216;
while(*ptc) {
(*ptc) -= 1;
ptc -= 222;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 214;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 222;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 214;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 222;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 214;
}
ptc -= 216;
while(*ptc) {
(*ptc) -= 1;
ptc += 214;
(*ptc) += 1;
ptc -= 214;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 214;
(*ptc) += 1;
ptc -= 214;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 214;
(*ptc) += 1;
ptc -= 214;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 219;
while(*ptc) {
(*ptc) -= 1;
ptc -= 225;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 217;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 225;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 217;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 225;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 217;
}
ptc -= 219;
while(*ptc) {
(*ptc) -= 1;
ptc += 217;
(*ptc) += 1;
ptc -= 217;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 217;
(*ptc) += 1;
ptc -= 217;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 217;
(*ptc) += 1;
ptc -= 217;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 222;
while(*ptc) {
(*ptc) -= 1;
ptc -= 228;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 220;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 228;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 220;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 228;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 220;
}
ptc -= 222;
while(*ptc) {
(*ptc) -= 1;
ptc += 220;
(*ptc) += 1;
ptc -= 220;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 220;
(*ptc) += 1;
ptc -= 220;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 220;
(*ptc) += 1;
ptc -= 220;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 225;
while(*ptc) {
(*ptc) -= 1;
ptc -= 231;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 223;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 231;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 223;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 231;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 223;
}
ptc -= 225;
while(*ptc) {
(*ptc) -= 1;
ptc += 223;
(*ptc) += 1;
ptc -= 223;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 223;
(*ptc) += 1;
ptc -= 223;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 223;
(*ptc) += 1;
ptc -= 223;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 228;
while(*ptc) {
(*ptc) -= 1;
ptc -= 234;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 226;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 234;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 226;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 234;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 226;
}
ptc -= 228;
while(*ptc) {
(*ptc) -= 1;
ptc += 226;
(*ptc) += 1;
ptc -= 226;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 226;
(*ptc) += 1;
ptc -= 226;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 226;
(*ptc) += 1;
ptc -= 226;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 231;
while(*ptc) {
(*ptc) -= 1;
ptc -= 237;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 229;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 237;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 229;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 237;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 229;
}
ptc -= 231;
while(*ptc) {
(*ptc) -= 1;
ptc += 229;
(*ptc) += 1;
ptc -= 229;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 229;
(*ptc) += 1;
ptc -= 229;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 229;
(*ptc) += 1;
ptc -= 229;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 234;
while(*ptc) {
(*ptc) -= 1;
ptc -= 240;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 232;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 240;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 232;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 240;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 232;
}
ptc -= 234;
while(*ptc) {
(*ptc) -= 1;
ptc += 232;
(*ptc) += 1;
ptc -= 232;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 232;
(*ptc) += 1;
ptc -= 232;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 232;
(*ptc) += 1;
ptc -= 232;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 237;
while(*ptc) {
(*ptc) -= 1;
ptc -= 243;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 235;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 243;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 235;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 243;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 235;
}
ptc -= 237;
while(*ptc) {
(*ptc) -= 1;
ptc += 235;
(*ptc) += 1;
ptc -= 235;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 235;
(*ptc) += 1;
ptc -= 235;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 235;
(*ptc) += 1;
ptc -= 235;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 240;
while(*ptc) {
(*ptc) -= 1;
ptc -= 246;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 238;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 246;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 238;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 246;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 238;
}
ptc -= 240;
while(*ptc) {
(*ptc) -= 1;
ptc += 238;
(*ptc) += 1;
ptc -= 238;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 238;
(*ptc) += 1;
ptc -= 238;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 238;
(*ptc) += 1;
ptc -= 238;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 243;
while(*ptc) {
(*ptc) -= 1;
ptc -= 249;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 241;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 249;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 241;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 249;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 241;
}
ptc -= 243;
while(*ptc) {
(*ptc) -= 1;
ptc += 241;
(*ptc) += 1;
ptc -= 241;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 241;
(*ptc) += 1;
ptc -= 241;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 241;
(*ptc) += 1;
ptc -= 241;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 246;
while(*ptc) {
(*ptc) -= 1;
ptc -= 252;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 244;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 252;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 244;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 252;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 244;
}
ptc -= 246;
while(*ptc) {
(*ptc) -= 1;
ptc += 244;
(*ptc) += 1;
ptc -= 244;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 244;
(*ptc) += 1;
ptc -= 244;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 244;
(*ptc) += 1;
ptc -= 244;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 249;
while(*ptc) {
(*ptc) -= 1;
ptc -= 255;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 247;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 255;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 247;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 255;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 247;
}
ptc -= 249;
while(*ptc) {
(*ptc) -= 1;
ptc += 247;
(*ptc) += 1;
ptc -= 247;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 247;
(*ptc) += 1;
ptc -= 247;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 247;
(*ptc) += 1;
ptc -= 247;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 252;
while(*ptc) {
(*ptc) -= 1;
ptc -= 258;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 250;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 258;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 250;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 258;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 250;
}
ptc -= 252;
while(*ptc) {
(*ptc) -= 1;
ptc += 250;
(*ptc) += 1;
ptc -= 250;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 250;
(*ptc) += 1;
ptc -= 250;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 250;
(*ptc) += 1;
ptc -= 250;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 255;
while(*ptc) {
(*ptc) -= 1;
ptc -= 261;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 253;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 261;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 253;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 261;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 253;
}
ptc -= 255;
while(*ptc) {
(*ptc) -= 1;
ptc += 253;
(*ptc) += 1;
ptc -= 253;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 253;
(*ptc) += 1;
ptc -= 253;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 253;
(*ptc) += 1;
ptc -= 253;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 258;
while(*ptc) {
(*ptc) -= 1;
ptc -= 264;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 256;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 264;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 256;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 264;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 256;
}
ptc -= 258;
while(*ptc) {
(*ptc) -= 1;
ptc += 256;
(*ptc) += 1;
ptc -= 256;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 256;
(*ptc) += 1;
ptc -= 256;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 256;
(*ptc) += 1;
ptc -= 256;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 261;
while(*ptc) {
(*ptc) -= 1;
ptc -= 267;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 259;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 267;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 259;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 267;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 259;
}
ptc -= 261;
while(*ptc) {
(*ptc) -= 1;
ptc += 259;
(*ptc) += 1;
ptc -= 259;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 259;
(*ptc) += 1;
ptc -= 259;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 259;
(*ptc) += 1;
ptc -= 259;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 264;
while(*ptc) {
(*ptc) -= 1;
ptc -= 270;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 262;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 270;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 262;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 270;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 262;
}
ptc -= 264;
while(*ptc) {
(*ptc) -= 1;
ptc += 262;
(*ptc) += 1;
ptc -= 262;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 262;
(*ptc) += 1;
ptc -= 262;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 262;
(*ptc) += 1;
ptc -= 262;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 267;
while(*ptc) {
(*ptc) -= 1;
ptc -= 273;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 265;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 273;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 265;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 273;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 265;
}
ptc -= 267;
while(*ptc) {
(*ptc) -= 1;
ptc += 265;
(*ptc) += 1;
ptc -= 265;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 265;
(*ptc) += 1;
ptc -= 265;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 265;
(*ptc) += 1;
ptc -= 265;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 270;
while(*ptc) {
(*ptc) -= 1;
ptc -= 276;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 268;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 276;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 268;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 276;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 268;
}
ptc -= 270;
while(*ptc) {
(*ptc) -= 1;
ptc += 268;
(*ptc) += 1;
ptc -= 268;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 268;
(*ptc) += 1;
ptc -= 268;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 268;
(*ptc) += 1;
ptc -= 268;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 273;
while(*ptc) {
(*ptc) -= 1;
ptc -= 279;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 271;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 279;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 271;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 279;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 271;
}
ptc -= 273;
while(*ptc) {
(*ptc) -= 1;
ptc += 271;
(*ptc) += 1;
ptc -= 271;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 271;
(*ptc) += 1;
ptc -= 271;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 271;
(*ptc) += 1;
ptc -= 271;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 276;
while(*ptc) {
(*ptc) -= 1;
ptc -= 282;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 274;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 282;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 274;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 282;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 274;
}
ptc -= 276;
while(*ptc) {
(*ptc) -= 1;
ptc += 274;
(*ptc) += 1;
ptc -= 274;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 274;
(*ptc) += 1;
ptc -= 274;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 274;
(*ptc) += 1;
ptc -= 274;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 279;
while(*ptc) {
(*ptc) -= 1;
ptc -= 285;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 277;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 285;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 277;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 285;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 277;
}
ptc -= 279;
while(*ptc) {
(*ptc) -= 1;
ptc += 277;
(*ptc) += 1;
ptc -= 277;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 277;
(*ptc) += 1;
ptc -= 277;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 277;
(*ptc) += 1;
ptc -= 277;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 282;
while(*ptc) {
(*ptc) -= 1;
ptc -= 288;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 280;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 288;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 280;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 288;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 280;
}
ptc -= 282;
while(*ptc) {
(*ptc) -= 1;
ptc += 280;
(*ptc) += 1;
ptc -= 280;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 280;
(*ptc) += 1;
ptc -= 280;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 280;
(*ptc) += 1;
ptc -= 280;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 285;
while(*ptc) {
(*ptc) -= 1;
ptc -= 291;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 283;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 291;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 283;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 291;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 283;
}
ptc -= 285;
while(*ptc) {
(*ptc) -= 1;
ptc += 283;
(*ptc) += 1;
ptc -= 283;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 283;
(*ptc) += 1;
ptc -= 283;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 283;
(*ptc) += 1;
ptc -= 283;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 288;
while(*ptc) {
(*ptc) -= 1;
ptc -= 294;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 286;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 294;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 286;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 294;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 286;
}
ptc -= 288;
while(*ptc) {
(*ptc) -= 1;
ptc += 286;
(*ptc) += 1;
ptc -= 286;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 286;
(*ptc) += 1;
ptc -= 286;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 286;
(*ptc) += 1;
ptc -= 286;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 291;
while(*ptc) {
(*ptc) -= 1;
ptc -= 297;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 289;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 297;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 289;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 297;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 289;
}
ptc -= 291;
while(*ptc) {
(*ptc) -= 1;
ptc += 289;
(*ptc) += 1;
ptc -= 289;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 289;
(*ptc) += 1;
ptc -= 289;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 289;
(*ptc) += 1;
ptc -= 289;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 294;
while(*ptc) {
(*ptc) -= 1;
ptc -= 300;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 292;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 300;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 292;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 300;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 292;
}
ptc -= 294;
while(*ptc) {
(*ptc) -= 1;
ptc += 292;
(*ptc) += 1;
ptc -= 292;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 292;
(*ptc) += 1;
ptc -= 292;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 292;
(*ptc) += 1;
ptc -= 292;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 297;
while(*ptc) {
(*ptc) -= 1;
ptc -= 303;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 295;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 303;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 295;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 303;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 295;
}
ptc -= 297;
while(*ptc) {
(*ptc) -= 1;
ptc += 295;
(*ptc) += 1;
ptc -= 295;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 295;
(*ptc) += 1;
ptc -= 295;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 295;
(*ptc) += 1;
ptc -= 295;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 300;
while(*ptc) {
(*ptc) -= 1;
ptc -= 306;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 298;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 306;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 298;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 306;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 298;
}
ptc -= 300;
while(*ptc) {
(*ptc) -= 1;
ptc += 298;
(*ptc) += 1;
ptc -= 298;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 298;
(*ptc) += 1;
ptc -= 298;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 298;
(*ptc) += 1;
ptc -= 298;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 303;
while(*ptc) {
(*ptc) -= 1;
ptc -= 309;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 301;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 309;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 301;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 309;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 301;
}
ptc -= 303;
while(*ptc) {
(*ptc) -= 1;
ptc += 301;
(*ptc) += 1;
ptc -= 301;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 301;
(*ptc) += 1;
ptc -= 301;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 301;
(*ptc) += 1;
ptc -= 301;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 306;
while(*ptc) {
(*ptc) -= 1;
ptc -= 312;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 304;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 312;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 304;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 312;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 304;
}
ptc -= 306;
while(*ptc) {
(*ptc) -= 1;
ptc += 304;
(*ptc) += 1;
ptc -= 304;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 304;
(*ptc) += 1;
ptc -= 304;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 304;
(*ptc) += 1;
ptc -= 304;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 309;
while(*ptc) {
(*ptc) -= 1;
ptc -= 315;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 307;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 315;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 307;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 315;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 307;
}
ptc -= 309;
while(*ptc) {
(*ptc) -= 1;
ptc += 307;
(*ptc) += 1;
ptc -= 307;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 307;
(*ptc) += 1;
ptc -= 307;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 307;
(*ptc) += 1;
ptc -= 307;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 312;
while(*ptc) {
(*ptc) -= 1;
ptc -= 318;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 310;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 318;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 310;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 318;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 310;
}
ptc -= 312;
while(*ptc) {
(*ptc) -= 1;
ptc += 310;
(*ptc) += 1;
ptc -= 310;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 310;
(*ptc) += 1;
ptc -= 310;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 310;
(*ptc) += 1;
ptc -= 310;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 315;
while(*ptc) {
(*ptc) -= 1;
ptc -= 321;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 313;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 321;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 313;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 321;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 313;
}
ptc -= 315;
while(*ptc) {
(*ptc) -= 1;
ptc += 313;
(*ptc) += 1;
ptc -= 313;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 313;
(*ptc) += 1;
ptc -= 313;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 313;
(*ptc) += 1;
ptc -= 313;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 318;
while(*ptc) {
(*ptc) -= 1;
ptc -= 324;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 316;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 324;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 316;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 324;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 316;
}
ptc -= 318;
while(*ptc) {
(*ptc) -= 1;
ptc += 316;
(*ptc) += 1;
ptc -= 316;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 316;
(*ptc) += 1;
ptc -= 316;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 316;
(*ptc) += 1;
ptc -= 316;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 321;
while(*ptc) {
(*ptc) -= 1;
ptc -= 327;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 319;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 327;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 319;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 327;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 319;
}
ptc -= 321;
while(*ptc) {
(*ptc) -= 1;
ptc += 319;
(*ptc) += 1;
ptc -= 319;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 319;
(*ptc) += 1;
ptc -= 319;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 319;
(*ptc) += 1;
ptc -= 319;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 324;
while(*ptc) {
(*ptc) -= 1;
ptc -= 330;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 322;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 330;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 322;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 330;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 322;
}
ptc -= 324;
while(*ptc) {
(*ptc) -= 1;
ptc += 322;
(*ptc) += 1;
ptc -= 322;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 322;
(*ptc) += 1;
ptc -= 322;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 322;
(*ptc) += 1;
ptc -= 322;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 327;
while(*ptc) {
(*ptc) -= 1;
ptc -= 333;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 325;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 333;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 325;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 333;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 325;
}
ptc -= 327;
while(*ptc) {
(*ptc) -= 1;
ptc += 325;
(*ptc) += 1;
ptc -= 325;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 325;
(*ptc) += 1;
ptc -= 325;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 325;
(*ptc) += 1;
ptc -= 325;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 330;
while(*ptc) {
(*ptc) -= 1;
ptc -= 336;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 328;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 336;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 328;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 336;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 328;
}
ptc -= 330;
while(*ptc) {
(*ptc) -= 1;
ptc += 328;
(*ptc) += 1;
ptc -= 328;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 328;
(*ptc) += 1;
ptc -= 328;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 328;
(*ptc) += 1;
ptc -= 328;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 333;
while(*ptc) {
(*ptc) -= 1;
ptc -= 339;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 331;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 339;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 331;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 339;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 331;
}
ptc -= 333;
while(*ptc) {
(*ptc) -= 1;
ptc += 331;
(*ptc) += 1;
ptc -= 331;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 331;
(*ptc) += 1;
ptc -= 331;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 331;
(*ptc) += 1;
ptc -= 331;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 336;
while(*ptc) {
(*ptc) -= 1;
ptc -= 342;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 334;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 342;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 334;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 342;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 334;
}
ptc -= 336;
while(*ptc) {
(*ptc) -= 1;
ptc += 334;
(*ptc) += 1;
ptc -= 334;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 334;
(*ptc) += 1;
ptc -= 334;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 334;
(*ptc) += 1;
ptc -= 334;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 339;
while(*ptc) {
(*ptc) -= 1;
ptc -= 345;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 337;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 345;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 337;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 345;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 337;
}
ptc -= 339;
while(*ptc) {
(*ptc) -= 1;
ptc += 337;
(*ptc) += 1;
ptc -= 337;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 337;
(*ptc) += 1;
ptc -= 337;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 337;
(*ptc) += 1;
ptc -= 337;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 342;
while(*ptc) {
(*ptc) -= 1;
ptc -= 348;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 340;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 348;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 340;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 348;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 340;
}
ptc -= 342;
while(*ptc) {
(*ptc) -= 1;
ptc += 340;
(*ptc) += 1;
ptc -= 340;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 340;
(*ptc) += 1;
ptc -= 340;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 340;
(*ptc) += 1;
ptc -= 340;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 345;
while(*ptc) {
(*ptc) -= 1;
ptc -= 351;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 343;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 351;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 343;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 351;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 343;
}
ptc -= 345;
while(*ptc) {
(*ptc) -= 1;
ptc += 343;
(*ptc) += 1;
ptc -= 343;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 343;
(*ptc) += 1;
ptc -= 343;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 343;
(*ptc) += 1;
ptc -= 343;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 348;
while(*ptc) {
(*ptc) -= 1;
ptc -= 354;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 346;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 354;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 346;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 354;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 346;
}
ptc -= 348;
while(*ptc) {
(*ptc) -= 1;
ptc += 346;
(*ptc) += 1;
ptc -= 346;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 346;
(*ptc) += 1;
ptc -= 346;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 346;
(*ptc) += 1;
ptc -= 346;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 351;
while(*ptc) {
(*ptc) -= 1;
ptc -= 357;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 349;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 357;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 349;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 357;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 349;
}
ptc -= 351;
while(*ptc) {
(*ptc) -= 1;
ptc += 349;
(*ptc) += 1;
ptc -= 349;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 349;
(*ptc) += 1;
ptc -= 349;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 349;
(*ptc) += 1;
ptc -= 349;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 354;
while(*ptc) {
(*ptc) -= 1;
ptc -= 360;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 352;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 360;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 352;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 360;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 352;
}
ptc -= 354;
while(*ptc) {
(*ptc) -= 1;
ptc += 352;
(*ptc) += 1;
ptc -= 352;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 352;
(*ptc) += 1;
ptc -= 352;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 352;
(*ptc) += 1;
ptc -= 352;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 357;
while(*ptc) {
(*ptc) -= 1;
ptc -= 363;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 355;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 363;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 355;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 363;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 355;
}
ptc -= 357;
while(*ptc) {
(*ptc) -= 1;
ptc += 355;
(*ptc) += 1;
ptc -= 355;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 355;
(*ptc) += 1;
ptc -= 355;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 355;
(*ptc) += 1;
ptc -= 355;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 360;
while(*ptc) {
(*ptc) -= 1;
ptc -= 366;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 358;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 366;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 358;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 366;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 358;
}
ptc -= 360;
while(*ptc) {
(*ptc) -= 1;
ptc += 358;
(*ptc) += 1;
ptc -= 358;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 358;
(*ptc) += 1;
ptc -= 358;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 358;
(*ptc) += 1;
ptc -= 358;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 363;
while(*ptc) {
(*ptc) -= 1;
ptc -= 369;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 361;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 369;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 361;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 369;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 361;
}
ptc -= 363;
while(*ptc) {
(*ptc) -= 1;
ptc += 361;
(*ptc) += 1;
ptc -= 361;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 361;
(*ptc) += 1;
ptc -= 361;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 361;
(*ptc) += 1;
ptc -= 361;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 366;
while(*ptc) {
(*ptc) -= 1;
ptc -= 372;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 364;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 372;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 364;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 372;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 364;
}
ptc -= 366;
while(*ptc) {
(*ptc) -= 1;
ptc += 364;
(*ptc) += 1;
ptc -= 364;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 364;
(*ptc) += 1;
ptc -= 364;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 364;
(*ptc) += 1;
ptc -= 364;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 369;
while(*ptc) {
(*ptc) -= 1;
ptc -= 375;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 367;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 375;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 367;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 375;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 367;
}
ptc -= 369;
while(*ptc) {
(*ptc) -= 1;
ptc += 367;
(*ptc) += 1;
ptc -= 367;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 367;
(*ptc) += 1;
ptc -= 367;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 367;
(*ptc) += 1;
ptc -= 367;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 372;
while(*ptc) {
(*ptc) -= 1;
ptc -= 378;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 370;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 378;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 370;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 378;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 370;
}
ptc -= 372;
while(*ptc) {
(*ptc) -= 1;
ptc += 370;
(*ptc) += 1;
ptc -= 370;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 370;
(*ptc) += 1;
ptc -= 370;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 370;
(*ptc) += 1;
ptc -= 370;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 375;
while(*ptc) {
(*ptc) -= 1;
ptc -= 381;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 373;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 381;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 373;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 381;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 373;
}
ptc -= 375;
while(*ptc) {
(*ptc) -= 1;
ptc += 373;
(*ptc) += 1;
ptc -= 373;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 373;
(*ptc) += 1;
ptc -= 373;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 373;
(*ptc) += 1;
ptc -= 373;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 378;
while(*ptc) {
(*ptc) -= 1;
ptc -= 384;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 376;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 384;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 376;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 384;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 376;
}
ptc -= 378;
while(*ptc) {
(*ptc) -= 1;
ptc += 376;
(*ptc) += 1;
ptc -= 376;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 376;
(*ptc) += 1;
ptc -= 376;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 376;
(*ptc) += 1;
ptc -= 376;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 381;
while(*ptc) {
(*ptc) -= 1;
ptc -= 387;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 379;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 387;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 379;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 387;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 379;
}
ptc -= 381;
while(*ptc) {
(*ptc) -= 1;
ptc += 379;
(*ptc) += 1;
ptc -= 379;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 379;
(*ptc) += 1;
ptc -= 379;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 379;
(*ptc) += 1;
ptc -= 379;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 384;
while(*ptc) {
(*ptc) -= 1;
ptc -= 390;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 382;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 390;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 382;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 390;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 382;
}
ptc -= 384;
while(*ptc) {
(*ptc) -= 1;
ptc += 382;
(*ptc) += 1;
ptc -= 382;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 382;
(*ptc) += 1;
ptc -= 382;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 382;
(*ptc) += 1;
ptc -= 382;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 387;
while(*ptc) {
(*ptc) -= 1;
ptc -= 393;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 385;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 393;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 385;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 393;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 385;
}
ptc -= 387;
while(*ptc) {
(*ptc) -= 1;
ptc += 385;
(*ptc) += 1;
ptc -= 385;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 385;
(*ptc) += 1;
ptc -= 385;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 385;
(*ptc) += 1;
ptc -= 385;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 390;
while(*ptc) {
(*ptc) -= 1;
ptc -= 396;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 388;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 396;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 388;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 396;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 388;
}
ptc -= 390;
while(*ptc) {
(*ptc) -= 1;
ptc += 388;
(*ptc) += 1;
ptc -= 388;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 388;
(*ptc) += 1;
ptc -= 388;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 388;
(*ptc) += 1;
ptc -= 388;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 393;
while(*ptc) {
(*ptc) -= 1;
ptc -= 399;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 391;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 399;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 391;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 399;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 391;
}
ptc -= 393;
while(*ptc) {
(*ptc) -= 1;
ptc += 391;
(*ptc) += 1;
ptc -= 391;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 391;
(*ptc) += 1;
ptc -= 391;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 391;
(*ptc) += 1;
ptc -= 391;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 396;
while(*ptc) {
(*ptc) -= 1;
ptc -= 402;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 394;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 402;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 394;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 402;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 394;
}
ptc -= 396;
while(*ptc) {
(*ptc) -= 1;
ptc += 394;
(*ptc) += 1;
ptc -= 394;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 394;
(*ptc) += 1;
ptc -= 394;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 394;
(*ptc) += 1;
ptc -= 394;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 399;
while(*ptc) {
(*ptc) -= 1;
ptc -= 405;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 397;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 405;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 397;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 405;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 397;
}
ptc -= 399;
while(*ptc) {
(*ptc) -= 1;
ptc += 397;
(*ptc) += 1;
ptc -= 397;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 397;
(*ptc) += 1;
ptc -= 397;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 397;
(*ptc) += 1;
ptc -= 397;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 402;
while(*ptc) {
(*ptc) -= 1;
ptc -= 408;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 400;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 408;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 400;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 408;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 400;
}
ptc -= 402;
while(*ptc) {
(*ptc) -= 1;
ptc += 400;
(*ptc) += 1;
ptc -= 400;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 400;
(*ptc) += 1;
ptc -= 400;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 400;
(*ptc) += 1;
ptc -= 400;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 405;
while(*ptc) {
(*ptc) -= 1;
ptc -= 411;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 403;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 411;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 403;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 411;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 403;
}
ptc -= 405;
while(*ptc) {
(*ptc) -= 1;
ptc += 403;
(*ptc) += 1;
ptc -= 403;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 403;
(*ptc) += 1;
ptc -= 403;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 403;
(*ptc) += 1;
ptc -= 403;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 408;
while(*ptc) {
(*ptc) -= 1;
ptc -= 414;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 406;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 414;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 406;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 414;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 406;
}
ptc -= 408;
while(*ptc) {
(*ptc) -= 1;
ptc += 406;
(*ptc) += 1;
ptc -= 406;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 406;
(*ptc) += 1;
ptc -= 406;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 406;
(*ptc) += 1;
ptc -= 406;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 411;
while(*ptc) {
(*ptc) -= 1;
ptc -= 417;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 409;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 417;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 409;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 417;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 409;
}
ptc -= 411;
while(*ptc) {
(*ptc) -= 1;
ptc += 409;
(*ptc) += 1;
ptc -= 409;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 409;
(*ptc) += 1;
ptc -= 409;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 409;
(*ptc) += 1;
ptc -= 409;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 414;
while(*ptc) {
(*ptc) -= 1;
ptc -= 420;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 412;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 420;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 412;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 420;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 412;
}
ptc -= 414;
while(*ptc) {
(*ptc) -= 1;
ptc += 412;
(*ptc) += 1;
ptc -= 412;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 412;
(*ptc) += 1;
ptc -= 412;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 412;
(*ptc) += 1;
ptc -= 412;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 417;
while(*ptc) {
(*ptc) -= 1;
ptc -= 423;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 415;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 423;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 415;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 423;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 415;
}
ptc -= 417;
while(*ptc) {
(*ptc) -= 1;
ptc += 415;
(*ptc) += 1;
ptc -= 415;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 415;
(*ptc) += 1;
ptc -= 415;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 415;
(*ptc) += 1;
ptc -= 415;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 420;
while(*ptc) {
(*ptc) -= 1;
ptc -= 426;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 418;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 426;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 418;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 426;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 418;
}
ptc -= 420;
while(*ptc) {
(*ptc) -= 1;
ptc += 418;
(*ptc) += 1;
ptc -= 418;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 418;
(*ptc) += 1;
ptc -= 418;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 418;
(*ptc) += 1;
ptc -= 418;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 423;
while(*ptc) {
(*ptc) -= 1;
ptc -= 429;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 421;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 429;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 421;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 429;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 421;
}
ptc -= 423;
while(*ptc) {
(*ptc) -= 1;
ptc += 421;
(*ptc) += 1;
ptc -= 421;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 421;
(*ptc) += 1;
ptc -= 421;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 421;
(*ptc) += 1;
ptc -= 421;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 426;
while(*ptc) {
(*ptc) -= 1;
ptc -= 432;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 424;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 432;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 424;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 432;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 424;
}
ptc -= 426;
while(*ptc) {
(*ptc) -= 1;
ptc += 424;
(*ptc) += 1;
ptc -= 424;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 424;
(*ptc) += 1;
ptc -= 424;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 424;
(*ptc) += 1;
ptc -= 424;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 429;
while(*ptc) {
(*ptc) -= 1;
ptc -= 435;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 427;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 435;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 427;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 435;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 427;
}
ptc -= 429;
while(*ptc) {
(*ptc) -= 1;
ptc += 427;
(*ptc) += 1;
ptc -= 427;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 427;
(*ptc) += 1;
ptc -= 427;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 427;
(*ptc) += 1;
ptc -= 427;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 432;
while(*ptc) {
(*ptc) -= 1;
ptc -= 438;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 430;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 438;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 430;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 438;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 430;
}
ptc -= 432;
while(*ptc) {
(*ptc) -= 1;
ptc += 430;
(*ptc) += 1;
ptc -= 430;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 430;
(*ptc) += 1;
ptc -= 430;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 430;
(*ptc) += 1;
ptc -= 430;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 435;
while(*ptc) {
(*ptc) -= 1;
ptc -= 441;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 433;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 441;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 433;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 441;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 433;
}
ptc -= 435;
while(*ptc) {
(*ptc) -= 1;
ptc += 433;
(*ptc) += 1;
ptc -= 433;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 433;
(*ptc) += 1;
ptc -= 433;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 433;
(*ptc) += 1;
ptc -= 433;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 438;
while(*ptc) {
(*ptc) -= 1;
ptc -= 444;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 436;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 444;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 436;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 444;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 436;
}
ptc -= 438;
while(*ptc) {
(*ptc) -= 1;
ptc += 436;
(*ptc) += 1;
ptc -= 436;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 436;
(*ptc) += 1;
ptc -= 436;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 436;
(*ptc) += 1;
ptc -= 436;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 441;
while(*ptc) {
(*ptc) -= 1;
ptc -= 447;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 439;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 447;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 439;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 447;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 439;
}
ptc -= 441;
while(*ptc) {
(*ptc) -= 1;
ptc += 439;
(*ptc) += 1;
ptc -= 439;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 439;
(*ptc) += 1;
ptc -= 439;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 439;
(*ptc) += 1;
ptc -= 439;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 444;
while(*ptc) {
(*ptc) -= 1;
ptc -= 450;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 442;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 450;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 442;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 450;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 442;
}
ptc -= 444;
while(*ptc) {
(*ptc) -= 1;
ptc += 442;
(*ptc) += 1;
ptc -= 442;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 442;
(*ptc) += 1;
ptc -= 442;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 442;
(*ptc) += 1;
ptc -= 442;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 447;
while(*ptc) {
(*ptc) -= 1;
ptc -= 453;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 445;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 453;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 445;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 453;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 445;
}
ptc -= 447;
while(*ptc) {
(*ptc) -= 1;
ptc += 445;
(*ptc) += 1;
ptc -= 445;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 445;
(*ptc) += 1;
ptc -= 445;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 445;
(*ptc) += 1;
ptc -= 445;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 450;
while(*ptc) {
(*ptc) -= 1;
ptc -= 456;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 448;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 456;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 448;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 456;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 448;
}
ptc -= 450;
while(*ptc) {
(*ptc) -= 1;
ptc += 448;
(*ptc) += 1;
ptc -= 448;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 448;
(*ptc) += 1;
ptc -= 448;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 448;
(*ptc) += 1;
ptc -= 448;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 453;
while(*ptc) {
(*ptc) -= 1;
ptc -= 459;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 451;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 459;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 451;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 459;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 451;
}
ptc -= 453;
while(*ptc) {
(*ptc) -= 1;
ptc += 451;
(*ptc) += 1;
ptc -= 451;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 451;
(*ptc) += 1;
ptc -= 451;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 451;
(*ptc) += 1;
ptc -= 451;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 456;
while(*ptc) {
(*ptc) -= 1;
ptc -= 462;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 454;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 462;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 454;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 462;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 454;
}
ptc -= 456;
while(*ptc) {
(*ptc) -= 1;
ptc += 454;
(*ptc) += 1;
ptc -= 454;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 454;
(*ptc) += 1;
ptc -= 454;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 454;
(*ptc) += 1;
ptc -= 454;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 459;
while(*ptc) {
(*ptc) -= 1;
ptc -= 465;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 457;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 465;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 457;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 465;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 457;
}
ptc -= 459;
while(*ptc) {
(*ptc) -= 1;
ptc += 457;
(*ptc) += 1;
ptc -= 457;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 457;
(*ptc) += 1;
ptc -= 457;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 457;
(*ptc) += 1;
ptc -= 457;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 462;
while(*ptc) {
(*ptc) -= 1;
ptc -= 468;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 460;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 468;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 460;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 468;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 460;
}
ptc -= 462;
while(*ptc) {
(*ptc) -= 1;
ptc += 460;
(*ptc) += 1;
ptc -= 460;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 460;
(*ptc) += 1;
ptc -= 460;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 460;
(*ptc) += 1;
ptc -= 460;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 465;
while(*ptc) {
(*ptc) -= 1;
ptc -= 471;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 463;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 471;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 463;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 471;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 463;
}
ptc -= 465;
while(*ptc) {
(*ptc) -= 1;
ptc += 463;
(*ptc) += 1;
ptc -= 463;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 463;
(*ptc) += 1;
ptc -= 463;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 463;
(*ptc) += 1;
ptc -= 463;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 468;
while(*ptc) {
(*ptc) -= 1;
ptc -= 474;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 466;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 474;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 466;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 474;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 466;
}
ptc -= 468;
while(*ptc) {
(*ptc) -= 1;
ptc += 466;
(*ptc) += 1;
ptc -= 466;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 466;
(*ptc) += 1;
ptc -= 466;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 466;
(*ptc) += 1;
ptc -= 466;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 471;
while(*ptc) {
(*ptc) -= 1;
ptc -= 477;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 469;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 477;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 469;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 477;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 469;
}
ptc -= 471;
while(*ptc) {
(*ptc) -= 1;
ptc += 469;
(*ptc) += 1;
ptc -= 469;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 469;
(*ptc) += 1;
ptc -= 469;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 469;
(*ptc) += 1;
ptc -= 469;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 474;
while(*ptc) {
(*ptc) -= 1;
ptc -= 480;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 472;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 480;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 472;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 480;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 472;
}
ptc -= 474;
while(*ptc) {
(*ptc) -= 1;
ptc += 472;
(*ptc) += 1;
ptc -= 472;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 472;
(*ptc) += 1;
ptc -= 472;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 472;
(*ptc) += 1;
ptc -= 472;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 477;
while(*ptc) {
(*ptc) -= 1;
ptc -= 483;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 475;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 483;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 475;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 483;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 475;
}
ptc -= 477;
while(*ptc) {
(*ptc) -= 1;
ptc += 475;
(*ptc) += 1;
ptc -= 475;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 475;
(*ptc) += 1;
ptc -= 475;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 475;
(*ptc) += 1;
ptc -= 475;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 480;
while(*ptc) {
(*ptc) -= 1;
ptc -= 486;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 478;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 486;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 478;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 486;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 478;
}
ptc -= 480;
while(*ptc) {
(*ptc) -= 1;
ptc += 478;
(*ptc) += 1;
ptc -= 478;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 478;
(*ptc) += 1;
ptc -= 478;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 478;
(*ptc) += 1;
ptc -= 478;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 483;
while(*ptc) {
(*ptc) -= 1;
ptc -= 489;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 481;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 489;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 481;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 489;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 481;
}
ptc -= 483;
while(*ptc) {
(*ptc) -= 1;
ptc += 481;
(*ptc) += 1;
ptc -= 481;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 481;
(*ptc) += 1;
ptc -= 481;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 481;
(*ptc) += 1;
ptc -= 481;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 486;
while(*ptc) {
(*ptc) -= 1;
ptc -= 492;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 484;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 492;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 484;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 492;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 484;
}
ptc -= 486;
while(*ptc) {
(*ptc) -= 1;
ptc += 484;
(*ptc) += 1;
ptc -= 484;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 484;
(*ptc) += 1;
ptc -= 484;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 484;
(*ptc) += 1;
ptc -= 484;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 489;
while(*ptc) {
(*ptc) -= 1;
ptc -= 495;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 487;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 495;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 487;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 495;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 487;
}
ptc -= 489;
while(*ptc) {
(*ptc) -= 1;
ptc += 487;
(*ptc) += 1;
ptc -= 487;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 487;
(*ptc) += 1;
ptc -= 487;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 487;
(*ptc) += 1;
ptc -= 487;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 492;
while(*ptc) {
(*ptc) -= 1;
ptc -= 498;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 490;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 498;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 490;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 498;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 490;
}
ptc -= 492;
while(*ptc) {
(*ptc) -= 1;
ptc += 490;
(*ptc) += 1;
ptc -= 490;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 490;
(*ptc) += 1;
ptc -= 490;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 490;
(*ptc) += 1;
ptc -= 490;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 495;
while(*ptc) {
(*ptc) -= 1;
ptc -= 501;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 493;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 501;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 493;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 501;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 493;
}
ptc -= 495;
while(*ptc) {
(*ptc) -= 1;
ptc += 493;
(*ptc) += 1;
ptc -= 493;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 493;
(*ptc) += 1;
ptc -= 493;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 493;
(*ptc) += 1;
ptc -= 493;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 498;
while(*ptc) {
(*ptc) -= 1;
ptc -= 504;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 496;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 504;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 496;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 504;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 496;
}
ptc -= 498;
while(*ptc) {
(*ptc) -= 1;
ptc += 496;
(*ptc) += 1;
ptc -= 496;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 496;
(*ptc) += 1;
ptc -= 496;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 496;
(*ptc) += 1;
ptc -= 496;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 501;
while(*ptc) {
(*ptc) -= 1;
ptc -= 507;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 499;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 507;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 499;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 507;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 499;
}
ptc -= 501;
while(*ptc) {
(*ptc) -= 1;
ptc += 499;
(*ptc) += 1;
ptc -= 499;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 499;
(*ptc) += 1;
ptc -= 499;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 499;
(*ptc) += 1;
ptc -= 499;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 504;
while(*ptc) {
(*ptc) -= 1;
ptc -= 510;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 502;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 510;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 502;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 510;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 502;
}
ptc -= 504;
while(*ptc) {
(*ptc) -= 1;
ptc += 502;
(*ptc) += 1;
ptc -= 502;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 502;
(*ptc) += 1;
ptc -= 502;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 502;
(*ptc) += 1;
ptc -= 502;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 507;
while(*ptc) {
(*ptc) -= 1;
ptc -= 513;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 505;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 513;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 505;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 513;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 505;
}
ptc -= 507;
while(*ptc) {
(*ptc) -= 1;
ptc += 505;
(*ptc) += 1;
ptc -= 505;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 505;
(*ptc) += 1;
ptc -= 505;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 505;
(*ptc) += 1;
ptc -= 505;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 510;
while(*ptc) {
(*ptc) -= 1;
ptc -= 516;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 508;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 516;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 508;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 516;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 508;
}
ptc -= 510;
while(*ptc) {
(*ptc) -= 1;
ptc += 508;
(*ptc) += 1;
ptc -= 508;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 508;
(*ptc) += 1;
ptc -= 508;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 508;
(*ptc) += 1;
ptc -= 508;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 513;
while(*ptc) {
(*ptc) -= 1;
ptc -= 519;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 511;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 519;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 511;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 519;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 511;
}
ptc -= 513;
while(*ptc) {
(*ptc) -= 1;
ptc += 511;
(*ptc) += 1;
ptc -= 511;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 511;
(*ptc) += 1;
ptc -= 511;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 511;
(*ptc) += 1;
ptc -= 511;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 516;
while(*ptc) {
(*ptc) -= 1;
ptc -= 522;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 514;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 522;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 514;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 522;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 514;
}
ptc -= 516;
while(*ptc) {
(*ptc) -= 1;
ptc += 514;
(*ptc) += 1;
ptc -= 514;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 514;
(*ptc) += 1;
ptc -= 514;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 514;
(*ptc) += 1;
ptc -= 514;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 519;
while(*ptc) {
(*ptc) -= 1;
ptc -= 525;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 517;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 525;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 517;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 525;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 517;
}
ptc -= 519;
while(*ptc) {
(*ptc) -= 1;
ptc += 517;
(*ptc) += 1;
ptc -= 517;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 517;
(*ptc) += 1;
ptc -= 517;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 517;
(*ptc) += 1;
ptc -= 517;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 522;
while(*ptc) {
(*ptc) -= 1;
ptc -= 528;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 520;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 528;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 520;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 528;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 520;
}
ptc -= 522;
while(*ptc) {
(*ptc) -= 1;
ptc += 520;
(*ptc) += 1;
ptc -= 520;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 520;
(*ptc) += 1;
ptc -= 520;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 520;
(*ptc) += 1;
ptc -= 520;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 525;
while(*ptc) {
(*ptc) -= 1;
ptc -= 531;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 523;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 531;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 523;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 531;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 523;
}
ptc -= 525;
while(*ptc) {
(*ptc) -= 1;
ptc += 523;
(*ptc) += 1;
ptc -= 523;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 523;
(*ptc) += 1;
ptc -= 523;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 523;
(*ptc) += 1;
ptc -= 523;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 528;
while(*ptc) {
(*ptc) -= 1;
ptc -= 534;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 526;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 534;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 526;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 534;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 526;
}
ptc -= 528;
while(*ptc) {
(*ptc) -= 1;
ptc += 526;
(*ptc) += 1;
ptc -= 526;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 526;
(*ptc) += 1;
ptc -= 526;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 526;
(*ptc) += 1;
ptc -= 526;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 531;
while(*ptc) {
(*ptc) -= 1;
ptc -= 537;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 529;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 537;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 529;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 537;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 529;
}
ptc -= 531;
while(*ptc) {
(*ptc) -= 1;
ptc += 529;
(*ptc) += 1;
ptc -= 529;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 529;
(*ptc) += 1;
ptc -= 529;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 529;
(*ptc) += 1;
ptc -= 529;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 534;
while(*ptc) {
(*ptc) -= 1;
ptc -= 540;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 532;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 540;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 532;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 540;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 532;
}
ptc -= 534;
while(*ptc) {
(*ptc) -= 1;
ptc += 532;
(*ptc) += 1;
ptc -= 532;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 532;
(*ptc) += 1;
ptc -= 532;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 532;
(*ptc) += 1;
ptc -= 532;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 537;
while(*ptc) {
(*ptc) -= 1;
ptc -= 543;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 535;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 543;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 535;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 543;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 535;
}
ptc -= 537;
while(*ptc) {
(*ptc) -= 1;
ptc += 535;
(*ptc) += 1;
ptc -= 535;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 535;
(*ptc) += 1;
ptc -= 535;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 535;
(*ptc) += 1;
ptc -= 535;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 540;
while(*ptc) {
(*ptc) -= 1;
ptc -= 546;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 538;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 546;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 538;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 546;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 538;
}
ptc -= 540;
while(*ptc) {
(*ptc) -= 1;
ptc += 538;
(*ptc) += 1;
ptc -= 538;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 538;
(*ptc) += 1;
ptc -= 538;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 538;
(*ptc) += 1;
ptc -= 538;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 543;
while(*ptc) {
(*ptc) -= 1;
ptc -= 549;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 541;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 549;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 541;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 549;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 541;
}
ptc -= 543;
while(*ptc) {
(*ptc) -= 1;
ptc += 541;
(*ptc) += 1;
ptc -= 541;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 541;
(*ptc) += 1;
ptc -= 541;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 541;
(*ptc) += 1;
ptc -= 541;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 546;
while(*ptc) {
(*ptc) -= 1;
ptc -= 552;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 544;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 552;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 544;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 552;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 544;
}
ptc -= 546;
while(*ptc) {
(*ptc) -= 1;
ptc += 544;
(*ptc) += 1;
ptc -= 544;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 544;
(*ptc) += 1;
ptc -= 544;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 544;
(*ptc) += 1;
ptc -= 544;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 549;
while(*ptc) {
(*ptc) -= 1;
ptc -= 555;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 547;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 555;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 547;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 555;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 547;
}
ptc -= 549;
while(*ptc) {
(*ptc) -= 1;
ptc += 547;
(*ptc) += 1;
ptc -= 547;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 547;
(*ptc) += 1;
ptc -= 547;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 547;
(*ptc) += 1;
ptc -= 547;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 552;
while(*ptc) {
(*ptc) -= 1;
ptc -= 558;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 550;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 558;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 550;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 558;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 550;
}
ptc -= 552;
while(*ptc) {
(*ptc) -= 1;
ptc += 550;
(*ptc) += 1;
ptc -= 550;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 550;
(*ptc) += 1;
ptc -= 550;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 550;
(*ptc) += 1;
ptc -= 550;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 555;
while(*ptc) {
(*ptc) -= 1;
ptc -= 561;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 553;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 561;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 553;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 561;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 553;
}
ptc -= 555;
while(*ptc) {
(*ptc) -= 1;
ptc += 553;
(*ptc) += 1;
ptc -= 553;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 553;
(*ptc) += 1;
ptc -= 553;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 553;
(*ptc) += 1;
ptc -= 553;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 558;
while(*ptc) {
(*ptc) -= 1;
ptc -= 564;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 556;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 564;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 556;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 564;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 556;
}
ptc -= 558;
while(*ptc) {
(*ptc) -= 1;
ptc += 556;
(*ptc) += 1;
ptc -= 556;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 556;
(*ptc) += 1;
ptc -= 556;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 556;
(*ptc) += 1;
ptc -= 556;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 561;
while(*ptc) {
(*ptc) -= 1;
ptc -= 567;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 559;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 567;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 559;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 567;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 559;
}
ptc -= 561;
while(*ptc) {
(*ptc) -= 1;
ptc += 559;
(*ptc) += 1;
ptc -= 559;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 559;
(*ptc) += 1;
ptc -= 559;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 559;
(*ptc) += 1;
ptc -= 559;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 564;
while(*ptc) {
(*ptc) -= 1;
ptc -= 570;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 562;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 570;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 562;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 570;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 562;
}
ptc -= 564;
while(*ptc) {
(*ptc) -= 1;
ptc += 562;
(*ptc) += 1;
ptc -= 562;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 562;
(*ptc) += 1;
ptc -= 562;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 562;
(*ptc) += 1;
ptc -= 562;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 567;
while(*ptc) {
(*ptc) -= 1;
ptc -= 573;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 565;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 573;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 565;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 573;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 565;
}
ptc -= 567;
while(*ptc) {
(*ptc) -= 1;
ptc += 565;
(*ptc) += 1;
ptc -= 565;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 565;
(*ptc) += 1;
ptc -= 565;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 565;
(*ptc) += 1;
ptc -= 565;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 570;
while(*ptc) {
(*ptc) -= 1;
ptc -= 576;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 568;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 576;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 568;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 576;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 568;
}
ptc -= 570;
while(*ptc) {
(*ptc) -= 1;
ptc += 568;
(*ptc) += 1;
ptc -= 568;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 568;
(*ptc) += 1;
ptc -= 568;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 568;
(*ptc) += 1;
ptc -= 568;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 573;
while(*ptc) {
(*ptc) -= 1;
ptc -= 579;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 571;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 579;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 571;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 579;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 571;
}
ptc -= 573;
while(*ptc) {
(*ptc) -= 1;
ptc += 571;
(*ptc) += 1;
ptc -= 571;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 571;
(*ptc) += 1;
ptc -= 571;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 571;
(*ptc) += 1;
ptc -= 571;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 576;
while(*ptc) {
(*ptc) -= 1;
ptc -= 582;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 574;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 582;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 574;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 582;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 574;
}
ptc -= 576;
while(*ptc) {
(*ptc) -= 1;
ptc += 574;
(*ptc) += 1;
ptc -= 574;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 574;
(*ptc) += 1;
ptc -= 574;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 574;
(*ptc) += 1;
ptc -= 574;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 579;
while(*ptc) {
(*ptc) -= 1;
ptc -= 585;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 577;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 585;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 577;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 585;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 577;
}
ptc -= 579;
while(*ptc) {
(*ptc) -= 1;
ptc += 577;
(*ptc) += 1;
ptc -= 577;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 577;
(*ptc) += 1;
ptc -= 577;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 577;
(*ptc) += 1;
ptc -= 577;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 582;
while(*ptc) {
(*ptc) -= 1;
ptc -= 588;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 580;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 588;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 580;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 588;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 580;
}
ptc -= 582;
while(*ptc) {
(*ptc) -= 1;
ptc += 580;
(*ptc) += 1;
ptc -= 580;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 580;
(*ptc) += 1;
ptc -= 580;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 580;
(*ptc) += 1;
ptc -= 580;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 585;
while(*ptc) {
(*ptc) -= 1;
ptc -= 591;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 583;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 591;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 583;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 591;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 583;
}
ptc -= 585;
while(*ptc) {
(*ptc) -= 1;
ptc += 583;
(*ptc) += 1;
ptc -= 583;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 583;
(*ptc) += 1;
ptc -= 583;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 583;
(*ptc) += 1;
ptc -= 583;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 588;
while(*ptc) {
(*ptc) -= 1;
ptc -= 594;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 586;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 594;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 586;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 594;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 586;
}
ptc -= 588;
while(*ptc) {
(*ptc) -= 1;
ptc += 586;
(*ptc) += 1;
ptc -= 586;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 586;
(*ptc) += 1;
ptc -= 586;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 586;
(*ptc) += 1;
ptc -= 586;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 591;
while(*ptc) {
(*ptc) -= 1;
ptc -= 597;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 589;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 597;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 589;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 597;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 589;
}
ptc -= 591;
while(*ptc) {
(*ptc) -= 1;
ptc += 589;
(*ptc) += 1;
ptc -= 589;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 589;
(*ptc) += 1;
ptc -= 589;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 589;
(*ptc) += 1;
ptc -= 589;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 594;
while(*ptc) {
(*ptc) -= 1;
ptc -= 600;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 592;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 600;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 592;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 600;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 592;
}
ptc -= 594;
while(*ptc) {
(*ptc) -= 1;
ptc += 592;
(*ptc) += 1;
ptc -= 592;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 592;
(*ptc) += 1;
ptc -= 592;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 592;
(*ptc) += 1;
ptc -= 592;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 597;
while(*ptc) {
(*ptc) -= 1;
ptc -= 603;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 595;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 603;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 595;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 603;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 595;
}
ptc -= 597;
while(*ptc) {
(*ptc) -= 1;
ptc += 595;
(*ptc) += 1;
ptc -= 595;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 595;
(*ptc) += 1;
ptc -= 595;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 595;
(*ptc) += 1;
ptc -= 595;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 600;
while(*ptc) {
(*ptc) -= 1;
ptc -= 606;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 598;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 606;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 598;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 606;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 598;
}
ptc -= 600;
while(*ptc) {
(*ptc) -= 1;
ptc += 598;
(*ptc) += 1;
ptc -= 598;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 598;
(*ptc) += 1;
ptc -= 598;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 598;
(*ptc) += 1;
ptc -= 598;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 603;
while(*ptc) {
(*ptc) -= 1;
ptc -= 609;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 601;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 609;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 601;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 609;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 601;
}
ptc -= 603;
while(*ptc) {
(*ptc) -= 1;
ptc += 601;
(*ptc) += 1;
ptc -= 601;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 601;
(*ptc) += 1;
ptc -= 601;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 601;
(*ptc) += 1;
ptc -= 601;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 606;
while(*ptc) {
(*ptc) -= 1;
ptc -= 612;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 604;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 612;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 604;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 612;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 604;
}
ptc -= 606;
while(*ptc) {
(*ptc) -= 1;
ptc += 604;
(*ptc) += 1;
ptc -= 604;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 604;
(*ptc) += 1;
ptc -= 604;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 604;
(*ptc) += 1;
ptc -= 604;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 609;
while(*ptc) {
(*ptc) -= 1;
ptc -= 615;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 607;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 615;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 607;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 615;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 607;
}
ptc -= 609;
while(*ptc) {
(*ptc) -= 1;
ptc += 607;
(*ptc) += 1;
ptc -= 607;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 607;
(*ptc) += 1;
ptc -= 607;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 607;
(*ptc) += 1;
ptc -= 607;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 612;
while(*ptc) {
(*ptc) -= 1;
ptc -= 618;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 610;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 618;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 610;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 618;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 610;
}
ptc -= 612;
while(*ptc) {
(*ptc) -= 1;
ptc += 610;
(*ptc) += 1;
ptc -= 610;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 610;
(*ptc) += 1;
ptc -= 610;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 610;
(*ptc) += 1;
ptc -= 610;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 615;
while(*ptc) {
(*ptc) -= 1;
ptc -= 621;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 613;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 621;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 613;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 621;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 613;
}
ptc -= 615;
while(*ptc) {
(*ptc) -= 1;
ptc += 613;
(*ptc) += 1;
ptc -= 613;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 613;
(*ptc) += 1;
ptc -= 613;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 613;
(*ptc) += 1;
ptc -= 613;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 618;
while(*ptc) {
(*ptc) -= 1;
ptc -= 624;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 616;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 624;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 616;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 624;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 616;
}
ptc -= 618;
while(*ptc) {
(*ptc) -= 1;
ptc += 616;
(*ptc) += 1;
ptc -= 616;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 616;
(*ptc) += 1;
ptc -= 616;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 616;
(*ptc) += 1;
ptc -= 616;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 621;
while(*ptc) {
(*ptc) -= 1;
ptc -= 627;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 619;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 627;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 619;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 627;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 619;
}
ptc -= 621;
while(*ptc) {
(*ptc) -= 1;
ptc += 619;
(*ptc) += 1;
ptc -= 619;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 619;
(*ptc) += 1;
ptc -= 619;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 619;
(*ptc) += 1;
ptc -= 619;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 624;
while(*ptc) {
(*ptc) -= 1;
ptc -= 630;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 622;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 630;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 622;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 630;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 622;
}
ptc -= 624;
while(*ptc) {
(*ptc) -= 1;
ptc += 622;
(*ptc) += 1;
ptc -= 622;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 622;
(*ptc) += 1;
ptc -= 622;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 622;
(*ptc) += 1;
ptc -= 622;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 627;
while(*ptc) {
(*ptc) -= 1;
ptc -= 633;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 625;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 633;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 625;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 633;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 625;
}
ptc -= 627;
while(*ptc) {
(*ptc) -= 1;
ptc += 625;
(*ptc) += 1;
ptc -= 625;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 625;
(*ptc) += 1;
ptc -= 625;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 625;
(*ptc) += 1;
ptc -= 625;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 630;
while(*ptc) {
(*ptc) -= 1;
ptc -= 636;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 628;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 636;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 628;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 636;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 628;
}
ptc -= 630;
while(*ptc) {
(*ptc) -= 1;
ptc += 628;
(*ptc) += 1;
ptc -= 628;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 628;
(*ptc) += 1;
ptc -= 628;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 628;
(*ptc) += 1;
ptc -= 628;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 633;
while(*ptc) {
(*ptc) -= 1;
ptc -= 639;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 631;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 639;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 631;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 639;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 631;
}
ptc -= 633;
while(*ptc) {
(*ptc) -= 1;
ptc += 631;
(*ptc) += 1;
ptc -= 631;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 631;
(*ptc) += 1;
ptc -= 631;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 631;
(*ptc) += 1;
ptc -= 631;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 636;
while(*ptc) {
(*ptc) -= 1;
ptc -= 642;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 634;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 642;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 634;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 642;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 634;
}
ptc -= 636;
while(*ptc) {
(*ptc) -= 1;
ptc += 634;
(*ptc) += 1;
ptc -= 634;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 634;
(*ptc) += 1;
ptc -= 634;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 634;
(*ptc) += 1;
ptc -= 634;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 639;
while(*ptc) {
(*ptc) -= 1;
ptc -= 645;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 637;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 645;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 637;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 645;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 637;
}
ptc -= 639;
while(*ptc) {
(*ptc) -= 1;
ptc += 637;
(*ptc) += 1;
ptc -= 637;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 637;
(*ptc) += 1;
ptc -= 637;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 637;
(*ptc) += 1;
ptc -= 637;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 642;
while(*ptc) {
(*ptc) -= 1;
ptc -= 648;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 640;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 648;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 640;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 648;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 640;
}
ptc -= 642;
while(*ptc) {
(*ptc) -= 1;
ptc += 640;
(*ptc) += 1;
ptc -= 640;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 640;
(*ptc) += 1;
ptc -= 640;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 640;
(*ptc) += 1;
ptc -= 640;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 645;
while(*ptc) {
(*ptc) -= 1;
ptc -= 651;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 643;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 651;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 643;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 651;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 643;
}
ptc -= 645;
while(*ptc) {
(*ptc) -= 1;
ptc += 643;
(*ptc) += 1;
ptc -= 643;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 643;
(*ptc) += 1;
ptc -= 643;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 643;
(*ptc) += 1;
ptc -= 643;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 648;
while(*ptc) {
(*ptc) -= 1;
ptc -= 654;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 646;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 654;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 646;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 654;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 646;
}
ptc -= 648;
while(*ptc) {
(*ptc) -= 1;
ptc += 646;
(*ptc) += 1;
ptc -= 646;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 646;
(*ptc) += 1;
ptc -= 646;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 646;
(*ptc) += 1;
ptc -= 646;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 651;
while(*ptc) {
(*ptc) -= 1;
ptc -= 657;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 649;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 657;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 649;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 657;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 649;
}
ptc -= 651;
while(*ptc) {
(*ptc) -= 1;
ptc += 649;
(*ptc) += 1;
ptc -= 649;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 649;
(*ptc) += 1;
ptc -= 649;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 649;
(*ptc) += 1;
ptc -= 649;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 654;
while(*ptc) {
(*ptc) -= 1;
ptc -= 660;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 652;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 660;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 652;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 660;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 652;
}
ptc -= 654;
while(*ptc) {
(*ptc) -= 1;
ptc += 652;
(*ptc) += 1;
ptc -= 652;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 652;
(*ptc) += 1;
ptc -= 652;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 652;
(*ptc) += 1;
ptc -= 652;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 657;
while(*ptc) {
(*ptc) -= 1;
ptc -= 663;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 655;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 663;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 655;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 663;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 655;
}
ptc -= 657;
while(*ptc) {
(*ptc) -= 1;
ptc += 655;
(*ptc) += 1;
ptc -= 655;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 655;
(*ptc) += 1;
ptc -= 655;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 655;
(*ptc) += 1;
ptc -= 655;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 660;
while(*ptc) {
(*ptc) -= 1;
ptc -= 666;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 658;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 666;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 658;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 666;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 658;
}
ptc -= 660;
while(*ptc) {
(*ptc) -= 1;
ptc += 658;
(*ptc) += 1;
ptc -= 658;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 658;
(*ptc) += 1;
ptc -= 658;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 658;
(*ptc) += 1;
ptc -= 658;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 663;
while(*ptc) {
(*ptc) -= 1;
ptc -= 669;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 661;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 669;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 661;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 669;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 661;
}
ptc -= 663;
while(*ptc) {
(*ptc) -= 1;
ptc += 661;
(*ptc) += 1;
ptc -= 661;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 661;
(*ptc) += 1;
ptc -= 661;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 661;
(*ptc) += 1;
ptc -= 661;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 666;
while(*ptc) {
(*ptc) -= 1;
ptc -= 672;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 664;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 672;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 664;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 672;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 664;
}
ptc -= 666;
while(*ptc) {
(*ptc) -= 1;
ptc += 664;
(*ptc) += 1;
ptc -= 664;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 664;
(*ptc) += 1;
ptc -= 664;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 664;
(*ptc) += 1;
ptc -= 664;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 669;
while(*ptc) {
(*ptc) -= 1;
ptc -= 675;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 667;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 675;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 667;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 675;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 667;
}
ptc -= 669;
while(*ptc) {
(*ptc) -= 1;
ptc += 667;
(*ptc) += 1;
ptc -= 667;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 667;
(*ptc) += 1;
ptc -= 667;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 667;
(*ptc) += 1;
ptc -= 667;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 672;
while(*ptc) {
(*ptc) -= 1;
ptc -= 678;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 670;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 678;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 670;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 678;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 670;
}
ptc -= 672;
while(*ptc) {
(*ptc) -= 1;
ptc += 670;
(*ptc) += 1;
ptc -= 670;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 670;
(*ptc) += 1;
ptc -= 670;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 670;
(*ptc) += 1;
ptc -= 670;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 675;
while(*ptc) {
(*ptc) -= 1;
ptc -= 681;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 673;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 681;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 673;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 681;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 673;
}
ptc -= 675;
while(*ptc) {
(*ptc) -= 1;
ptc += 673;
(*ptc) += 1;
ptc -= 673;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 673;
(*ptc) += 1;
ptc -= 673;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 673;
(*ptc) += 1;
ptc -= 673;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 678;
while(*ptc) {
(*ptc) -= 1;
ptc -= 684;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 676;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 684;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 676;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 684;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 676;
}
ptc -= 678;
while(*ptc) {
(*ptc) -= 1;
ptc += 676;
(*ptc) += 1;
ptc -= 676;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 676;
(*ptc) += 1;
ptc -= 676;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 676;
(*ptc) += 1;
ptc -= 676;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 681;
while(*ptc) {
(*ptc) -= 1;
ptc -= 687;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 679;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 687;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 679;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 687;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 679;
}
ptc -= 681;
while(*ptc) {
(*ptc) -= 1;
ptc += 679;
(*ptc) += 1;
ptc -= 679;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 679;
(*ptc) += 1;
ptc -= 679;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 679;
(*ptc) += 1;
ptc -= 679;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 684;
while(*ptc) {
(*ptc) -= 1;
ptc -= 690;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 682;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 690;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 682;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 690;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 682;
}
ptc -= 684;
while(*ptc) {
(*ptc) -= 1;
ptc += 682;
(*ptc) += 1;
ptc -= 682;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 682;
(*ptc) += 1;
ptc -= 682;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 682;
(*ptc) += 1;
ptc -= 682;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 687;
while(*ptc) {
(*ptc) -= 1;
ptc -= 693;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 685;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 693;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 685;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 693;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 685;
}
ptc -= 687;
while(*ptc) {
(*ptc) -= 1;
ptc += 685;
(*ptc) += 1;
ptc -= 685;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 685;
(*ptc) += 1;
ptc -= 685;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 685;
(*ptc) += 1;
ptc -= 685;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 690;
while(*ptc) {
(*ptc) -= 1;
ptc -= 696;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 688;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 696;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 688;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 696;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 688;
}
ptc -= 690;
while(*ptc) {
(*ptc) -= 1;
ptc += 688;
(*ptc) += 1;
ptc -= 688;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 688;
(*ptc) += 1;
ptc -= 688;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 688;
(*ptc) += 1;
ptc -= 688;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 693;
while(*ptc) {
(*ptc) -= 1;
ptc -= 699;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 691;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 699;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 691;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 699;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 691;
}
ptc -= 693;
while(*ptc) {
(*ptc) -= 1;
ptc += 691;
(*ptc) += 1;
ptc -= 691;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 691;
(*ptc) += 1;
ptc -= 691;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 691;
(*ptc) += 1;
ptc -= 691;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 696;
while(*ptc) {
(*ptc) -= 1;
ptc -= 702;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 694;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 702;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 694;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 702;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 694;
}
ptc -= 696;
while(*ptc) {
(*ptc) -= 1;
ptc += 694;
(*ptc) += 1;
ptc -= 694;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 694;
(*ptc) += 1;
ptc -= 694;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 694;
(*ptc) += 1;
ptc -= 694;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 699;
while(*ptc) {
(*ptc) -= 1;
ptc -= 705;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 697;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 705;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 697;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 705;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 697;
}
ptc -= 699;
while(*ptc) {
(*ptc) -= 1;
ptc += 697;
(*ptc) += 1;
ptc -= 697;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 697;
(*ptc) += 1;
ptc -= 697;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 697;
(*ptc) += 1;
ptc -= 697;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 702;
while(*ptc) {
(*ptc) -= 1;
ptc -= 708;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 700;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 708;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 700;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 708;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 700;
}
ptc -= 702;
while(*ptc) {
(*ptc) -= 1;
ptc += 700;
(*ptc) += 1;
ptc -= 700;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 700;
(*ptc) += 1;
ptc -= 700;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 700;
(*ptc) += 1;
ptc -= 700;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 705;
while(*ptc) {
(*ptc) -= 1;
ptc -= 711;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 703;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 711;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 703;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 711;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 703;
}
ptc -= 705;
while(*ptc) {
(*ptc) -= 1;
ptc += 703;
(*ptc) += 1;
ptc -= 703;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 703;
(*ptc) += 1;
ptc -= 703;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 703;
(*ptc) += 1;
ptc -= 703;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 708;
while(*ptc) {
(*ptc) -= 1;
ptc -= 714;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 706;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 714;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 706;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 714;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 706;
}
ptc -= 708;
while(*ptc) {
(*ptc) -= 1;
ptc += 706;
(*ptc) += 1;
ptc -= 706;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 706;
(*ptc) += 1;
ptc -= 706;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 706;
(*ptc) += 1;
ptc -= 706;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 711;
while(*ptc) {
(*ptc) -= 1;
ptc -= 717;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 709;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 717;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 709;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 717;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 709;
}
ptc -= 711;
while(*ptc) {
(*ptc) -= 1;
ptc += 709;
(*ptc) += 1;
ptc -= 709;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 709;
(*ptc) += 1;
ptc -= 709;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 709;
(*ptc) += 1;
ptc -= 709;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 714;
while(*ptc) {
(*ptc) -= 1;
ptc -= 720;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 712;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 720;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 712;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 720;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 712;
}
ptc -= 714;
while(*ptc) {
(*ptc) -= 1;
ptc += 712;
(*ptc) += 1;
ptc -= 712;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 712;
(*ptc) += 1;
ptc -= 712;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 712;
(*ptc) += 1;
ptc -= 712;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 717;
while(*ptc) {
(*ptc) -= 1;
ptc -= 723;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 715;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 723;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 715;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 723;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 715;
}
ptc -= 717;
while(*ptc) {
(*ptc) -= 1;
ptc += 715;
(*ptc) += 1;
ptc -= 715;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 715;
(*ptc) += 1;
ptc -= 715;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 715;
(*ptc) += 1;
ptc -= 715;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 720;
while(*ptc) {
(*ptc) -= 1;
ptc -= 726;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 718;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 726;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 718;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 726;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 718;
}
ptc -= 720;
while(*ptc) {
(*ptc) -= 1;
ptc += 718;
(*ptc) += 1;
ptc -= 718;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 718;
(*ptc) += 1;
ptc -= 718;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 718;
(*ptc) += 1;
ptc -= 718;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 723;
while(*ptc) {
(*ptc) -= 1;
ptc -= 729;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 721;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 729;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 721;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 729;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 721;
}
ptc -= 723;
while(*ptc) {
(*ptc) -= 1;
ptc += 721;
(*ptc) += 1;
ptc -= 721;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 721;
(*ptc) += 1;
ptc -= 721;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 721;
(*ptc) += 1;
ptc -= 721;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 726;
while(*ptc) {
(*ptc) -= 1;
ptc -= 732;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 724;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 732;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 724;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 732;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 724;
}
ptc -= 726;
while(*ptc) {
(*ptc) -= 1;
ptc += 724;
(*ptc) += 1;
ptc -= 724;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 724;
(*ptc) += 1;
ptc -= 724;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 724;
(*ptc) += 1;
ptc -= 724;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 729;
while(*ptc) {
(*ptc) -= 1;
ptc -= 735;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 727;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 735;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 727;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 735;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 727;
}
ptc -= 729;
while(*ptc) {
(*ptc) -= 1;
ptc += 727;
(*ptc) += 1;
ptc -= 727;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 727;
(*ptc) += 1;
ptc -= 727;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 727;
(*ptc) += 1;
ptc -= 727;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 732;
while(*ptc) {
(*ptc) -= 1;
ptc -= 738;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 730;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 738;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 730;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 738;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 730;
}
ptc -= 732;
while(*ptc) {
(*ptc) -= 1;
ptc += 730;
(*ptc) += 1;
ptc -= 730;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 730;
(*ptc) += 1;
ptc -= 730;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 730;
(*ptc) += 1;
ptc -= 730;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 735;
while(*ptc) {
(*ptc) -= 1;
ptc -= 741;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 733;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 741;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 733;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 741;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 733;
}
ptc -= 735;
while(*ptc) {
(*ptc) -= 1;
ptc += 733;
(*ptc) += 1;
ptc -= 733;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 733;
(*ptc) += 1;
ptc -= 733;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 733;
(*ptc) += 1;
ptc -= 733;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 738;
while(*ptc) {
(*ptc) -= 1;
ptc -= 744;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 736;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 744;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 736;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 744;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 736;
}
ptc -= 738;
while(*ptc) {
(*ptc) -= 1;
ptc += 736;
(*ptc) += 1;
ptc -= 736;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 736;
(*ptc) += 1;
ptc -= 736;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 736;
(*ptc) += 1;
ptc -= 736;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 741;
while(*ptc) {
(*ptc) -= 1;
ptc -= 747;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 739;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 747;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 739;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 747;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 739;
}
ptc -= 741;
while(*ptc) {
(*ptc) -= 1;
ptc += 739;
(*ptc) += 1;
ptc -= 739;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 739;
(*ptc) += 1;
ptc -= 739;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 739;
(*ptc) += 1;
ptc -= 739;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 744;
while(*ptc) {
(*ptc) -= 1;
ptc -= 750;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 742;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 750;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 742;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 750;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 742;
}
ptc -= 744;
while(*ptc) {
(*ptc) -= 1;
ptc += 742;
(*ptc) += 1;
ptc -= 742;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 742;
(*ptc) += 1;
ptc -= 742;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 742;
(*ptc) += 1;
ptc -= 742;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 747;
while(*ptc) {
(*ptc) -= 1;
ptc -= 753;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 745;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 753;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 745;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 753;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 745;
}
ptc -= 747;
while(*ptc) {
(*ptc) -= 1;
ptc += 745;
(*ptc) += 1;
ptc -= 745;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 745;
(*ptc) += 1;
ptc -= 745;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 745;
(*ptc) += 1;
ptc -= 745;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 750;
while(*ptc) {
(*ptc) -= 1;
ptc -= 756;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 748;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 756;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 748;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 756;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 748;
}
ptc -= 750;
while(*ptc) {
(*ptc) -= 1;
ptc += 748;
(*ptc) += 1;
ptc -= 748;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 748;
(*ptc) += 1;
ptc -= 748;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 748;
(*ptc) += 1;
ptc -= 748;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 753;
while(*ptc) {
(*ptc) -= 1;
ptc -= 759;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 751;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 759;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 751;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 759;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 751;
}
ptc -= 753;
while(*ptc) {
(*ptc) -= 1;
ptc += 751;
(*ptc) += 1;
ptc -= 751;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 751;
(*ptc) += 1;
ptc -= 751;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 751;
(*ptc) += 1;
ptc -= 751;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 756;
while(*ptc) {
(*ptc) -= 1;
ptc -= 762;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 754;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 762;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 754;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 762;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 754;
}
ptc -= 756;
while(*ptc) {
(*ptc) -= 1;
ptc += 754;
(*ptc) += 1;
ptc -= 754;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 754;
(*ptc) += 1;
ptc -= 754;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 754;
(*ptc) += 1;
ptc -= 754;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 759;
while(*ptc) {
(*ptc) -= 1;
ptc -= 765;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 757;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 765;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 757;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 765;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 757;
}
ptc -= 759;
while(*ptc) {
(*ptc) -= 1;
ptc += 757;
(*ptc) += 1;
ptc -= 757;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 757;
(*ptc) += 1;
ptc -= 757;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 757;
(*ptc) += 1;
ptc -= 757;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 762;
while(*ptc) {
(*ptc) -= 1;
ptc -= 768;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 760;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 768;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 760;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 768;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 760;
}
ptc -= 762;
while(*ptc) {
(*ptc) -= 1;
ptc += 760;
(*ptc) += 1;
ptc -= 760;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 760;
(*ptc) += 1;
ptc -= 760;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 760;
(*ptc) += 1;
ptc -= 760;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 765;
while(*ptc) {
(*ptc) -= 1;
ptc -= 771;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 763;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 771;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 763;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 771;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 763;
}
ptc -= 765;
while(*ptc) {
(*ptc) -= 1;
ptc += 763;
(*ptc) += 1;
ptc -= 763;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 763;
(*ptc) += 1;
ptc -= 763;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 763;
(*ptc) += 1;
ptc -= 763;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 768;
while(*ptc) {
(*ptc) -= 1;
ptc -= 774;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 766;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 774;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 766;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 774;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 766;
}
ptc -= 768;
while(*ptc) {
(*ptc) -= 1;
ptc += 766;
(*ptc) += 1;
ptc -= 766;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 766;
(*ptc) += 1;
ptc -= 766;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 766;
(*ptc) += 1;
ptc -= 766;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 771;
while(*ptc) {
(*ptc) -= 1;
ptc -= 777;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 769;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 777;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 769;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 777;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 769;
}
ptc -= 771;
while(*ptc) {
(*ptc) -= 1;
ptc += 769;
(*ptc) += 1;
ptc -= 769;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 769;
(*ptc) += 1;
ptc -= 769;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 769;
(*ptc) += 1;
ptc -= 769;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 774;
while(*ptc) {
(*ptc) -= 1;
ptc -= 780;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 772;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 780;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 772;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 780;
(*ptc) += 1;
ptc += 8;
(*ptc) += 1;
ptc += 772;
}
ptc -= 774;
while(*ptc) {
(*ptc) -= 1;
ptc += 772;
(*ptc) += 1;
ptc -= 772;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 772;
(*ptc) += 1;
ptc -= 772;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 772;
(*ptc) += 1;
ptc -= 772;
}
ptc -= 4;
ptc += 1;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 8;
while(*ptc) {
(*ptc) -= 1;
ptc -= 13;
while(*ptc) {
(*ptc) -= 1;
ptc -= 784;
(*ptc) += 1;
ptc += 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 784;
(*ptc) += 1;
ptc += 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 784;
(*ptc) += 1;
ptc += 784;
}
ptc -= 773;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 14;
while(*ptc) {
(*ptc) -= 1;
ptc -= 200704;
(*ptc) += 1;
ptc += 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 200704;
(*ptc) += 1;
ptc += 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 200704;
(*ptc) += 1;
ptc += 200704;
}
ptc -= 200692;
}
ptc -= 71;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 55;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 57;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 57;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 57;
(*ptc) += 1;
ptc += 57;
}
ptc -= 5;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 5;
while(*ptc) {
(*ptc) -= 1;
ptc -= 3;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 200704;
(*ptc) += 1;
ptc -= 200704;
}
ptc += 200713;
(*ptc) += 1;
ptc -= 11;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 4;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 784;
(*ptc) += 1;
ptc -= 784;
}
ptc += 792;
(*ptc) += 1;
ptc -= 9;
}
ptc += 3;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 9;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 17;
while(*ptc) {
(*ptc) -= 1;
ptc += 15;
(*ptc) += 1;
ptc -= 15;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 15;
(*ptc) += 1;
ptc -= 15;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 15;
(*ptc) += 1;
ptc -= 15;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 12;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 20;
while(*ptc) {
(*ptc) -= 1;
ptc += 18;
(*ptc) += 1;
ptc -= 18;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 18;
(*ptc) += 1;
ptc -= 18;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 18;
(*ptc) += 1;
ptc -= 18;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 15;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 23;
while(*ptc) {
(*ptc) -= 1;
ptc += 21;
(*ptc) += 1;
ptc -= 21;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 21;
(*ptc) += 1;
ptc -= 21;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 21;
(*ptc) += 1;
ptc -= 21;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 18;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 26;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc -= 24;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc -= 24;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
(*ptc) += 1;
ptc -= 24;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 21;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 29;
while(*ptc) {
(*ptc) -= 1;
ptc += 27;
(*ptc) += 1;
ptc -= 27;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 27;
(*ptc) += 1;
ptc -= 27;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 27;
(*ptc) += 1;
ptc -= 27;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 24;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 32;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 30;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 30;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
(*ptc) += 1;
ptc -= 30;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 27;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 35;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 33;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 33;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
(*ptc) += 1;
ptc -= 33;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 30;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 38;
while(*ptc) {
(*ptc) -= 1;
ptc += 36;
(*ptc) += 1;
ptc -= 36;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 36;
(*ptc) += 1;
ptc -= 36;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 36;
(*ptc) += 1;
ptc -= 36;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 33;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 41;
while(*ptc) {
(*ptc) -= 1;
ptc += 39;
(*ptc) += 1;
ptc -= 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 39;
(*ptc) += 1;
ptc -= 39;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 39;
(*ptc) += 1;
ptc -= 39;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 36;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 44;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 42;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 42;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
(*ptc) += 1;
ptc -= 42;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 39;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 47;
while(*ptc) {
(*ptc) -= 1;
ptc += 45;
(*ptc) += 1;
ptc -= 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 45;
(*ptc) += 1;
ptc -= 45;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 45;
(*ptc) += 1;
ptc -= 45;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 42;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 50;
while(*ptc) {
(*ptc) -= 1;
ptc += 48;
(*ptc) += 1;
ptc -= 48;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 48;
(*ptc) += 1;
ptc -= 48;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 48;
(*ptc) += 1;
ptc -= 48;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 45;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 53;
while(*ptc) {
(*ptc) -= 1;
ptc += 51;
(*ptc) += 1;
ptc -= 51;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 51;
(*ptc) += 1;
ptc -= 51;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 51;
(*ptc) += 1;
ptc -= 51;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 48;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 56;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 54;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 54;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
(*ptc) += 1;
ptc -= 54;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 51;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 59;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 57;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 57;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
(*ptc) += 1;
ptc -= 57;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 54;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 62;
while(*ptc) {
(*ptc) -= 1;
ptc += 60;
(*ptc) += 1;
ptc -= 60;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 60;
(*ptc) += 1;
ptc -= 60;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 60;
(*ptc) += 1;
ptc -= 60;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 57;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 65;
while(*ptc) {
(*ptc) -= 1;
ptc += 63;
(*ptc) += 1;
ptc -= 63;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 63;
(*ptc) += 1;
ptc -= 63;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 63;
(*ptc) += 1;
ptc -= 63;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 60;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 68;
while(*ptc) {
(*ptc) -= 1;
ptc += 66;
(*ptc) += 1;
ptc -= 66;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 66;
(*ptc) += 1;
ptc -= 66;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 66;
(*ptc) += 1;
ptc -= 66;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 63;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 71;
while(*ptc) {
(*ptc) -= 1;
ptc += 69;
(*ptc) += 1;
ptc -= 69;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 69;
(*ptc) += 1;
ptc -= 69;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 69;
(*ptc) += 1;
ptc -= 69;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 66;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 74;
while(*ptc) {
(*ptc) -= 1;
ptc += 72;
(*ptc) += 1;
ptc -= 72;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 72;
(*ptc) += 1;
ptc -= 72;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 72;
(*ptc) += 1;
ptc -= 72;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 69;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 77;
while(*ptc) {
(*ptc) -= 1;
ptc += 75;
(*ptc) += 1;
ptc -= 75;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 75;
(*ptc) += 1;
ptc -= 75;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 75;
(*ptc) += 1;
ptc -= 75;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 72;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 80;
while(*ptc) {
(*ptc) -= 1;
ptc += 78;
(*ptc) += 1;
ptc -= 78;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 78;
(*ptc) += 1;
ptc -= 78;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 78;
(*ptc) += 1;
ptc -= 78;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 75;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 83;
while(*ptc) {
(*ptc) -= 1;
ptc += 81;
(*ptc) += 1;
ptc -= 81;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 81;
(*ptc) += 1;
ptc -= 81;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 81;
(*ptc) += 1;
ptc -= 81;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 78;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 86;
while(*ptc) {
(*ptc) -= 1;
ptc += 84;
(*ptc) += 1;
ptc -= 84;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 84;
(*ptc) += 1;
ptc -= 84;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 84;
(*ptc) += 1;
ptc -= 84;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 81;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 89;
while(*ptc) {
(*ptc) -= 1;
ptc += 87;
(*ptc) += 1;
ptc -= 87;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 87;
(*ptc) += 1;
ptc -= 87;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 87;
(*ptc) += 1;
ptc -= 87;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 84;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 92;
while(*ptc) {
(*ptc) -= 1;
ptc += 90;
(*ptc) += 1;
ptc -= 90;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 90;
(*ptc) += 1;
ptc -= 90;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 90;
(*ptc) += 1;
ptc -= 90;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 87;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 95;
while(*ptc) {
(*ptc) -= 1;
ptc += 93;
(*ptc) += 1;
ptc -= 93;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 93;
(*ptc) += 1;
ptc -= 93;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 93;
(*ptc) += 1;
ptc -= 93;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 90;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 98;
while(*ptc) {
(*ptc) -= 1;
ptc += 96;
(*ptc) += 1;
ptc -= 96;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 96;
(*ptc) += 1;
ptc -= 96;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 96;
(*ptc) += 1;
ptc -= 96;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 93;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 101;
while(*ptc) {
(*ptc) -= 1;
ptc += 99;
(*ptc) += 1;
ptc -= 99;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 99;
(*ptc) += 1;
ptc -= 99;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 99;
(*ptc) += 1;
ptc -= 99;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 96;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 104;
while(*ptc) {
(*ptc) -= 1;
ptc += 102;
(*ptc) += 1;
ptc -= 102;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 102;
(*ptc) += 1;
ptc -= 102;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 102;
(*ptc) += 1;
ptc -= 102;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 99;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 107;
while(*ptc) {
(*ptc) -= 1;
ptc += 105;
(*ptc) += 1;
ptc -= 105;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 105;
(*ptc) += 1;
ptc -= 105;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 105;
(*ptc) += 1;
ptc -= 105;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 102;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 110;
while(*ptc) {
(*ptc) -= 1;
ptc += 108;
(*ptc) += 1;
ptc -= 108;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 108;
(*ptc) += 1;
ptc -= 108;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 108;
(*ptc) += 1;
ptc -= 108;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 105;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 113;
while(*ptc) {
(*ptc) -= 1;
ptc += 111;
(*ptc) += 1;
ptc -= 111;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 111;
(*ptc) += 1;
ptc -= 111;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 111;
(*ptc) += 1;
ptc -= 111;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 108;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 116;
while(*ptc) {
(*ptc) -= 1;
ptc += 114;
(*ptc) += 1;
ptc -= 114;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 114;
(*ptc) += 1;
ptc -= 114;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 114;
(*ptc) += 1;
ptc -= 114;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 111;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 119;
while(*ptc) {
(*ptc) -= 1;
ptc += 117;
(*ptc) += 1;
ptc -= 117;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 117;
(*ptc) += 1;
ptc -= 117;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 117;
(*ptc) += 1;
ptc -= 117;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 114;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 122;
while(*ptc) {
(*ptc) -= 1;
ptc += 120;
(*ptc) += 1;
ptc -= 120;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 120;
(*ptc) += 1;
ptc -= 120;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 120;
(*ptc) += 1;
ptc -= 120;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 117;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 125;
while(*ptc) {
(*ptc) -= 1;
ptc += 123;
(*ptc) += 1;
ptc -= 123;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 123;
(*ptc) += 1;
ptc -= 123;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 123;
(*ptc) += 1;
ptc -= 123;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 120;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 128;
while(*ptc) {
(*ptc) -= 1;
ptc += 126;
(*ptc) += 1;
ptc -= 126;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 126;
(*ptc) += 1;
ptc -= 126;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 126;
(*ptc) += 1;
ptc -= 126;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 123;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 131;
while(*ptc) {
(*ptc) -= 1;
ptc += 129;
(*ptc) += 1;
ptc -= 129;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 129;
(*ptc) += 1;
ptc -= 129;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 129;
(*ptc) += 1;
ptc -= 129;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 126;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 134;
while(*ptc) {
(*ptc) -= 1;
ptc += 132;
(*ptc) += 1;
ptc -= 132;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 132;
(*ptc) += 1;
ptc -= 132;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 132;
(*ptc) += 1;
ptc -= 132;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 129;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 137;
while(*ptc) {
(*ptc) -= 1;
ptc += 135;
(*ptc) += 1;
ptc -= 135;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 135;
(*ptc) += 1;
ptc -= 135;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 135;
(*ptc) += 1;
ptc -= 135;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 132;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 140;
while(*ptc) {
(*ptc) -= 1;
ptc += 138;
(*ptc) += 1;
ptc -= 138;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 138;
(*ptc) += 1;
ptc -= 138;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 138;
(*ptc) += 1;
ptc -= 138;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 135;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 143;
while(*ptc) {
(*ptc) -= 1;
ptc += 141;
(*ptc) += 1;
ptc -= 141;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 141;
(*ptc) += 1;
ptc -= 141;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 141;
(*ptc) += 1;
ptc -= 141;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 138;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 146;
while(*ptc) {
(*ptc) -= 1;
ptc += 144;
(*ptc) += 1;
ptc -= 144;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 144;
(*ptc) += 1;
ptc -= 144;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 144;
(*ptc) += 1;
ptc -= 144;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 141;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 149;
while(*ptc) {
(*ptc) -= 1;
ptc += 147;
(*ptc) += 1;
ptc -= 147;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 147;
(*ptc) += 1;
ptc -= 147;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 147;
(*ptc) += 1;
ptc -= 147;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 144;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 152;
while(*ptc) {
(*ptc) -= 1;
ptc += 150;
(*ptc) += 1;
ptc -= 150;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 150;
(*ptc) += 1;
ptc -= 150;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 150;
(*ptc) += 1;
ptc -= 150;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 147;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 155;
while(*ptc) {
(*ptc) -= 1;
ptc += 153;
(*ptc) += 1;
ptc -= 153;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 153;
(*ptc) += 1;
ptc -= 153;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 153;
(*ptc) += 1;
ptc -= 153;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 150;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 158;
while(*ptc) {
(*ptc) -= 1;
ptc += 156;
(*ptc) += 1;
ptc -= 156;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 156;
(*ptc) += 1;
ptc -= 156;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 156;
(*ptc) += 1;
ptc -= 156;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 153;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 161;
while(*ptc) {
(*ptc) -= 1;
ptc += 159;
(*ptc) += 1;
ptc -= 159;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 159;
(*ptc) += 1;
ptc -= 159;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 159;
(*ptc) += 1;
ptc -= 159;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 156;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 164;
while(*ptc) {
(*ptc) -= 1;
ptc += 162;
(*ptc) += 1;
ptc -= 162;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 162;
(*ptc) += 1;
ptc -= 162;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 162;
(*ptc) += 1;
ptc -= 162;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 159;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 167;
while(*ptc) {
(*ptc) -= 1;
ptc += 165;
(*ptc) += 1;
ptc -= 165;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 165;
(*ptc) += 1;
ptc -= 165;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 165;
(*ptc) += 1;
ptc -= 165;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 162;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 170;
while(*ptc) {
(*ptc) -= 1;
ptc += 168;
(*ptc) += 1;
ptc -= 168;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 168;
(*ptc) += 1;
ptc -= 168;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 168;
(*ptc) += 1;
ptc -= 168;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 165;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 173;
while(*ptc) {
(*ptc) -= 1;
ptc += 171;
(*ptc) += 1;
ptc -= 171;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 171;
(*ptc) += 1;
ptc -= 171;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 171;
(*ptc) += 1;
ptc -= 171;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 168;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 176;
while(*ptc) {
(*ptc) -= 1;
ptc += 174;
(*ptc) += 1;
ptc -= 174;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 174;
(*ptc) += 1;
ptc -= 174;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 174;
(*ptc) += 1;
ptc -= 174;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 171;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 179;
while(*ptc) {
(*ptc) -= 1;
ptc += 177;
(*ptc) += 1;
ptc -= 177;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 177;
(*ptc) += 1;
ptc -= 177;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 177;
(*ptc) += 1;
ptc -= 177;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 174;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 182;
while(*ptc) {
(*ptc) -= 1;
ptc += 180;
(*ptc) += 1;
ptc -= 180;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 180;
(*ptc) += 1;
ptc -= 180;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 180;
(*ptc) += 1;
ptc -= 180;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 177;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 185;
while(*ptc) {
(*ptc) -= 1;
ptc += 183;
(*ptc) += 1;
ptc -= 183;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 183;
(*ptc) += 1;
ptc -= 183;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 183;
(*ptc) += 1;
ptc -= 183;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 180;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 188;
while(*ptc) {
(*ptc) -= 1;
ptc += 186;
(*ptc) += 1;
ptc -= 186;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 186;
(*ptc) += 1;
ptc -= 186;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 186;
(*ptc) += 1;
ptc -= 186;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 183;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 191;
while(*ptc) {
(*ptc) -= 1;
ptc += 189;
(*ptc) += 1;
ptc -= 189;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 189;
(*ptc) += 1;
ptc -= 189;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 189;
(*ptc) += 1;
ptc -= 189;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 186;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 194;
while(*ptc) {
(*ptc) -= 1;
ptc += 192;
(*ptc) += 1;
ptc -= 192;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 192;
(*ptc) += 1;
ptc -= 192;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 192;
(*ptc) += 1;
ptc -= 192;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 189;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 197;
while(*ptc) {
(*ptc) -= 1;
ptc += 195;
(*ptc) += 1;
ptc -= 195;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 195;
(*ptc) += 1;
ptc -= 195;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 195;
(*ptc) += 1;
ptc -= 195;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 192;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 200;
while(*ptc) {
(*ptc) -= 1;
ptc += 198;
(*ptc) += 1;
ptc -= 198;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 198;
(*ptc) += 1;
ptc -= 198;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 198;
(*ptc) += 1;
ptc -= 198;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 195;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 203;
while(*ptc) {
(*ptc) -= 1;
ptc += 201;
(*ptc) += 1;
ptc -= 201;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 201;
(*ptc) += 1;
ptc -= 201;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 201;
(*ptc) += 1;
ptc -= 201;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 198;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 206;
while(*ptc) {
(*ptc) -= 1;
ptc += 204;
(*ptc) += 1;
ptc -= 204;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 204;
(*ptc) += 1;
ptc -= 204;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 204;
(*ptc) += 1;
ptc -= 204;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 201;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 209;
while(*ptc) {
(*ptc) -= 1;
ptc += 207;
(*ptc) += 1;
ptc -= 207;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 207;
(*ptc) += 1;
ptc -= 207;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 207;
(*ptc) += 1;
ptc -= 207;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 204;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 212;
while(*ptc) {
(*ptc) -= 1;
ptc += 210;
(*ptc) += 1;
ptc -= 210;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 210;
(*ptc) += 1;
ptc -= 210;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 210;
(*ptc) += 1;
ptc -= 210;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 207;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 215;
while(*ptc) {
(*ptc) -= 1;
ptc += 213;
(*ptc) += 1;
ptc -= 213;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 213;
(*ptc) += 1;
ptc -= 213;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 213;
(*ptc) += 1;
ptc -= 213;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 210;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 218;
while(*ptc) {
(*ptc) -= 1;
ptc += 216;
(*ptc) += 1;
ptc -= 216;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 216;
(*ptc) += 1;
ptc -= 216;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 216;
(*ptc) += 1;
ptc -= 216;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 213;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 221;
while(*ptc) {
(*ptc) -= 1;
ptc += 219;
(*ptc) += 1;
ptc -= 219;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 219;
(*ptc) += 1;
ptc -= 219;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 219;
(*ptc) += 1;
ptc -= 219;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 216;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 224;
while(*ptc) {
(*ptc) -= 1;
ptc += 222;
(*ptc) += 1;
ptc -= 222;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 222;
(*ptc) += 1;
ptc -= 222;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 222;
(*ptc) += 1;
ptc -= 222;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 219;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 227;
while(*ptc) {
(*ptc) -= 1;
ptc += 225;
(*ptc) += 1;
ptc -= 225;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 225;
(*ptc) += 1;
ptc -= 225;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 225;
(*ptc) += 1;
ptc -= 225;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 222;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 230;
while(*ptc) {
(*ptc) -= 1;
ptc += 228;
(*ptc) += 1;
ptc -= 228;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 228;
(*ptc) += 1;
ptc -= 228;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 228;
(*ptc) += 1;
ptc -= 228;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 225;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 233;
while(*ptc) {
(*ptc) -= 1;
ptc += 231;
(*ptc) += 1;
ptc -= 231;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 231;
(*ptc) += 1;
ptc -= 231;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 231;
(*ptc) += 1;
ptc -= 231;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 228;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 236;
while(*ptc) {
(*ptc) -= 1;
ptc += 234;
(*ptc) += 1;
ptc -= 234;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 234;
(*ptc) += 1;
ptc -= 234;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 234;
(*ptc) += 1;
ptc -= 234;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 231;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 239;
while(*ptc) {
(*ptc) -= 1;
ptc += 237;
(*ptc) += 1;
ptc -= 237;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 237;
(*ptc) += 1;
ptc -= 237;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 237;
(*ptc) += 1;
ptc -= 237;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 234;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 242;
while(*ptc) {
(*ptc) -= 1;
ptc += 240;
(*ptc) += 1;
ptc -= 240;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 240;
(*ptc) += 1;
ptc -= 240;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 240;
(*ptc) += 1;
ptc -= 240;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 237;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 245;
while(*ptc) {
(*ptc) -= 1;
ptc += 243;
(*ptc) += 1;
ptc -= 243;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 243;
(*ptc) += 1;
ptc -= 243;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 243;
(*ptc) += 1;
ptc -= 243;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 240;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 248;
while(*ptc) {
(*ptc) -= 1;
ptc += 246;
(*ptc) += 1;
ptc -= 246;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 246;
(*ptc) += 1;
ptc -= 246;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 246;
(*ptc) += 1;
ptc -= 246;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 243;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 251;
while(*ptc) {
(*ptc) -= 1;
ptc += 249;
(*ptc) += 1;
ptc -= 249;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 249;
(*ptc) += 1;
ptc -= 249;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 249;
(*ptc) += 1;
ptc -= 249;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 246;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 254;
while(*ptc) {
(*ptc) -= 1;
ptc += 252;
(*ptc) += 1;
ptc -= 252;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 252;
(*ptc) += 1;
ptc -= 252;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 252;
(*ptc) += 1;
ptc -= 252;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 249;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 257;
while(*ptc) {
(*ptc) -= 1;
ptc += 255;
(*ptc) += 1;
ptc -= 255;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 255;
(*ptc) += 1;
ptc -= 255;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 255;
(*ptc) += 1;
ptc -= 255;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 252;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 260;
while(*ptc) {
(*ptc) -= 1;
ptc += 258;
(*ptc) += 1;
ptc -= 258;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 258;
(*ptc) += 1;
ptc -= 258;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 258;
(*ptc) += 1;
ptc -= 258;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 255;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 263;
while(*ptc) {
(*ptc) -= 1;
ptc += 261;
(*ptc) += 1;
ptc -= 261;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 261;
(*ptc) += 1;
ptc -= 261;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 261;
(*ptc) += 1;
ptc -= 261;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 258;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 266;
while(*ptc) {
(*ptc) -= 1;
ptc += 264;
(*ptc) += 1;
ptc -= 264;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 264;
(*ptc) += 1;
ptc -= 264;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 264;
(*ptc) += 1;
ptc -= 264;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 261;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 269;
while(*ptc) {
(*ptc) -= 1;
ptc += 267;
(*ptc) += 1;
ptc -= 267;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 267;
(*ptc) += 1;
ptc -= 267;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 267;
(*ptc) += 1;
ptc -= 267;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 264;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 272;
while(*ptc) {
(*ptc) -= 1;
ptc += 270;
(*ptc) += 1;
ptc -= 270;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 270;
(*ptc) += 1;
ptc -= 270;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 270;
(*ptc) += 1;
ptc -= 270;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 267;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 275;
while(*ptc) {
(*ptc) -= 1;
ptc += 273;
(*ptc) += 1;
ptc -= 273;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 273;
(*ptc) += 1;
ptc -= 273;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 273;
(*ptc) += 1;
ptc -= 273;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 270;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 278;
while(*ptc) {
(*ptc) -= 1;
ptc += 276;
(*ptc) += 1;
ptc -= 276;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 276;
(*ptc) += 1;
ptc -= 276;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 276;
(*ptc) += 1;
ptc -= 276;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 273;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 281;
while(*ptc) {
(*ptc) -= 1;
ptc += 279;
(*ptc) += 1;
ptc -= 279;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 279;
(*ptc) += 1;
ptc -= 279;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 279;
(*ptc) += 1;
ptc -= 279;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 276;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 284;
while(*ptc) {
(*ptc) -= 1;
ptc += 282;
(*ptc) += 1;
ptc -= 282;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 282;
(*ptc) += 1;
ptc -= 282;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 282;
(*ptc) += 1;
ptc -= 282;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 279;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 287;
while(*ptc) {
(*ptc) -= 1;
ptc += 285;
(*ptc) += 1;
ptc -= 285;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 285;
(*ptc) += 1;
ptc -= 285;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 285;
(*ptc) += 1;
ptc -= 285;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 282;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 290;
while(*ptc) {
(*ptc) -= 1;
ptc += 288;
(*ptc) += 1;
ptc -= 288;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 288;
(*ptc) += 1;
ptc -= 288;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 288;
(*ptc) += 1;
ptc -= 288;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 285;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 293;
while(*ptc) {
(*ptc) -= 1;
ptc += 291;
(*ptc) += 1;
ptc -= 291;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 291;
(*ptc) += 1;
ptc -= 291;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 291;
(*ptc) += 1;
ptc -= 291;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 288;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 296;
while(*ptc) {
(*ptc) -= 1;
ptc += 294;
(*ptc) += 1;
ptc -= 294;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 294;
(*ptc) += 1;
ptc -= 294;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 294;
(*ptc) += 1;
ptc -= 294;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 291;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 299;
while(*ptc) {
(*ptc) -= 1;
ptc += 297;
(*ptc) += 1;
ptc -= 297;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 297;
(*ptc) += 1;
ptc -= 297;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 297;
(*ptc) += 1;
ptc -= 297;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 294;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 302;
while(*ptc) {
(*ptc) -= 1;
ptc += 300;
(*ptc) += 1;
ptc -= 300;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 300;
(*ptc) += 1;
ptc -= 300;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 300;
(*ptc) += 1;
ptc -= 300;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 297;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 305;
while(*ptc) {
(*ptc) -= 1;
ptc += 303;
(*ptc) += 1;
ptc -= 303;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 303;
(*ptc) += 1;
ptc -= 303;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 303;
(*ptc) += 1;
ptc -= 303;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 300;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 308;
while(*ptc) {
(*ptc) -= 1;
ptc += 306;
(*ptc) += 1;
ptc -= 306;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 306;
(*ptc) += 1;
ptc -= 306;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 306;
(*ptc) += 1;
ptc -= 306;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 303;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 311;
while(*ptc) {
(*ptc) -= 1;
ptc += 309;
(*ptc) += 1;
ptc -= 309;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 309;
(*ptc) += 1;
ptc -= 309;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 309;
(*ptc) += 1;
ptc -= 309;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 306;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 314;
while(*ptc) {
(*ptc) -= 1;
ptc += 312;
(*ptc) += 1;
ptc -= 312;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 312;
(*ptc) += 1;
ptc -= 312;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 312;
(*ptc) += 1;
ptc -= 312;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 309;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 317;
while(*ptc) {
(*ptc) -= 1;
ptc += 315;
(*ptc) += 1;
ptc -= 315;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 315;
(*ptc) += 1;
ptc -= 315;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 315;
(*ptc) += 1;
ptc -= 315;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 312;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 320;
while(*ptc) {
(*ptc) -= 1;
ptc += 318;
(*ptc) += 1;
ptc -= 318;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 318;
(*ptc) += 1;
ptc -= 318;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 318;
(*ptc) += 1;
ptc -= 318;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 315;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 323;
while(*ptc) {
(*ptc) -= 1;
ptc += 321;
(*ptc) += 1;
ptc -= 321;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 321;
(*ptc) += 1;
ptc -= 321;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 321;
(*ptc) += 1;
ptc -= 321;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 318;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 326;
while(*ptc) {
(*ptc) -= 1;
ptc += 324;
(*ptc) += 1;
ptc -= 324;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 324;
(*ptc) += 1;
ptc -= 324;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 324;
(*ptc) += 1;
ptc -= 324;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 321;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 329;
while(*ptc) {
(*ptc) -= 1;
ptc += 327;
(*ptc) += 1;
ptc -= 327;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 327;
(*ptc) += 1;
ptc -= 327;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 327;
(*ptc) += 1;
ptc -= 327;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 324;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 332;
while(*ptc) {
(*ptc) -= 1;
ptc += 330;
(*ptc) += 1;
ptc -= 330;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 330;
(*ptc) += 1;
ptc -= 330;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 330;
(*ptc) += 1;
ptc -= 330;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 327;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 335;
while(*ptc) {
(*ptc) -= 1;
ptc += 333;
(*ptc) += 1;
ptc -= 333;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 333;
(*ptc) += 1;
ptc -= 333;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 333;
(*ptc) += 1;
ptc -= 333;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 330;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 338;
while(*ptc) {
(*ptc) -= 1;
ptc += 336;
(*ptc) += 1;
ptc -= 336;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 336;
(*ptc) += 1;
ptc -= 336;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 336;
(*ptc) += 1;
ptc -= 336;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 333;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 341;
while(*ptc) {
(*ptc) -= 1;
ptc += 339;
(*ptc) += 1;
ptc -= 339;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 339;
(*ptc) += 1;
ptc -= 339;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 339;
(*ptc) += 1;
ptc -= 339;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 336;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 344;
while(*ptc) {
(*ptc) -= 1;
ptc += 342;
(*ptc) += 1;
ptc -= 342;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 342;
(*ptc) += 1;
ptc -= 342;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 342;
(*ptc) += 1;
ptc -= 342;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 339;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 347;
while(*ptc) {
(*ptc) -= 1;
ptc += 345;
(*ptc) += 1;
ptc -= 345;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 345;
(*ptc) += 1;
ptc -= 345;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 345;
(*ptc) += 1;
ptc -= 345;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 342;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 350;
while(*ptc) {
(*ptc) -= 1;
ptc += 348;
(*ptc) += 1;
ptc -= 348;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 348;
(*ptc) += 1;
ptc -= 348;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 348;
(*ptc) += 1;
ptc -= 348;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 345;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 353;
while(*ptc) {
(*ptc) -= 1;
ptc += 351;
(*ptc) += 1;
ptc -= 351;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 351;
(*ptc) += 1;
ptc -= 351;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 351;
(*ptc) += 1;
ptc -= 351;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 348;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 356;
while(*ptc) {
(*ptc) -= 1;
ptc += 354;
(*ptc) += 1;
ptc -= 354;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 354;
(*ptc) += 1;
ptc -= 354;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 354;
(*ptc) += 1;
ptc -= 354;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 351;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 359;
while(*ptc) {
(*ptc) -= 1;
ptc += 357;
(*ptc) += 1;
ptc -= 357;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 357;
(*ptc) += 1;
ptc -= 357;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 357;
(*ptc) += 1;
ptc -= 357;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 354;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 362;
while(*ptc) {
(*ptc) -= 1;
ptc += 360;
(*ptc) += 1;
ptc -= 360;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 360;
(*ptc) += 1;
ptc -= 360;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 360;
(*ptc) += 1;
ptc -= 360;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 357;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 365;
while(*ptc) {
(*ptc) -= 1;
ptc += 363;
(*ptc) += 1;
ptc -= 363;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 363;
(*ptc) += 1;
ptc -= 363;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 363;
(*ptc) += 1;
ptc -= 363;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 360;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 368;
while(*ptc) {
(*ptc) -= 1;
ptc += 366;
(*ptc) += 1;
ptc -= 366;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 366;
(*ptc) += 1;
ptc -= 366;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 366;
(*ptc) += 1;
ptc -= 366;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 363;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 371;
while(*ptc) {
(*ptc) -= 1;
ptc += 369;
(*ptc) += 1;
ptc -= 369;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 369;
(*ptc) += 1;
ptc -= 369;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 369;
(*ptc) += 1;
ptc -= 369;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 366;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 374;
while(*ptc) {
(*ptc) -= 1;
ptc += 372;
(*ptc) += 1;
ptc -= 372;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 372;
(*ptc) += 1;
ptc -= 372;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 372;
(*ptc) += 1;
ptc -= 372;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 369;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 377;
while(*ptc) {
(*ptc) -= 1;
ptc += 375;
(*ptc) += 1;
ptc -= 375;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 375;
(*ptc) += 1;
ptc -= 375;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 375;
(*ptc) += 1;
ptc -= 375;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 372;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 380;
while(*ptc) {
(*ptc) -= 1;
ptc += 378;
(*ptc) += 1;
ptc -= 378;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 378;
(*ptc) += 1;
ptc -= 378;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 378;
(*ptc) += 1;
ptc -= 378;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 375;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 383;
while(*ptc) {
(*ptc) -= 1;
ptc += 381;
(*ptc) += 1;
ptc -= 381;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 381;
(*ptc) += 1;
ptc -= 381;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 381;
(*ptc) += 1;
ptc -= 381;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 378;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 386;
while(*ptc) {
(*ptc) -= 1;
ptc += 384;
(*ptc) += 1;
ptc -= 384;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 384;
(*ptc) += 1;
ptc -= 384;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 384;
(*ptc) += 1;
ptc -= 384;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 381;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 389;
while(*ptc) {
(*ptc) -= 1;
ptc += 387;
(*ptc) += 1;
ptc -= 387;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 387;
(*ptc) += 1;
ptc -= 387;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 387;
(*ptc) += 1;
ptc -= 387;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 384;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 392;
while(*ptc) {
(*ptc) -= 1;
ptc += 390;
(*ptc) += 1;
ptc -= 390;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 390;
(*ptc) += 1;
ptc -= 390;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 390;
(*ptc) += 1;
ptc -= 390;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 387;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 395;
while(*ptc) {
(*ptc) -= 1;
ptc += 393;
(*ptc) += 1;
ptc -= 393;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 393;
(*ptc) += 1;
ptc -= 393;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 393;
(*ptc) += 1;
ptc -= 393;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 390;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 398;
while(*ptc) {
(*ptc) -= 1;
ptc += 396;
(*ptc) += 1;
ptc -= 396;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 396;
(*ptc) += 1;
ptc -= 396;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 396;
(*ptc) += 1;
ptc -= 396;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 393;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 401;
while(*ptc) {
(*ptc) -= 1;
ptc += 399;
(*ptc) += 1;
ptc -= 399;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 399;
(*ptc) += 1;
ptc -= 399;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 399;
(*ptc) += 1;
ptc -= 399;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 396;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 404;
while(*ptc) {
(*ptc) -= 1;
ptc += 402;
(*ptc) += 1;
ptc -= 402;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 402;
(*ptc) += 1;
ptc -= 402;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 402;
(*ptc) += 1;
ptc -= 402;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 399;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 407;
while(*ptc) {
(*ptc) -= 1;
ptc += 405;
(*ptc) += 1;
ptc -= 405;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 405;
(*ptc) += 1;
ptc -= 405;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 405;
(*ptc) += 1;
ptc -= 405;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 402;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 410;
while(*ptc) {
(*ptc) -= 1;
ptc += 408;
(*ptc) += 1;
ptc -= 408;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 408;
(*ptc) += 1;
ptc -= 408;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 408;
(*ptc) += 1;
ptc -= 408;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 405;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 413;
while(*ptc) {
(*ptc) -= 1;
ptc += 411;
(*ptc) += 1;
ptc -= 411;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 411;
(*ptc) += 1;
ptc -= 411;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 411;
(*ptc) += 1;
ptc -= 411;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 408;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 416;
while(*ptc) {
(*ptc) -= 1;
ptc += 414;
(*ptc) += 1;
ptc -= 414;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 414;
(*ptc) += 1;
ptc -= 414;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 414;
(*ptc) += 1;
ptc -= 414;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 411;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 419;
while(*ptc) {
(*ptc) -= 1;
ptc += 417;
(*ptc) += 1;
ptc -= 417;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 417;
(*ptc) += 1;
ptc -= 417;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 417;
(*ptc) += 1;
ptc -= 417;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 414;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 422;
while(*ptc) {
(*ptc) -= 1;
ptc += 420;
(*ptc) += 1;
ptc -= 420;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 420;
(*ptc) += 1;
ptc -= 420;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 420;
(*ptc) += 1;
ptc -= 420;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 417;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 425;
while(*ptc) {
(*ptc) -= 1;
ptc += 423;
(*ptc) += 1;
ptc -= 423;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 423;
(*ptc) += 1;
ptc -= 423;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 423;
(*ptc) += 1;
ptc -= 423;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 420;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 428;
while(*ptc) {
(*ptc) -= 1;
ptc += 426;
(*ptc) += 1;
ptc -= 426;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 426;
(*ptc) += 1;
ptc -= 426;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 426;
(*ptc) += 1;
ptc -= 426;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 423;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 431;
while(*ptc) {
(*ptc) -= 1;
ptc += 429;
(*ptc) += 1;
ptc -= 429;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 429;
(*ptc) += 1;
ptc -= 429;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 429;
(*ptc) += 1;
ptc -= 429;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 426;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 434;
while(*ptc) {
(*ptc) -= 1;
ptc += 432;
(*ptc) += 1;
ptc -= 432;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 432;
(*ptc) += 1;
ptc -= 432;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 432;
(*ptc) += 1;
ptc -= 432;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 429;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 437;
while(*ptc) {
(*ptc) -= 1;
ptc += 435;
(*ptc) += 1;
ptc -= 435;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 435;
(*ptc) += 1;
ptc -= 435;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 435;
(*ptc) += 1;
ptc -= 435;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 432;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 440;
while(*ptc) {
(*ptc) -= 1;
ptc += 438;
(*ptc) += 1;
ptc -= 438;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 438;
(*ptc) += 1;
ptc -= 438;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 438;
(*ptc) += 1;
ptc -= 438;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 435;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 443;
while(*ptc) {
(*ptc) -= 1;
ptc += 441;
(*ptc) += 1;
ptc -= 441;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 441;
(*ptc) += 1;
ptc -= 441;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 441;
(*ptc) += 1;
ptc -= 441;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 438;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 446;
while(*ptc) {
(*ptc) -= 1;
ptc += 444;
(*ptc) += 1;
ptc -= 444;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 444;
(*ptc) += 1;
ptc -= 444;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 444;
(*ptc) += 1;
ptc -= 444;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 441;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 449;
while(*ptc) {
(*ptc) -= 1;
ptc += 447;
(*ptc) += 1;
ptc -= 447;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 447;
(*ptc) += 1;
ptc -= 447;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 447;
(*ptc) += 1;
ptc -= 447;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 444;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 452;
while(*ptc) {
(*ptc) -= 1;
ptc += 450;
(*ptc) += 1;
ptc -= 450;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 450;
(*ptc) += 1;
ptc -= 450;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 450;
(*ptc) += 1;
ptc -= 450;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 447;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 455;
while(*ptc) {
(*ptc) -= 1;
ptc += 453;
(*ptc) += 1;
ptc -= 453;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 453;
(*ptc) += 1;
ptc -= 453;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 453;
(*ptc) += 1;
ptc -= 453;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 450;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 458;
while(*ptc) {
(*ptc) -= 1;
ptc += 456;
(*ptc) += 1;
ptc -= 456;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 456;
(*ptc) += 1;
ptc -= 456;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 456;
(*ptc) += 1;
ptc -= 456;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 453;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 461;
while(*ptc) {
(*ptc) -= 1;
ptc += 459;
(*ptc) += 1;
ptc -= 459;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 459;
(*ptc) += 1;
ptc -= 459;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 459;
(*ptc) += 1;
ptc -= 459;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 456;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 464;
while(*ptc) {
(*ptc) -= 1;
ptc += 462;
(*ptc) += 1;
ptc -= 462;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 462;
(*ptc) += 1;
ptc -= 462;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 462;
(*ptc) += 1;
ptc -= 462;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 459;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 467;
while(*ptc) {
(*ptc) -= 1;
ptc += 465;
(*ptc) += 1;
ptc -= 465;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 465;
(*ptc) += 1;
ptc -= 465;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 465;
(*ptc) += 1;
ptc -= 465;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 462;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 470;
while(*ptc) {
(*ptc) -= 1;
ptc += 468;
(*ptc) += 1;
ptc -= 468;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 468;
(*ptc) += 1;
ptc -= 468;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 468;
(*ptc) += 1;
ptc -= 468;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 465;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 473;
while(*ptc) {
(*ptc) -= 1;
ptc += 471;
(*ptc) += 1;
ptc -= 471;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 471;
(*ptc) += 1;
ptc -= 471;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 471;
(*ptc) += 1;
ptc -= 471;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 468;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 476;
while(*ptc) {
(*ptc) -= 1;
ptc += 474;
(*ptc) += 1;
ptc -= 474;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 474;
(*ptc) += 1;
ptc -= 474;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 474;
(*ptc) += 1;
ptc -= 474;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 471;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 479;
while(*ptc) {
(*ptc) -= 1;
ptc += 477;
(*ptc) += 1;
ptc -= 477;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 477;
(*ptc) += 1;
ptc -= 477;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 477;
(*ptc) += 1;
ptc -= 477;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 474;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 482;
while(*ptc) {
(*ptc) -= 1;
ptc += 480;
(*ptc) += 1;
ptc -= 480;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 480;
(*ptc) += 1;
ptc -= 480;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 480;
(*ptc) += 1;
ptc -= 480;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 477;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 485;
while(*ptc) {
(*ptc) -= 1;
ptc += 483;
(*ptc) += 1;
ptc -= 483;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 483;
(*ptc) += 1;
ptc -= 483;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 483;
(*ptc) += 1;
ptc -= 483;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 480;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 488;
while(*ptc) {
(*ptc) -= 1;
ptc += 486;
(*ptc) += 1;
ptc -= 486;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 486;
(*ptc) += 1;
ptc -= 486;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 486;
(*ptc) += 1;
ptc -= 486;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 483;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 491;
while(*ptc) {
(*ptc) -= 1;
ptc += 489;
(*ptc) += 1;
ptc -= 489;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 489;
(*ptc) += 1;
ptc -= 489;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 489;
(*ptc) += 1;
ptc -= 489;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 486;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 494;
while(*ptc) {
(*ptc) -= 1;
ptc += 492;
(*ptc) += 1;
ptc -= 492;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 492;
(*ptc) += 1;
ptc -= 492;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 492;
(*ptc) += 1;
ptc -= 492;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 489;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 497;
while(*ptc) {
(*ptc) -= 1;
ptc += 495;
(*ptc) += 1;
ptc -= 495;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 495;
(*ptc) += 1;
ptc -= 495;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 495;
(*ptc) += 1;
ptc -= 495;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 492;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 500;
while(*ptc) {
(*ptc) -= 1;
ptc += 498;
(*ptc) += 1;
ptc -= 498;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 498;
(*ptc) += 1;
ptc -= 498;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 498;
(*ptc) += 1;
ptc -= 498;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 495;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 503;
while(*ptc) {
(*ptc) -= 1;
ptc += 501;
(*ptc) += 1;
ptc -= 501;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 501;
(*ptc) += 1;
ptc -= 501;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 501;
(*ptc) += 1;
ptc -= 501;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 498;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 506;
while(*ptc) {
(*ptc) -= 1;
ptc += 504;
(*ptc) += 1;
ptc -= 504;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 504;
(*ptc) += 1;
ptc -= 504;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 504;
(*ptc) += 1;
ptc -= 504;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 501;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 509;
while(*ptc) {
(*ptc) -= 1;
ptc += 507;
(*ptc) += 1;
ptc -= 507;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 507;
(*ptc) += 1;
ptc -= 507;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 507;
(*ptc) += 1;
ptc -= 507;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 504;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 512;
while(*ptc) {
(*ptc) -= 1;
ptc += 510;
(*ptc) += 1;
ptc -= 510;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 510;
(*ptc) += 1;
ptc -= 510;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 510;
(*ptc) += 1;
ptc -= 510;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 507;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 515;
while(*ptc) {
(*ptc) -= 1;
ptc += 513;
(*ptc) += 1;
ptc -= 513;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 513;
(*ptc) += 1;
ptc -= 513;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 513;
(*ptc) += 1;
ptc -= 513;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 510;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 518;
while(*ptc) {
(*ptc) -= 1;
ptc += 516;
(*ptc) += 1;
ptc -= 516;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 516;
(*ptc) += 1;
ptc -= 516;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 516;
(*ptc) += 1;
ptc -= 516;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 513;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 521;
while(*ptc) {
(*ptc) -= 1;
ptc += 519;
(*ptc) += 1;
ptc -= 519;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 519;
(*ptc) += 1;
ptc -= 519;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 519;
(*ptc) += 1;
ptc -= 519;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 516;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 524;
while(*ptc) {
(*ptc) -= 1;
ptc += 522;
(*ptc) += 1;
ptc -= 522;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 522;
(*ptc) += 1;
ptc -= 522;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 522;
(*ptc) += 1;
ptc -= 522;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 519;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 527;
while(*ptc) {
(*ptc) -= 1;
ptc += 525;
(*ptc) += 1;
ptc -= 525;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 525;
(*ptc) += 1;
ptc -= 525;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 525;
(*ptc) += 1;
ptc -= 525;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 522;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 530;
while(*ptc) {
(*ptc) -= 1;
ptc += 528;
(*ptc) += 1;
ptc -= 528;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 528;
(*ptc) += 1;
ptc -= 528;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 528;
(*ptc) += 1;
ptc -= 528;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 525;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 533;
while(*ptc) {
(*ptc) -= 1;
ptc += 531;
(*ptc) += 1;
ptc -= 531;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 531;
(*ptc) += 1;
ptc -= 531;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 531;
(*ptc) += 1;
ptc -= 531;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 528;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 536;
while(*ptc) {
(*ptc) -= 1;
ptc += 534;
(*ptc) += 1;
ptc -= 534;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 534;
(*ptc) += 1;
ptc -= 534;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 534;
(*ptc) += 1;
ptc -= 534;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 531;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 539;
while(*ptc) {
(*ptc) -= 1;
ptc += 537;
(*ptc) += 1;
ptc -= 537;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 537;
(*ptc) += 1;
ptc -= 537;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 537;
(*ptc) += 1;
ptc -= 537;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 534;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 542;
while(*ptc) {
(*ptc) -= 1;
ptc += 540;
(*ptc) += 1;
ptc -= 540;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 540;
(*ptc) += 1;
ptc -= 540;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 540;
(*ptc) += 1;
ptc -= 540;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 537;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 545;
while(*ptc) {
(*ptc) -= 1;
ptc += 543;
(*ptc) += 1;
ptc -= 543;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 543;
(*ptc) += 1;
ptc -= 543;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 543;
(*ptc) += 1;
ptc -= 543;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 540;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 548;
while(*ptc) {
(*ptc) -= 1;
ptc += 546;
(*ptc) += 1;
ptc -= 546;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 546;
(*ptc) += 1;
ptc -= 546;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 546;
(*ptc) += 1;
ptc -= 546;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 543;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 551;
while(*ptc) {
(*ptc) -= 1;
ptc += 549;
(*ptc) += 1;
ptc -= 549;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 549;
(*ptc) += 1;
ptc -= 549;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 549;
(*ptc) += 1;
ptc -= 549;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 546;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 554;
while(*ptc) {
(*ptc) -= 1;
ptc += 552;
(*ptc) += 1;
ptc -= 552;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 552;
(*ptc) += 1;
ptc -= 552;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 552;
(*ptc) += 1;
ptc -= 552;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 549;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 557;
while(*ptc) {
(*ptc) -= 1;
ptc += 555;
(*ptc) += 1;
ptc -= 555;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 555;
(*ptc) += 1;
ptc -= 555;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 555;
(*ptc) += 1;
ptc -= 555;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 552;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 560;
while(*ptc) {
(*ptc) -= 1;
ptc += 558;
(*ptc) += 1;
ptc -= 558;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 558;
(*ptc) += 1;
ptc -= 558;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 558;
(*ptc) += 1;
ptc -= 558;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 555;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 563;
while(*ptc) {
(*ptc) -= 1;
ptc += 561;
(*ptc) += 1;
ptc -= 561;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 561;
(*ptc) += 1;
ptc -= 561;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 561;
(*ptc) += 1;
ptc -= 561;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 558;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 566;
while(*ptc) {
(*ptc) -= 1;
ptc += 564;
(*ptc) += 1;
ptc -= 564;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 564;
(*ptc) += 1;
ptc -= 564;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 564;
(*ptc) += 1;
ptc -= 564;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 561;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 569;
while(*ptc) {
(*ptc) -= 1;
ptc += 567;
(*ptc) += 1;
ptc -= 567;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 567;
(*ptc) += 1;
ptc -= 567;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 567;
(*ptc) += 1;
ptc -= 567;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 564;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 572;
while(*ptc) {
(*ptc) -= 1;
ptc += 570;
(*ptc) += 1;
ptc -= 570;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 570;
(*ptc) += 1;
ptc -= 570;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 570;
(*ptc) += 1;
ptc -= 570;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 567;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 575;
while(*ptc) {
(*ptc) -= 1;
ptc += 573;
(*ptc) += 1;
ptc -= 573;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 573;
(*ptc) += 1;
ptc -= 573;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 573;
(*ptc) += 1;
ptc -= 573;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 570;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 578;
while(*ptc) {
(*ptc) -= 1;
ptc += 576;
(*ptc) += 1;
ptc -= 576;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 576;
(*ptc) += 1;
ptc -= 576;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 576;
(*ptc) += 1;
ptc -= 576;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 573;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 581;
while(*ptc) {
(*ptc) -= 1;
ptc += 579;
(*ptc) += 1;
ptc -= 579;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 579;
(*ptc) += 1;
ptc -= 579;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 579;
(*ptc) += 1;
ptc -= 579;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 576;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 584;
while(*ptc) {
(*ptc) -= 1;
ptc += 582;
(*ptc) += 1;
ptc -= 582;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 582;
(*ptc) += 1;
ptc -= 582;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 582;
(*ptc) += 1;
ptc -= 582;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 579;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 587;
while(*ptc) {
(*ptc) -= 1;
ptc += 585;
(*ptc) += 1;
ptc -= 585;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 585;
(*ptc) += 1;
ptc -= 585;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 585;
(*ptc) += 1;
ptc -= 585;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 582;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 590;
while(*ptc) {
(*ptc) -= 1;
ptc += 588;
(*ptc) += 1;
ptc -= 588;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 588;
(*ptc) += 1;
ptc -= 588;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 588;
(*ptc) += 1;
ptc -= 588;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 585;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 593;
while(*ptc) {
(*ptc) -= 1;
ptc += 591;
(*ptc) += 1;
ptc -= 591;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 591;
(*ptc) += 1;
ptc -= 591;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 591;
(*ptc) += 1;
ptc -= 591;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 588;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 596;
while(*ptc) {
(*ptc) -= 1;
ptc += 594;
(*ptc) += 1;
ptc -= 594;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 594;
(*ptc) += 1;
ptc -= 594;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 594;
(*ptc) += 1;
ptc -= 594;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 591;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 599;
while(*ptc) {
(*ptc) -= 1;
ptc += 597;
(*ptc) += 1;
ptc -= 597;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 597;
(*ptc) += 1;
ptc -= 597;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 597;
(*ptc) += 1;
ptc -= 597;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 594;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 602;
while(*ptc) {
(*ptc) -= 1;
ptc += 600;
(*ptc) += 1;
ptc -= 600;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 600;
(*ptc) += 1;
ptc -= 600;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 600;
(*ptc) += 1;
ptc -= 600;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 597;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 605;
while(*ptc) {
(*ptc) -= 1;
ptc += 603;
(*ptc) += 1;
ptc -= 603;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 603;
(*ptc) += 1;
ptc -= 603;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 603;
(*ptc) += 1;
ptc -= 603;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 600;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 608;
while(*ptc) {
(*ptc) -= 1;
ptc += 606;
(*ptc) += 1;
ptc -= 606;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 606;
(*ptc) += 1;
ptc -= 606;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 606;
(*ptc) += 1;
ptc -= 606;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 603;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 611;
while(*ptc) {
(*ptc) -= 1;
ptc += 609;
(*ptc) += 1;
ptc -= 609;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 609;
(*ptc) += 1;
ptc -= 609;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 609;
(*ptc) += 1;
ptc -= 609;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 606;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 614;
while(*ptc) {
(*ptc) -= 1;
ptc += 612;
(*ptc) += 1;
ptc -= 612;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 612;
(*ptc) += 1;
ptc -= 612;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 612;
(*ptc) += 1;
ptc -= 612;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 609;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 617;
while(*ptc) {
(*ptc) -= 1;
ptc += 615;
(*ptc) += 1;
ptc -= 615;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 615;
(*ptc) += 1;
ptc -= 615;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 615;
(*ptc) += 1;
ptc -= 615;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 612;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 620;
while(*ptc) {
(*ptc) -= 1;
ptc += 618;
(*ptc) += 1;
ptc -= 618;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 618;
(*ptc) += 1;
ptc -= 618;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 618;
(*ptc) += 1;
ptc -= 618;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 615;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 623;
while(*ptc) {
(*ptc) -= 1;
ptc += 621;
(*ptc) += 1;
ptc -= 621;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 621;
(*ptc) += 1;
ptc -= 621;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 621;
(*ptc) += 1;
ptc -= 621;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 618;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 626;
while(*ptc) {
(*ptc) -= 1;
ptc += 624;
(*ptc) += 1;
ptc -= 624;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 624;
(*ptc) += 1;
ptc -= 624;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 624;
(*ptc) += 1;
ptc -= 624;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 621;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 629;
while(*ptc) {
(*ptc) -= 1;
ptc += 627;
(*ptc) += 1;
ptc -= 627;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 627;
(*ptc) += 1;
ptc -= 627;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 627;
(*ptc) += 1;
ptc -= 627;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 624;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 632;
while(*ptc) {
(*ptc) -= 1;
ptc += 630;
(*ptc) += 1;
ptc -= 630;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 630;
(*ptc) += 1;
ptc -= 630;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 630;
(*ptc) += 1;
ptc -= 630;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 627;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 635;
while(*ptc) {
(*ptc) -= 1;
ptc += 633;
(*ptc) += 1;
ptc -= 633;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 633;
(*ptc) += 1;
ptc -= 633;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 633;
(*ptc) += 1;
ptc -= 633;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 630;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 638;
while(*ptc) {
(*ptc) -= 1;
ptc += 636;
(*ptc) += 1;
ptc -= 636;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 636;
(*ptc) += 1;
ptc -= 636;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 636;
(*ptc) += 1;
ptc -= 636;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 633;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 641;
while(*ptc) {
(*ptc) -= 1;
ptc += 639;
(*ptc) += 1;
ptc -= 639;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 639;
(*ptc) += 1;
ptc -= 639;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 639;
(*ptc) += 1;
ptc -= 639;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 636;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 644;
while(*ptc) {
(*ptc) -= 1;
ptc += 642;
(*ptc) += 1;
ptc -= 642;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 642;
(*ptc) += 1;
ptc -= 642;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 642;
(*ptc) += 1;
ptc -= 642;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 639;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 647;
while(*ptc) {
(*ptc) -= 1;
ptc += 645;
(*ptc) += 1;
ptc -= 645;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 645;
(*ptc) += 1;
ptc -= 645;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 645;
(*ptc) += 1;
ptc -= 645;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 642;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 650;
while(*ptc) {
(*ptc) -= 1;
ptc += 648;
(*ptc) += 1;
ptc -= 648;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 648;
(*ptc) += 1;
ptc -= 648;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 648;
(*ptc) += 1;
ptc -= 648;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 645;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 653;
while(*ptc) {
(*ptc) -= 1;
ptc += 651;
(*ptc) += 1;
ptc -= 651;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 651;
(*ptc) += 1;
ptc -= 651;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 651;
(*ptc) += 1;
ptc -= 651;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 648;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 656;
while(*ptc) {
(*ptc) -= 1;
ptc += 654;
(*ptc) += 1;
ptc -= 654;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 654;
(*ptc) += 1;
ptc -= 654;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 654;
(*ptc) += 1;
ptc -= 654;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 651;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 659;
while(*ptc) {
(*ptc) -= 1;
ptc += 657;
(*ptc) += 1;
ptc -= 657;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 657;
(*ptc) += 1;
ptc -= 657;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 657;
(*ptc) += 1;
ptc -= 657;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 654;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 662;
while(*ptc) {
(*ptc) -= 1;
ptc += 660;
(*ptc) += 1;
ptc -= 660;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 660;
(*ptc) += 1;
ptc -= 660;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 660;
(*ptc) += 1;
ptc -= 660;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 657;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 665;
while(*ptc) {
(*ptc) -= 1;
ptc += 663;
(*ptc) += 1;
ptc -= 663;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 663;
(*ptc) += 1;
ptc -= 663;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 663;
(*ptc) += 1;
ptc -= 663;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 660;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 668;
while(*ptc) {
(*ptc) -= 1;
ptc += 666;
(*ptc) += 1;
ptc -= 666;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 666;
(*ptc) += 1;
ptc -= 666;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 666;
(*ptc) += 1;
ptc -= 666;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 663;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 671;
while(*ptc) {
(*ptc) -= 1;
ptc += 669;
(*ptc) += 1;
ptc -= 669;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 669;
(*ptc) += 1;
ptc -= 669;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 669;
(*ptc) += 1;
ptc -= 669;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 666;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 674;
while(*ptc) {
(*ptc) -= 1;
ptc += 672;
(*ptc) += 1;
ptc -= 672;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 672;
(*ptc) += 1;
ptc -= 672;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 672;
(*ptc) += 1;
ptc -= 672;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 669;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 677;
while(*ptc) {
(*ptc) -= 1;
ptc += 675;
(*ptc) += 1;
ptc -= 675;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 675;
(*ptc) += 1;
ptc -= 675;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 675;
(*ptc) += 1;
ptc -= 675;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 672;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 680;
while(*ptc) {
(*ptc) -= 1;
ptc += 678;
(*ptc) += 1;
ptc -= 678;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 678;
(*ptc) += 1;
ptc -= 678;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 678;
(*ptc) += 1;
ptc -= 678;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 675;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 683;
while(*ptc) {
(*ptc) -= 1;
ptc += 681;
(*ptc) += 1;
ptc -= 681;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 681;
(*ptc) += 1;
ptc -= 681;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 681;
(*ptc) += 1;
ptc -= 681;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 678;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 686;
while(*ptc) {
(*ptc) -= 1;
ptc += 684;
(*ptc) += 1;
ptc -= 684;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 684;
(*ptc) += 1;
ptc -= 684;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 684;
(*ptc) += 1;
ptc -= 684;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 681;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 689;
while(*ptc) {
(*ptc) -= 1;
ptc += 687;
(*ptc) += 1;
ptc -= 687;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 687;
(*ptc) += 1;
ptc -= 687;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 687;
(*ptc) += 1;
ptc -= 687;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 684;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 692;
while(*ptc) {
(*ptc) -= 1;
ptc += 690;
(*ptc) += 1;
ptc -= 690;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 690;
(*ptc) += 1;
ptc -= 690;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 690;
(*ptc) += 1;
ptc -= 690;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 687;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 695;
while(*ptc) {
(*ptc) -= 1;
ptc += 693;
(*ptc) += 1;
ptc -= 693;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 693;
(*ptc) += 1;
ptc -= 693;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 693;
(*ptc) += 1;
ptc -= 693;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 690;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 698;
while(*ptc) {
(*ptc) -= 1;
ptc += 696;
(*ptc) += 1;
ptc -= 696;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 696;
(*ptc) += 1;
ptc -= 696;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 696;
(*ptc) += 1;
ptc -= 696;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 693;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 701;
while(*ptc) {
(*ptc) -= 1;
ptc += 699;
(*ptc) += 1;
ptc -= 699;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 699;
(*ptc) += 1;
ptc -= 699;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 699;
(*ptc) += 1;
ptc -= 699;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 696;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 704;
while(*ptc) {
(*ptc) -= 1;
ptc += 702;
(*ptc) += 1;
ptc -= 702;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 702;
(*ptc) += 1;
ptc -= 702;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 702;
(*ptc) += 1;
ptc -= 702;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 699;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 707;
while(*ptc) {
(*ptc) -= 1;
ptc += 705;
(*ptc) += 1;
ptc -= 705;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 705;
(*ptc) += 1;
ptc -= 705;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 705;
(*ptc) += 1;
ptc -= 705;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 702;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 710;
while(*ptc) {
(*ptc) -= 1;
ptc += 708;
(*ptc) += 1;
ptc -= 708;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 708;
(*ptc) += 1;
ptc -= 708;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 708;
(*ptc) += 1;
ptc -= 708;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 705;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 713;
while(*ptc) {
(*ptc) -= 1;
ptc += 711;
(*ptc) += 1;
ptc -= 711;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 711;
(*ptc) += 1;
ptc -= 711;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 711;
(*ptc) += 1;
ptc -= 711;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 708;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 716;
while(*ptc) {
(*ptc) -= 1;
ptc += 714;
(*ptc) += 1;
ptc -= 714;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 714;
(*ptc) += 1;
ptc -= 714;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 714;
(*ptc) += 1;
ptc -= 714;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 711;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 719;
while(*ptc) {
(*ptc) -= 1;
ptc += 717;
(*ptc) += 1;
ptc -= 717;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 717;
(*ptc) += 1;
ptc -= 717;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 717;
(*ptc) += 1;
ptc -= 717;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 714;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 722;
while(*ptc) {
(*ptc) -= 1;
ptc += 720;
(*ptc) += 1;
ptc -= 720;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 720;
(*ptc) += 1;
ptc -= 720;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 720;
(*ptc) += 1;
ptc -= 720;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 717;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 725;
while(*ptc) {
(*ptc) -= 1;
ptc += 723;
(*ptc) += 1;
ptc -= 723;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 723;
(*ptc) += 1;
ptc -= 723;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 723;
(*ptc) += 1;
ptc -= 723;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 720;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 728;
while(*ptc) {
(*ptc) -= 1;
ptc += 726;
(*ptc) += 1;
ptc -= 726;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 726;
(*ptc) += 1;
ptc -= 726;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 726;
(*ptc) += 1;
ptc -= 726;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 723;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 731;
while(*ptc) {
(*ptc) -= 1;
ptc += 729;
(*ptc) += 1;
ptc -= 729;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 729;
(*ptc) += 1;
ptc -= 729;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 729;
(*ptc) += 1;
ptc -= 729;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 726;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 734;
while(*ptc) {
(*ptc) -= 1;
ptc += 732;
(*ptc) += 1;
ptc -= 732;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 732;
(*ptc) += 1;
ptc -= 732;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 732;
(*ptc) += 1;
ptc -= 732;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 729;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 737;
while(*ptc) {
(*ptc) -= 1;
ptc += 735;
(*ptc) += 1;
ptc -= 735;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 735;
(*ptc) += 1;
ptc -= 735;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 735;
(*ptc) += 1;
ptc -= 735;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 732;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 740;
while(*ptc) {
(*ptc) -= 1;
ptc += 738;
(*ptc) += 1;
ptc -= 738;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 738;
(*ptc) += 1;
ptc -= 738;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 738;
(*ptc) += 1;
ptc -= 738;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 735;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 743;
while(*ptc) {
(*ptc) -= 1;
ptc += 741;
(*ptc) += 1;
ptc -= 741;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 741;
(*ptc) += 1;
ptc -= 741;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 741;
(*ptc) += 1;
ptc -= 741;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 738;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 746;
while(*ptc) {
(*ptc) -= 1;
ptc += 744;
(*ptc) += 1;
ptc -= 744;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 744;
(*ptc) += 1;
ptc -= 744;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 744;
(*ptc) += 1;
ptc -= 744;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 741;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 749;
while(*ptc) {
(*ptc) -= 1;
ptc += 747;
(*ptc) += 1;
ptc -= 747;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 747;
(*ptc) += 1;
ptc -= 747;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 747;
(*ptc) += 1;
ptc -= 747;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 744;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 752;
while(*ptc) {
(*ptc) -= 1;
ptc += 750;
(*ptc) += 1;
ptc -= 750;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 750;
(*ptc) += 1;
ptc -= 750;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 750;
(*ptc) += 1;
ptc -= 750;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 747;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 755;
while(*ptc) {
(*ptc) -= 1;
ptc += 753;
(*ptc) += 1;
ptc -= 753;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 753;
(*ptc) += 1;
ptc -= 753;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 753;
(*ptc) += 1;
ptc -= 753;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 750;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 758;
while(*ptc) {
(*ptc) -= 1;
ptc += 756;
(*ptc) += 1;
ptc -= 756;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 756;
(*ptc) += 1;
ptc -= 756;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 756;
(*ptc) += 1;
ptc -= 756;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 753;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 761;
while(*ptc) {
(*ptc) -= 1;
ptc += 759;
(*ptc) += 1;
ptc -= 759;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 759;
(*ptc) += 1;
ptc -= 759;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 759;
(*ptc) += 1;
ptc -= 759;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 756;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 764;
while(*ptc) {
(*ptc) -= 1;
ptc += 762;
(*ptc) += 1;
ptc -= 762;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 762;
(*ptc) += 1;
ptc -= 762;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 762;
(*ptc) += 1;
ptc -= 762;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 759;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 767;
while(*ptc) {
(*ptc) -= 1;
ptc += 765;
(*ptc) += 1;
ptc -= 765;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 765;
(*ptc) += 1;
ptc -= 765;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 765;
(*ptc) += 1;
ptc -= 765;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 762;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 770;
while(*ptc) {
(*ptc) -= 1;
ptc += 768;
(*ptc) += 1;
ptc -= 768;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 768;
(*ptc) += 1;
ptc -= 768;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 768;
(*ptc) += 1;
ptc -= 768;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 765;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 773;
while(*ptc) {
(*ptc) -= 1;
ptc += 771;
(*ptc) += 1;
ptc -= 771;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 771;
(*ptc) += 1;
ptc -= 771;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 771;
(*ptc) += 1;
ptc -= 771;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 768;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 776;
while(*ptc) {
(*ptc) -= 1;
ptc += 774;
(*ptc) += 1;
ptc -= 774;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 774;
(*ptc) += 1;
ptc -= 774;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 774;
(*ptc) += 1;
ptc -= 774;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 771;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 779;
while(*ptc) {
(*ptc) -= 1;
ptc += 777;
(*ptc) += 1;
ptc -= 777;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 777;
(*ptc) += 1;
ptc -= 777;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 777;
(*ptc) += 1;
ptc -= 777;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
ptc += 2;
(*ptc) -= 1;
ptc -= 2;
while(*ptc) {
ptc += 1;
}
ptc += 1;
(*ptc) += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 774;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc -= 782;
while(*ptc) {
(*ptc) -= 1;
ptc += 780;
(*ptc) += 1;
ptc -= 780;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 780;
(*ptc) += 1;
ptc -= 780;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc += 780;
(*ptc) += 1;
ptc -= 780;
}
ptc += 5;
(*ptc) += 1;
}
ptc -= 2;
(*ptc) -= 1;
while(*ptc) {
(*ptc) -= 1;
}
ptc += 8;
while(*ptc) {
(*ptc) -= 1;
ptc -= 784;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 200704;
}
ptc -= 16;
}
ptc -= 61;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 6;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 6;
}
ptc += 1;
while(*ptc) {
(*ptc) -= 1;
ptc -= 6;
(*ptc) += 1;
ptc += 6;
}
ptc -= 9;
}
}
while(1){;}
return 0;
}
