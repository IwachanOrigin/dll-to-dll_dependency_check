/**
 * @copyright Copyright (c) Yuji Iwanaga
 * @date 3rd July 2021
 */

#include "sampledllfirst.h"

int main(int argc, char **argv)
{
    /*
     * The Sample exe project is dependency to SampleDllFirst project.
     */
    SampleDllFirst sdf;
    sdf.hello();

    /*
     * The SampleDllFirst project is dependency to DependDll project.
     */
    sdf.callDepend();

    return 0;
}