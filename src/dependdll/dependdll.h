/**
 * @copyright Copyright (c) Yuji Iwanaga
 * @date 3rd July 2021
 */

#ifndef DEPENDDLL_H
#define DEPENDDLL_H

#ifdef DEPENDDLL_EXPORTS
#define DEPENDDLL_API __declspec(dllexport)
#else
#define DEPENDDLL_API __declspec(dllimport)
#endif

class DEPENDDLL_API DependDll
{
public:
    explicit DependDll() {}
    ~DependDll() {}

    void call();

private:
    void world();
};

#endif // DEPENDDLL_H