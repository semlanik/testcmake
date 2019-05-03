#include "lib2.h"

int Bar::bar() const
{
    return foo() + 42;
}
