#include<stdio.h>

int main(){

    char a = 'z';
    printf("%c\n",a);
    printf("%d\n",sizeof(a));
    printf("Range of Char Datatype : -128 to 127 or 0 to 255\n");

    unsigned char b = 'y';
    printf("%c\n",b);
    printf("%d\n",sizeof(b));
    printf("Range of Unsigned Char Datatype : 0 to 255\n");

    signed char c = 'x';
    printf("%c\n",c);
    printf("%d\n",sizeof(c));
    printf("Range of Signed Char Datatype : -128 to 127\n");

    int d = 10;
    printf("%d\n",d);
    printf("%d\n",sizeof(d));
    printf("Range of Singed Integer Datatype: -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647\n");

    unsigned int e = 11;
    printf("%i\n",e);
    printf("%d\n",sizeof(e));
    printf("Range of Unsigned Integer Datatype: 0 to 65,535 or 0 to 4,294,967,295\n");

    short f = 12;
    printf("%hi\n",f);
    printf("%d\n",sizeof(f));
    printf("Range of Singed Short Datatype: -32,768 to 32,767\n");

    unsigned short g = 13;
    printf("%hu\n",f);
    printf("%d\n",sizeof(f));
    printf("Range of Unsinged Short Datatype: 0 to 65,535\n");

    long h = 14;
    printf("%li\n",h);
    printf("%d\n",sizeof(h));
    printf("Range of Long Datatype: -9223372036854775808 to 9223372036854775807\n");

    unsigned long i = 15;
    printf("%lu\n",i);
    printf("%d\n",sizeof(i));
    printf("Range of Unsinged Long Datatype: 0 to 18446744073709551615\n");
    




    return 0;
}