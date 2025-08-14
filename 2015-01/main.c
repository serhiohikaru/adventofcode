#include <stdio.h>
#include <stdint.h>

int main()
{
  int result;
  const char* fname = "./input.txt";
  const char* up_char = "(";
  const char* down_char = ")";
  FILE* input = fopen(fname, "r");
  if( !input )
  {
    perror("Could not open file!");
  }

  int c; // note: int, not char, required to handle EOF
  while ((c = fgetc(input)) != EOF) // standard C I/O file reading loop
    {
      if( (uint8_t)c == up_char[0]) result = result + 1;
      if( (uint8_t)c == down_char[0]) result = result - 1;
    }

  printf( "%i", result );
  return 0;
}
