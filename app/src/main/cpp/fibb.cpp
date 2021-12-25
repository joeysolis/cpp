#include <iostream>
#include "fibb.h"

namespace fibb {
    long fv(int pos) {
        if (pos < 1) {
            std::cerr << "Invalid input, position must be greater than 0";
            return -1;
        }

        long p1 = 1, p2 = 1;
        long val = 1;
        for (int i = 2; i < pos; i++) {
            val = p1 + p2;
            p2 = p1;
            p1 = val;
        }
        return val;
    }
}