#include "gtest/gtest.h"
#include "Taximeter.h"

Taximeter taximeter;

TEST(Taximeter_Test, miles_1point2_fares_14)
{
  EXPECT_EQ(14, taximeter.GetFares(1.2));
}

TEST(Taximeter_Test, miles_1point6_fares_14)
{
  EXPECT_EQ(14, taximeter.GetFares(1.6));
}

TEST(Taximeter_Test, miles_2point5_fares_14)
{
  EXPECT_EQ(14, taximeter.GetFares(2.5));
}

TEST(Taximeter_Test, miles_3_fares_14)
{
  EXPECT_EQ(14, taximeter.GetFares(3));
}

TEST(Taximeter_Test, miles_3point5_fares_16point5)
{
  EXPECT_EQ(16.5, taximeter.GetFares(3.5));
}

TEST(Taximeter_Test, miles_6point3_fares_24)
{
  EXPECT_EQ(24, taximeter.GetFares(6.3));
}

TEST(Taximeter_Test, miles_8point8_fares_29)
{
  EXPECT_EQ(29, taximeter.GetFares(8.8));
}

TEST(Taximeter_Test, miles_10_fares_31point5)
{
  EXPECT_EQ(31.5, taximeter.GetFares(10));
}

TEST(Taximeter_Test, miles_13point5_fares_45point5)
{
  EXPECT_EQ(45.5, taximeter.GetFares(13.5));
}

TEST(Taximeter_Test, miles_25point4_fares_87point5)
{
  EXPECT_EQ(87.5, taximeter.GetFares(25.4));
}

TEST(Taximeter_Test, miles_36point8_fares_126)
{
  EXPECT_EQ(126, taximeter.GetFares(36.8));
}
