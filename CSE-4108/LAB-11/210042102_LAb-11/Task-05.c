#include <stdio.h>
int main()
{
    double a = 1.77, *p = &a;
    int b = 5, *q = &b;
    char c = 'Q', *r = &c;

    printf("The address of char c is %p\n", &c);
    printf("The address of double a is %p\n", &a);
    printf("The address of int b is %p\n", &b);

    printf("The address of char* r is %p\n", &r);
    printf("The address of double* p is %p\n", &p);
    printf("The address of int* q is %p\n", &q);

    printf("The value of char c is %c\n", c);
    printf("The value of double a is %lf\n", a);
    printf("The value of int b is %d\n", b);

    printf("The value of char* r is %d\n", r);
    printf("The value of double* p is %d\n", p);
    printf("The value of int* q is %d\n", q);

    printf("The size of of char c is %ld\n", sizeof(c));
    printf("The size of of double a is %ld\n", sizeof(a));
    printf("The size of of int b is %ld\n", sizeof(b));

    printf("The size of of char* r is %ld\n", sizeof(r));
    printf("The size of of double* p is %ld\n", sizeof(p));
    printf("The size of of int* q is %ld\n", sizeof(q));


    return 0;

}

