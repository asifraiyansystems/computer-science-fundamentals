#include <stdio.h>

int main()
{

    ///////1. Basic / Primary Data Types///////
    // String
    char name[] = "Asib";
    printf("My name: %s\n", name);

    // int
    int age = 26;
    printf("My age: %d", age);

    // float
    float height = 5.5;
    printf("\nMy height: %f\n", height);

    // double
    double price = 25.2334223432;
    printf("Mobile Price: %lf\n", price);

    // char
    char grade = 'A';
    printf("\nGrade: %c\n", grade);

    ///////2. Type Modifiers///////
    // short int
    short int shortInt = 100;
    printf("short int: %d\n", shortInt);

    // long int
    long int longInt = 100000;
    printf("long int: %d\n", longInt);

    // long long int
    long long int longLongInt = 100000000;
    printf("long long int: %lld\n", longLongInt);

    // unsigned int
    unsigned int unsignedInt = 20;
    printf("unsigned int: %u\n", unsignedInt);

    // signed int
    signed int signedInt = 20;
    printf("signed int: %d\n", signedInt);


    ///////3. Derived Data Types///////
    // array
    int number[3] = {100, 200, 300};
    printf("Array int: %d %d %d\n", number[0], number[1], number[2]);

    // pointer
    int pointer = 10;
    int *ptr = &pointer;
    printf("Pointer value: %d\n", *ptr);
    printf("Pointer address: %p\n", ptr);

    return 0;
}