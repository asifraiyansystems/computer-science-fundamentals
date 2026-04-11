#include <stdio.h>

int main()
{
    // 01. %d - Integer (Signed Decimal Integer)
    int a = 10;
    printf("%d\n", a);

    // 02. %i - Integer (Signed Integer)
    int b = 20;
    printf("%i\n", b);

    // 03. %u - Integer (Unsinged Decimal Integer)
    int c = 20;
    printf("%u\n", c);

    // 04. %ld - long int (Long int)
    long int d = 55644;
    printf("%ld\n", d);

    // 05. %lld - long long int (Long Long int)
    long long int e = 5464646464;
    printf("%lld\n", e);

    // 06. %c - char (Single Character)
    char singleChar = 'A';
    printf("%c\n", singleChar);

    // 07. %s - char[] (String)
    char stringValue[] = "Bangladesh";
    printf("%s\n", stringValue);

    // 08. %f - float (Floating point number)
    float floatingValue = 55.65;
    printf("%f\n", floatingValue);

    // 09. %lf - double (Double precision float)
    double doubleValue = 55.5555565;
    printf("%lf\n", doubleValue);

    // 10. %% - (Print % symbol)
    printf("100%%\n");

    return 0;
}