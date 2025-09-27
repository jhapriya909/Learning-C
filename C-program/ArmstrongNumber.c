#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check Armstrong number
bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int number = 153;
    if(isArmstrong(number))
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);
    return 0;
}
