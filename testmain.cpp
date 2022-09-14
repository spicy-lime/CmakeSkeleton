#include "gtest/gtest.h"
#include "igloo/igloo_alt.h"

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    igloo::TestRunner::RunAllTests(argc, argv);
    return 0;
}