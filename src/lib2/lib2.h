#include <lib1.h>

class Bar : public Foo
{
    Bar() = default;
    virtual ~Bar() = default;

public:
    int bar() const;
};
