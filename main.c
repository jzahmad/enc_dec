#include <stdio.h>

int main(void) {
  
  int inChar, outChar;
  
  while ((inChar = getchar()) != EOF) {
    
    int first = 0;
    int last = 0;
    
    //first three
    if ('A' <= inChar && inChar <= 'Z') {
      first = inChar ^ 0x20;
    } else {
      first = inChar;
    }

    
    int range = first - 'a' + 1;
    first = first >> 5;
    first = first << 5;

    // last five digit
    int i = 1;
    int n = 0;
    
    for (int j = 0; j < range; j++) {
      
      if (i < 4) {
        last = (8 * i) + n;
        i++;
      } else {
        
        i = 0;
        n++;
        range++;
      }
    }
    
    outChar = last | first;
    if ('A' <= inChar && inChar <= 'Z') {
      outChar = outChar ^ 0x20;
    }
    
    putchar(outChar);
  }
  
  return 0;
}
