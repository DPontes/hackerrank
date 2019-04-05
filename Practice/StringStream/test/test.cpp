#include "inputInts.cpp"
#include <gtest/gtest.h>

TEST(SimpleTest, FirstTest) {
    string str = "23, 4, 56";
    vector<int> v = {23, 4, 56};
    ASSERT_EQ(v, parseInts(str));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
