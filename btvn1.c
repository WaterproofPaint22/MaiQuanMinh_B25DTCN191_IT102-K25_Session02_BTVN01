#include <stdio.h>

int main() {
    short s = 10;                      // short: so nguyen nho, thuong 2 byte
    int i = 100;                       // int: so nguyen co kich thuoc tieu chuan, thuong 4 byte
    long l = 1000L;                    // long: so nguyen lon hon int, thuong 4 hoac 8 byte tuy he thong
    long long ll = 10000LL;            // long long: so nguyen rat lon, thuong 8 byte
    unsigned short us = 20;            // unsigned short: so nguyen khong dau nho, 2 byte, chi luu gia tri duong
    unsigned int ui = 200;             // unsigned int: so nguyen khong dau tieu chuan, 4 byte
    unsigned long ul = 2000UL;         // unsigned long: so nguyen khong dau lon hon int, 4 hoac 8 byte
    unsigned long long ull = 20000ULL; // unsigned long long: so nguyen khong dau rat lon, 8 byte
    char c = 'A';                      // char: ky tu don, thuong 1 byte

    // In ra cac gia tri de kiem tra
    printf("short: %d\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);
    printf("unsigned short: %hu\n", us);
    printf("unsigned int: %u\n", ui);
    printf("unsigned long: %lu\n", ul);
    printf("unsigned long long: %llu\n", ull);
    printf("char: %c\n", c);

    return 0;
}

