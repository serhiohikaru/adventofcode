#include <stdio.h>

int getRectSurfArea(int w, int l, int h){
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
  int result = 0;
  const char* fname = "./input.txt";
  const char* delimeter = "x";
  const char* newline = "\n";
  FILE* input = fopen(fname, "r");

  if( !input ){
    perror("Could not open file!");
  }

  int c;
  int x_cnt = 0;
  char* length;
  while ((c = fgetc(input)) != EOF){
    if (x_cnt == 0){
      length[0] = (char)c;
      printf("%s \n", length);
      return 0;
    }
  }

  return 0;
}
