#pragma once

#include "TestCWrapper.g.h"

namespace winrt::RuntimeComponentCWrapper::implementation
{
    struct TestCWrapper : TestCWrapperT<TestCWrapper>
    {
		TestCWrapper() = default;

        int32_t Add(int32_t a, int32_t b);
    };
}

namespace winrt::RuntimeComponentCWrapper::factory_implementation
{
    struct TestCWrapper : TestCWrapperT<TestCWrapper, implementation::TestCWrapper>
    {
    };
}
