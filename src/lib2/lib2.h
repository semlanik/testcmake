#include <lib1.h>

class Bar : public Foo
{
public:
    Bar() = default;
    virtual ~Bar() = default;

    int bar() const;
};
