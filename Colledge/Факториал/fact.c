#include <windows.h>
#include <userint.h>
/* Call Library Source File */

#include "extcode.h"
#include "fact.h"

long fact(long n)
{
	static long i, f;
	if(n<0)
	{
		//MessagePopup ("Ошибочка!", "Значение отрицательно!");
		MessageBox (0,"Отрицательное число\nN! определен только для нуля и натуральных чисел", "О Ш И Б К А", MB_OK);
		return -1;
	}
	f=1;
	for (i=0;i<n;++i)  
		f=f*(i+1);
	return f;
}
