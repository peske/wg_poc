#pragma once

#include "TestCWrapperStatic.g.h"

namespace winrt::RuntimeComponentCWrapper::implementation
{
    struct TestCWrapperStatic : TestCWrapperStaticT<TestCWrapperStatic>
    {
		TestCWrapperStatic() = default;

        static int32_t Add(int32_t a, int32_t b);
    };
}

namespace winrt::RuntimeComponentCWrapper::factory_implementation
{
    struct TestCWrapperStatic : TestCWrapperStaticT<TestCWrapperStatic, implementation::TestCWrapperStatic>
    {
    };
}
