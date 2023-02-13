#include <cassert>
#include <string>
#include <string_view>

#include "apply_to_many.cpp"

using namespace std;
/* Напишите вашу реализацию EqualsToOneOf здесь*/
template<typename T, typename ...Args>
bool EqualsToOneOf(const T& first, const Args& ...args) {
    auto result = false;
    ((result |= first==args), ...);
    return result;
}

int main() {
    TestSum();
        TestConcatenate();
        TestIncrement();
        TestArgumentForwarding();
        TestArgumentForwardingToConstFunction();
//    assert(EqualsToOneOf("hello"sv, "hi"s, "hello"s));
//    assert(!EqualsToOneOf(1, 10, 2, 3, 6));
//    assert(!EqualsToOneOf(8));
}
