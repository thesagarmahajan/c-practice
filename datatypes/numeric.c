#include<stdio.h>
int main()
{
    /* code */
    int integerNumber = 10; // 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    unsigned int unsignedInt = 64000; // 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295
    long longNumber = 123432; // 8 bytes or 4 bytes | -9223372036854775808 to 9223372036854775807
    unsigned unsignedLong = 18446744073709551615; // 8 bytes | 0 to 18446744073709551615

    // Floating-point types
    float floatNumber = 1.5; // 4 Bytes | 6 Decimal Places
    double doubleNumber = 12939248.189247123; // 8 byte | 15 decimal places
    long double longDoubleNumber = 12939248.18924721798759875; // 10 byte | 19 decimal places
    
    printf("Integer = %d\n", integerNumber); 
    printf("Unsigned Int = %u\n", unsignedInt);
    printf("Long Number = %ld\n", longNumber);
    printf("Unsigned Long = %lu\n", unsignedLong); // Printing Diff
    printf("Float = %f\n", floatNumber);
    printf("Double Number = %lf\n", doubleNumber); // Printing Diff
    printf("Long Double = %Lf", longDoubleNumber); // Printing Diff
}

