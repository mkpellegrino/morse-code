#include <stdio.h>
const int BufferSize=256;
const char alphabet[26][6]=
  { ".-\0","-...\0","-.-.\0","-..\0",".\0","..-.\0","--.\0","....\0","..\0",".---\0","-.-\0",".-..\0","--\0","-.\0","---\0",".--.\0","--.-\0",".-.\0","...\0","-\0","..-\0","...-\0",".--\0","-..-\0","-.--\0","--..\0" };


void displayMorse(int i)
{
  int l=0;
  while( alphabet[i][l] != '\0' ) printf( "%c", alphabet[i][l++] );
}

int main(void)
{
  char text[BufferSize];
  int i=0;
  /* initialize input buffer */
  for( i=0;i<BufferSize;i++ ) text[i]='\0';

  printf( "\n\n\n\n\n\n\n+=============================================================+\n|- t e x t 2 m o r s e   b y :   m r .   p e l l e g r i n o -|\n+=============================================================+\n\nType letters to translate.  Type * to quit.\n\n" );

  while( text[0] != '*' )
    {
      int x;
      scanf( "%s", &text );
      unsigned long L = strlen( text );

      for( i=0;i<(int)L;i++ )
	{
	  x=text[i]-'a';
	  if( x<0 ) x=text[i]-'A';
	  displayMorse(x);
	  if( i < L-1 ) printf( "/" );
	}
      printf( "\n\n" );
      
    }
  return(0);
}
