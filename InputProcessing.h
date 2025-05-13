//
// Created by Matěj Musil on 12.05.2025.
//

#ifndef INPUTPROCESSING_H
#define INPUTPROCESSING_H
#include <iostream>

using std::cin;
using std::cout;
/*Luhn checksum validation*/
class InputProcessing {
    static int doubleDigitValue(int digit) {
        int doubledDigit = digit * 2;
        int sum;

        if (doubledDigit >= 10) {
            sum = 1 + doubledDigit % 10;
        } else {
            sum = doubledDigit;
        }

        return sum;
    }

    public:static void printOut() {
        char digit;
        int oddLengthChecksum = 0;
        int evenLengthChecksum = 0;
        int position = 1;

        cout << "Enter a number: ";
        digit = cin.get();

        while (digit != 10) {
            if (position % 2 == 0) {
                oddLengthChecksum += doubleDigitValue(digit - '0');
                evenLengthChecksum += digit - '0';
            } else {
                evenLengthChecksum += doubleDigitValue(digit - '0');
                oddLengthChecksum += digit - '0';
            }
            digit = cin.get();
            position++;
        }

        int checksum;

        if ((position - 1) % 2 == 0) {
            checksum = evenLengthChecksum;
        } else {
            checksum = oddLengthChecksum;
        }
        cout << "Checksum is " << checksum << ". \n";

        if (checksum % 10 == 0) {
            cout << "valid";
        } else {
            cout << "invalid";
        }

    }
};



#endif //INPUTPROCESSING_H
