
#include "dependdll.h"
#include <iostream>

void DependDll::call()
{
    world();
}

void DependDll::world()
{
    std::wcout << "world." << std::endl;
}