#ifndef _ADDSUFFIX_H_
#define _ADDSUFFIX_H_ 1

#include <stdio.h>

void addSuffix(int num, char* buf, size_t len)
{
	char *suffixes[4] = { "th", "st", "nd", "rd" };
	int i;

	switch (num % 10)
	{
		case 1 : i = (num % 100 == 11) ? 0 : 1;
		         break;
		case 2 : i = (num % 100 == 12) ? 0 : 2;
		         break;
		case 3 : i = (num % 100 == 13) ? 0 : 3;
		         break;
		default: i = 0;
	};

	snprintf(buf, len, "%d%s", num, suffixes[i]);
}

#endif /* _ADDSUFFIX_H_ */
