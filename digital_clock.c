#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
    int Hrs, Min, Sec;
    int delay = 1000;      // Delay in milliseconds == 1 second

    printf("Set Time: \n");
    printf("Enter Hour: ");
    scanf("%d", &Hrs);
    printf("Enter Minute: ");
    scanf("%d", &Min);
    printf("Enter Second: ");
    scanf("%d", &Sec);

    if(Hrs < 1 || Hrs > 23 || Min < 0 || Min > 59 || Sec < 0 || Sec > 59) {
        printf("ERROR!! Invalid Time Input\n");
        return 1;
    }

    while(1) {
        Sec++;

        if(Sec >= 60) {
            Sec = 0;
            Min++;
        }
        if(Min >= 60) {
            Min = 0;
            Hrs++;
        }
        if(Hrs >= 24) {
            Hrs = 0;
        }
        
        printf("DIGITAL CLOCK\n");
        printf("%02d:%02d:%02d\n", Hrs, Min, Sec);
        
        Sleep(delay);       // Delay of 1 second
        system("cls");      // Clear the console screen every second

    }

    
    return 0;
}