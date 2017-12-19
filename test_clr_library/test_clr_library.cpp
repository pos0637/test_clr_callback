// 这是主 DLL 文件。

#include "stdafx.h"
#include <stdio.h>
#include "test_clr_library.h"
#include "test_c_callback.h"

namespace test_clr_library {
    void Class1::foo()
    {
        printf("foo\n");
        Class2 c2;
        c2.bar(this);
    }

    void Class1::callback()
    {
        printf("callback\n");
    }
}