#include <stdio.h>
#include <stdint.h>

int main()
{
  int result = 0;
  const char* fname = "./input.txt";
  const char* up_char = "(";
  const char* down_char = ")";
  FILE* input = fopen(fname, "r");

  if( !input )
  {
    perror("Could not open file!");
  }

  int c;
  int counter = 0;
  while ((c = fgetc(input)) != EOF)
    {
      counter++;
      if( c == (int)up_char[0]) { result++; }
      if( c == (int)down_char[0]) { result--; }
      if( result == -1 )
      {
        printf("%i \n", counter);
        return 0;
      }
    }

  printf( "%i \n", result );
  return 0;
}
