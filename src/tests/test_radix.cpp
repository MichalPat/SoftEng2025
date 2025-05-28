
#include <gtest/gtest.h>
#include "Radix.h"
#include <vector>
#include <algorithm>

bool isSorted(const std::vector<int>& vec) {
    return std::is_sorted(vec.begin(), vec.end());
}


TEST(RadixSortTest, SortBase10) {
    std::vector<int> input = {233, 3, 87, 44, 255, 111, 11, 32, 1};
    std::vector<int> result = radixSort(input, 10);
    ASSERT_TRUE(isSorted(result));
}

TEST(RadixSortTest, SortBase16) {
    std::vector<int> input = {233, 3, 87, 44, 255, 111, 11, 32, 1};
    std::vector<int> result = radixSort(input, 16);
    ASSERT_TRUE(isSorted(result));
}

TEST(RadixSortTest, SortEmptyVector) {
    std::vector<int> input = {};
    std::vector<int> result = radixSort(input, 10);
    ASSERT_TRUE(result.empty());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}