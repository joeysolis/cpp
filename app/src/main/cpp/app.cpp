/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"
#include "fibb.h"

std::string app::Greeter::greeting() {
    return std::string("Fibonacci counter");
}

int main () {
    long val;
    int pos;
    app::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;

    std::cout << "Enter position: ";
    std::cin >> pos;
    val = fibb::fv(pos);
    std::cout << val << std::endl;

    return 0;
}
