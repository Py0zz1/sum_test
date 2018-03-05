#include "sum.h"

int sum(int begin,int end)
{
	int result=0;
	for(begin; begin<=end; begin++)
	{
		result+=begin;
	}
	return result;
}


