/**
 * @copyright Copyright (c) Yuji Iwanaga
 * @date 3rd July 2021
 */

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