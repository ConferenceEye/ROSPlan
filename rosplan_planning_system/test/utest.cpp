
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "rosplan_planning_system/ProblemGeneration/ProblemInterface.h"



// Created by Martin Köling on 2019-02-05.
//





// Declare a test
TEST(ProblemInterfaceTest, testCase1)
{
    EXPECT_EQ(1,1);
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
