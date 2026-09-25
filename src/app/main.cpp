#include <iostream>

#include "paon/core/version.hpp"

int main() {
    std::cout << "paon " << paon::core::version() << '\n';
    return 0;
}
