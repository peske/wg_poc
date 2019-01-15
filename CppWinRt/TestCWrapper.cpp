#include "pch.h"
#include "TestCWrapper.h"
extern "C" {
	#include "TestC.h"
}

int TestCWrapper::Add(int a, int b)
{
	return AddC(a, b);
}