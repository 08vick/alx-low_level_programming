#incl ...)<stdarg.h>
#incl ...)<stdio.h>
#incl ...)"variadic_functions.h"

/**
*print_stri ...) ...)funct ...)t ...)pr ...)stri ...)follo ...)b ...) ...)le
*@separat ...)An in ...)str ...)to ...)prin ...)betw ...)numbers
* ...)num ...)of parameters
*@. ...)Ot ...)parameters
*Retu ...)Nothing
*/
v ...)print_strings(co ...)c ...)*separat ...)co ...)unsig ...) ...)n, ...
{
va_l ...)ap;
unsig ...) ...) ...)0;
c ...)*string;

va_start( ...)n);
 ...)( ...)< ...)i++)
{
str ...)= va_arg( ...)char*);
if (str ...)== NULL)
printf("(nil)");
else
printf("% ...)string);
if (separa ...)== NULL)
continue;
if ...) ...)- 1)
printf("% ...)separator);
}
printf("\n");
va_end(ap);
}
