#include <gtest/gtest.h>
#include "../Sort.h"

TEST(Sorting, both)
{
    const int dim = 7;
    int sequence1[dim] = {8, 3, 1, 0, -1, -3, -8};
    int sequence2[dim] = {-8, -3, -1, 0, 1, 3, 8};
    sort::sort(sequence1, dim);
    for (int k = 0; k < dim; k++)
    {
        ASSERT_EQ(sequence[k], expected[k]);
    }
}

TEST(Sorting, odd)
{
    const int dim = 3;
    int sequence1[dim] = {7, 9, 5};
    int sequence2[dim] = {5, 7, 9};
    sort::sort(sequence1, dim);
    for (int k = 0; k < dim; k++)
    {
        ASSERT_EQ(sequence[k], expected[k]);
    }
}

TEST(Sorting, same)
{
    const int dim = 4;
    int sequence1[dim] = {1, 1, 1, 1};
    sort::sort(sequence1, dim);
    for (int k = 1; k < dim; k++)
    {
        ASSERT_EQ(sequence[k-1], expected[k]);
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return  RUN_ALL_TESTS();
}
