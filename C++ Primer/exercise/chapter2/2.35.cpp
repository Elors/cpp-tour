#include <iostream>

int main()
{
    const int i = 42;               // i is a const int variable
    auto j = i;                     // j is a int variable, const will be ignored when use `auto`
    const auto &k = i;              // k is a reference to const int variable
    auto *p = &i;                   // p is a int pointer pointed to variable i (which is a const int)
    const auto j2 = i, &k2 = i;     // j2 is a const int variable, k2 same to k
}