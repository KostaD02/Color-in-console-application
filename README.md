# Color in console application

Usage : <br>

• First include color.h <br>
• Second Use function as we want to color line <br>

Colors number : <br>
0: Black <br>
1: Blue <br>
2: Green <br>
3: Cyan <br>
4: Red <br>
5: Magenta <br>
6: Brown <br>
7: Lightgray <br>
8: Darkgray <br>
9: Ligthblue <br>
10: Ligthgreen <br>
11: Lightcyan <br>
12: Ligthred <br>
13: Lightmagenta <br>
14: Yellow <br>
15: White <br>
<br>

Simple test : <br>

```cpp
#include <iostream>
#include <color.h>

int main(int argc, char** argv){
    std::cout<<"Standart color"<<std::endl;
    const char *colors[16] = {
    "Black","Blue","Green",
    "Cyan","Red","Magenta",
    "Brown","Lightgray","Darkgray",
    "Ligthblue","Ligthgreen","Lightcyan",
    "Ligthred","Lightmagenta","Yellow","White"};
    for(int i=0;i<16;i++){
    	Coloring(i);
    	std::cout<<"Simple test for "<<colors[i]<<" color"<<std::endl;
	}
	return 0;
}

```

# Code by Konstantine Datunishvili
