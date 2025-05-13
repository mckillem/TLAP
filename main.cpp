
#include "InputProcessing.h"
#include "TrackingState.h"

int main() {
    /**
     *  lekce 2
     */
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 6 - i; j++) {
    //         cout << "#";
    //     }
    //
    //     cout << "\n";
    // }

    // for (int i = 1; i <= 7; i++) {
    //     for (int j = 1; j <= 4 - abs(4 - i); j++) {
    //         cout << "#";
    //     }
    //
    //     cout << "\n";
    // }

    // InputProcessing::printOut();

    // TrackingState::trackingState();

    /**
     * 2.1
     */
    // int length = 8;
    //
    // for (int i = 1; i <= 4; i++) {
        // for (int j = 1; j <= 8 - i * 2; j++) {

        /*
         * vypíše jich osm na řádek
         */
        // for (int j = 1; j <= 8; j++) {
        //     cout << "#";
        // }

        /*
         * vypsání šesti na řádek
         */
        // for (int j = 1; j <= 6; j++) {
        //     cout << "#";
        // }

        /*vypsání správného počtu #*/
        // for (int j = 1; j <= length; j++) {
        //     cout << "#";
        // }

        /*vypsání i s mezerama na začátku*/



        // cout << "\n";
        // length -= 2;

        /*vypsání mezer na začátku*/
        // for (int j = 1; j <= i; j++) {
        //     cout << " ";
        // }
    // }


    /**
    * 2.2
    */
    int length = 2;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= length; j++) {
            cout << "#";
        }
        cout << "\n";
        length += 2;
    }

    int length2 = 8;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= length2; j++) {
            cout << "#";
        }
        cout << "\n";
        length2 -= 2;
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
    }
}

