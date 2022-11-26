// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "Page2.g.h"

namespace winrt::App1::implementation
{
    struct Page2 : Page2T<Page2>
    {
        Page2();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    };
}

namespace winrt::App1::factory_implementation
{
    struct Page2 : Page2T<Page2, implementation::Page2>
    {
    };
}
