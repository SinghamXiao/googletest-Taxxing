#include "gtest/gtest.h"
#include "Taxiing.h"

TEST(Taxiing_Test, miles_0_fares_14)
{
  Taxiing taxiing(0);

  EXPECT_EQ(14, taxiing.getFares());
}

TEST(Taxiing_Test, miles_3_fares_14)
{
  Taxiing taxiing(3);

  EXPECT_EQ(14, taxiing.getFares());
}

TEST(Taxiing_Test, miles_3p5_fares_16p5)
{
  Taxiing taxiing(3.5);

  EXPECT_EQ(16.5, taxiing.getFares());
}
