#include "pch.h"
#include "TestCWrapper.h"
extern "C" {
	#include "TestC.h"
}

namespace winrt::RuntimeComponentCWrapper::implementation
{
    int32_t TestCWrapper::Add(int32_t a, int32_t b)
    {
        return AddC(a, b);
    }
}
