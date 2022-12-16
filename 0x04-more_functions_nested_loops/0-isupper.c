#include "main.h"

/**
 * _isupper: to get upper case
*
* @c: is upper case latter
*
* Return: 0 success
*/

int _isupper(int c)
{
    
   if (c >= 'A' && c <= 'Z')
   {
       return(1);
   }
   else 
   {
       return(0);
   }
}
