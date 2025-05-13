//
// Created by Matěj Musil on 12.05.2025.
//

#ifndef TRACKINGSTATE_H
#define TRACKINGSTATE_H
#include <iostream>

using std::cin;
using std::cout;

class TrackingState {
    public:static void trackingState() {
        char outputCharacter;
        enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
        modeType mode = UPPERCASE;
        char digitChar;
        cout << "Enter a number: ";

        do {
            digitChar = cin.get();
            int number = digitChar - '0';

            digitChar = cin.get();

            while(digitChar != 10 && digitChar != ',') {
                number = number * 10 + (digitChar - '0');
                digitChar = cin.get();
            }

            switch (mode) {
                case UPPERCASE:
                    number = number % 27;
                    outputCharacter = number + 'A' - 1;
                    if (number == 0) {
                        mode = LOWERCASE;
                        continue;
                    }
                    break;
                case LOWERCASE:
                    number = number % 27;
                    outputCharacter = number + 'a' - 1;
                    if (number == 0) {
                        mode = PUNCTUATION;
                        continue;
                    }
                    break;
                case PUNCTUATION:
                    number = number % 9;
                    switch (number) {
                        case 1: outputCharacter = '!'; break;
                        case 2: outputCharacter = '?'; break;
                        case 3: outputCharacter = ','; break;
                        case 4: outputCharacter = '.'; break;
                        case 5: outputCharacter = ' '; break;
                        case 6: outputCharacter = ';'; break;
                        case 7: outputCharacter = '"'; break;
                        case 8: outputCharacter = '\''; break;
                    }
                    if (number == 0) {
                        mode = UPPERCASE;
                        continue;
                    }
                    break;
            }

            cout << outputCharacter;
        } while (digitChar != 10);
        cout << "\n";
    }
};



#endif //TRACKINGSTATE_H
