#include <iostream>
#include "gtest/gtest.h"

using namespace std;

int main(int argc, char** argv) {
    cout << "Run All Tests!" << endl;

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}