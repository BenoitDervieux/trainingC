#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
        printf("INT_MAX value on this system = %d\n", INT_MAX);
        printf("INT_MIN value on this system = %d\n", INT_MIN);
        printf("CHAR_BIT value on this system = %d\n", CHAR_BIT);
        printf("CHAR_MAX value on this system = %d\n", CHAR_MAX);

        printf("CHAR_MIN value on this system = %d\n", CHAR_MIN);
        printf("SCHAR_MAX value on this system = %d\n", SCHAR_MAX);
        printf("SCHAR_MIN value on this system = %d\n", SCHAR_MIN);
        printf("UCHAR_MAX value on this system = %d\n", UCHAR_MAX);

        printf("SHRT_MAX value on this system = %d\n", SHRT_MAX);
        printf("SHRT_MIN value on this system = %d\n", SHRT_MIN);
        printf("USHRT_MAX value on this system = %d\n", USHRT_MAX);
        printf("UINT_MAX value on this system = %u\n", UINT_MAX);
        printf("LONG_MAX value on this system = %ld\n", LONG_MAX);
        printf("LONG_MIN value on this system = %ld\n", LONG_MIN);

        printf("ULONG_MAX value on this system = %lu\n", ULONG_MAX);
        printf("LLONG_MAX value on this system = %lld\n", LLONG_MAX);
        printf("LLONG_MIN value on this system = %lld\n", LLONG_MIN);
        printf("ULLONG_MAX value on this system = %llu\n", ULLONG_MAX);
        printf("\n\n");
        printf("FLT_MANT_DIG value on this system = %f\n", FLT_MANT_DIG);
        printf("FLT_DIG value on this system = %e\n", FLT_DIG);
        printf("FLT_MIN_10_EXP value on this system = %e\n", FLT_MIN_10_EXP);
        printf("FLT_MAX_10_EXP value on this system = %e\n", FLT_MAX_10_EXP);
        printf("FLT_MIN value on this system = %f\n", FLT_MIN);
        printf("FLT_MAX value on this system = %f\n", FLT_MAX);
        printf("FLT_EPSILON value on this system = %e\n", FLT_EPSILON);

} 