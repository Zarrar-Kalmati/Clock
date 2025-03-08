#include <stdio.h>
#include <windows.h> //header file for beep function and fflush function
int main() {
    int hr = 0, min = 0, sec = 0;
    while (1) {
        printf("\r%02d : %02d : %02d   ", hr, min, sec); // same row mai output ae isliye
        fflush(stdout);  // output rapidly update hoata rahe
        sec++;
        if (sec == 60) {
            //Beep(750,2000); // for crating beep sound like a alaram
            min++;
            sec = 0;
            if (min == 60) {
                hr++;
                min = 0;
                if (hr == 24) {
                    hr = 0;
                }
            }
        }
        Sleep(1000); // Pause for 1 second 
    }
    return 0;
}