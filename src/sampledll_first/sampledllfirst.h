
#ifndef SAMPLEDLLFIRST_H
#define SAMPLEDLLFIRST_H

#ifdef SAMPLEDLLFIRST_EXPORTS
#define SAMPLEDLLFIRST_API __declspec(dllexport)
#else
#define SAMPLEDLLFIRST_API __declspec(dllimport)
#endif

class SAMPLEDLLFIRST_API SampleDllFirst
{
public:
    explicit SampleDllFirst() {}
    ~SampleDllFirst() {}

    void hello();
    void callDepend();
};


#endif // SAMPLEDLLFIRST_H