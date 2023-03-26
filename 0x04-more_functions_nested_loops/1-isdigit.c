#include "main.h"
/**
 * isupper check upper case letter 
 * c character to be checked
 * return (1) if its upper case else 0
 */
int _isupper(int c)
{ 
   if (c <= 'A' && c >= 'Z')
	   return (1);
   else 
	   return (0);

}
