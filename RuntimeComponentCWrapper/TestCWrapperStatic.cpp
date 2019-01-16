#include "pch.h"
#include "TestCWrapperStatic.h"
extern "C" {
	#include "TestC.h"
}

namespace winrt::RuntimeComponentCWrapper::implementation
{
    int32_t TestCWrapperStatic::Add(int32_t a, int32_t b)
    {
        return AddC(a, b);
    }
}
