#include "main.h"
/**
 * select_func - point to the diferent functions depending the flags
 * Return: operator
 * @format: diferents flags
**/
int (*select_func(const char *format))(va_list arg)
{
	pf_t pfs[] = {
		{"d", pf_d},
		{"i", pf_i},
		{"s", pf_s},
		{"c", pf_c},
		{NULL, NULL}
	};
	int a = 0;

	while (pfs[a].pf != NULL)
	{
		if (*(pfs[a].pf) == *format)
		break;

		a++;
	}
	return (pfs[a].f);
}
