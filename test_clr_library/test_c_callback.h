#pragma once

#include<vcclr.h>

class Class2
{
public:

    void bar(gcroot<test_clr_library::Class1^> context);

public:

    gcroot<test_clr_library::Class1^> m_context;
};