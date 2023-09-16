#include <stdio.h>
#include "main.h"

// Define the _isupper function
int _isupper(int c);
int main (){
	int c;
    if (c >= 'A' && c <= 'Z') {
        return 1; // c is uppercase
    } else {
        return 0; // c is not uppercase
    }
}
