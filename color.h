#include <windows.h>
/* colors will be generated , as function take number 
   0) Black
   1) Blue
   2) Green
   3) Cyan 
   4) Red
   5) Magenta
   6) Brown
   7) Lightgray
   8) Darkgray
   9) Ligthblue
   10) Ligthgreen
   11) Lightcyan
   12) Ligthred
   13) Lightmagenta
   14) Yellow
   15) White
*/
unsigned int Coloring(unsigned int number=15){
    unsigned int temp = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    temp = SetConsoleTextAttribute(hConsole, number);
    return temp;
}