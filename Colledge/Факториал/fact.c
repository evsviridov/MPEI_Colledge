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
		//MessagePopup ("��������!", "�������� ������������!");
		MessageBox (0,"������������� �����\nN! ��������� ������ ��� ���� � ����������� �����", "� � � � � �", MB_OK);
		return -1;
	}
	f=1;
	for (i=0;i<n;++i)  
		f=f*(i+1);
	return f;
}
