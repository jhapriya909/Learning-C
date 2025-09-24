#include <stdio.h>
#include <stdbool.h>

// Function to check leap year
bool isLeapYear(int year) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int main() {
    int year = 2024;
    if(isLeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
    return 0;
}
