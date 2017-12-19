
#include "stdafx.h"
#include "test_clr_library.h"
#include "test_c_callback.h"
#include <stdio.h>

static void do_callback(void * pClass2)
{
    printf("do_callback\n");
    ((Class2*)pClass2)->m_context->callback();
}

void Class2::bar(gcroot<test_clr_library::Class1^> context)
{
    printf("bar\n");
    m_context = context;

    do_callback((void*)this);
}
