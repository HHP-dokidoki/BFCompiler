#include <stdio.h>
unsigned char array[3000] = {0};
char* ptc = array;
int main()
{
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
while(*ptc) {
ptc++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
while(*ptc) {
ptc++;
(*ptc)++;
(*ptc)++;
ptc++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
ptc++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
ptc++;
(*ptc)++;
ptc--;
ptc--;
ptc--;
ptc--;
(*ptc)--;
}
ptc++;
(*ptc)++;
ptc++;
(*ptc)++;
ptc++;
(*ptc)--;
ptc++;
ptc++;
(*ptc)++;
while(*ptc) {
ptc--;
}
ptc--;
(*ptc)--;
}
ptc++;
ptc++;
printf("%c", *ptc);
ptc++;
(*ptc)--;
(*ptc)--;
(*ptc)--;
printf("%c", *ptc);
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
(*ptc)++;
printf("%c", *ptc);
printf("%c", *ptc);
(*ptc)++;
(*ptc)++;
(*ptc)++;
printf("%c", *ptc);
ptc++;
ptc++;
printf("%c", *ptc);
ptc--;
(*ptc)--;
printf("%c", *ptc);
ptc--;
printf("%c", *ptc);
(*ptc)++;
(*ptc)++;
(*ptc)++;
printf("%c", *ptc);
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
printf("%c", *ptc);
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
(*ptc)--;
printf("%c", *ptc);
ptc++;
ptc++;
(*ptc)++;
printf("%c", *ptc);
ptc++;
(*ptc)++;
(*ptc)++;
printf("%c", *ptc);
while(1){;}
return 0;
}
