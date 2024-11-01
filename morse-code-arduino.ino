int ledPin = 13;

String message = "SECRET MESSAGE";

void setup() {
  // put your setup code here, to run once:
  pinMode( ledPin, OUTPUT );
}

void loop() {
  for( int i = 0; i < message.length(); i++ )
  {
    //
    switch( message[i] )
    {
      case ' ':
      space(); space(); space();
      break;
      case 'A':
      dit(); dah();
      break;
      case 'B':
      dah(); dit(); dit(); dit();
      break;
      case 'C':
      dah(); dit(); dah(); dit();
      break;
      case 'D':
      dah(); dit(); dit();
      break;
      case 'E':
      dit();
      break;
      case 'F':
      dit(); dit(); dah(); dit();
      break;
      case 'G':
      dah(); dah(); dit();
      break;
      case 'H':
      dit(); dit(); dit(); dit(); 
      break;
      case 'I':
      dit(); dit();
      break;
      case 'J':
      dit(); dah(); dah(); dah();
      break;
      case 'K':
      dah(); dit(); dah();
      break;
      case 'L':
      dit(); dah(); dit(); dit();
      break;
      case 'M':
      dah(); dah();
      break;
      case 'N':
      dah(); dit();
      break;
      case 'O':
      dah(); dah(); dah();
      break;
      case 'P':
      dit(); dah(); dah(); dit();
      break;
      case 'Q':
      dah(); dah(); dit(); dah();
      break;
      case 'R':
      dit(); dah(); dit();
      break;
      case 'S':
      dit(); dit(); dit();
      break;
      case 'T':
      dah();
      break;
      case 'U':
      dit(); dit(); dah();
      break;
      case 'V':
      dit(); dit(); dit(); dah();
      break;
      case 'W':
      dit(); dah(); dah();
      break;
      case 'X':
      dah(); dit(); dit(); dah();
      break;
      case 'Y':
      dah(); dit(); dah(); dah();
      break;
      case 'Z':
      dah(); dah(); dit(); dit();
      break;
      default:
      break;
    }
    delay( 400 ); // space between letters is 3 dits
  }  
  delay(1000);
}


void dit()
{
  digitalWrite( ledPin, HIGH );
  delay( 200 );
  digitalWrite( ledPin, LOW );
  delay( 200 );
  return;
}  
  
void dah()
{
  digitalWrite( ledPin, HIGH );
  delay( 600 );
  digitalWrite( ledPin, LOW );
  delay( 200 );
  return;
}  

void space()
{
  digitalWrite( ledPin, LOW );
  delay( 800 );
  return;
}
