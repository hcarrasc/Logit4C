
/*
  Name: Logit4C.h
  Author: Héctor Carrasco
  Date: 02-02-16 12:14
  Description: Log what you need. Import this file in your souce code.
*/

#import "logit.c"
#define _F_ __FUNCTION__
#define _L_ __LINE__

void logit(char* text, char* function, int line);
