#include <iostream>

void test(int x, int y) {
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}

int main() {
    // Variable Assignment
    [[maybe_unused]] int z = 5; // slow and inefficient
    [[maybe_unused]] int c = (5); // no difference than line 5
    [[maybe_unused]] int b (5); // confusing, looks like function calls
    [[maybe_unused]] int x {5}; // best way
    [[maybe_unused]] int name{}; // same as line 8, gives default value 0 (for integral types, int, bool, char)
    // [[maybe_unused]] int price {5.5}; // not allowed (narrowing conversions)

    // Literals
    [[maybe_unused]] int val {5}; // 5 is a literal value
    [[maybe_unused]] std::string name22 {"somil"}; // "somil" is a string literal

    // Expressions
    /* 
    Expression => Evaluation, Side Effect (Y/N)
    0 || 1 => 1, N
    2 > 3 => False, N
    foo() => 5, Maybe
    std::cout << "hello" => std::cout, Y
    std::cin >> x => std::cin, Y
    a++ => a, Y
    ++a => a+1, Y
    */
    int m {10};
    test(++m, m++);
    return 0;
}