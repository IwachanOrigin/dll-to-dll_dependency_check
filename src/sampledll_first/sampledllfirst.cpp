
#include "sampledllfirst.h"
#include "dependdll.h"

#include <iostream>

void SampleDllFirst::hello()
{
    std::wcout << L"hello, world." << std::endl;
}

void SampleDllFirst::callDepend()
{
    DependDll dd;
    dd.call();
}