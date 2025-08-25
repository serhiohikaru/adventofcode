#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  return 2 * l * w + 2 * w * h + 2 * h * l;
}

int min(int x, int y){
  return (x < y) ? x : y;
}

int calcSmallestSize(int w, int l, int h){
  int lw = l * w;
  int wh = w * h;
  int hl = h * l;
  if( hl < min(lw, wh) ){
    return hl;
  } else {
    return min(lw, wh);
  }
}

int main(){
  int w = 0, l = 0, h = 0;
  const char* fname = "./test_input.txt";
  FILE* input = fopen(fname, "r");
  int counter = 0;
  
  int c;
  while ((c = fgetc(input)) != EOF){
    switch (counter) {
      case 0:
        l = 
    }
  }

  printf("%i \n", l);
  printf("%i \n", w);
  printf("%i \n", h);

  return 0;
}
