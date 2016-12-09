#include "gtest/gtest.h"
#include "Taximeter.h"

Taximeter taximeternight("nighttime");

TEST(Taximeter_Test, miles_1point2_fares_18)
{
  EXPECT_EQ(18, taximeternight.GetFares(1.2));
}

TEST(Taximeter_Test, miles_1point6_fares_18)
{
  EXPECT_EQ(18, taximeternight.GetFares(1.6));
}

TEST(Taximeter_Test, miles_2point5_fares_18)
{
  EXPECT_EQ(18, taximeternight.GetFares(2.5));
}

TEST(Taximeter_Test, miles_3_fares_18)
{
  EXPECT_EQ(18, taximeternight.GetFares(3));
}

TEST(Taximeter_Test, miles_3point5_fares_21point5)
{
  EXPECT_EQ(21.5, taximeternight.GetFares(3.5));
}

TEST(Taximeter_Test, miles_6point3_fares_32)
{
  EXPECT_EQ(32, taximeternight.GetFares(6.3));
}

TEST(Taximeter_Test, miles_8point8_fares_39)
{
  EXPECT_EQ(39, taximeternight.GetFares(8.8));
}

TEST(Taximeter_Test, miles_10_fares_42point5)
{
  EXPECT_EQ(float(42.5), taximeternight.GetFares(10));
}

TEST(Taximeter_Test, miles_13point5_fares_61point3)
{
  EXPECT_EQ(float(61.3), taximeternight.GetFares(13.5));
}

TEST(Taximeter_Test, miles_25point4_fares_117point7)
{
  EXPECT_EQ(float(117.7), taximeternight.GetFares(25.4));
}

TEST(Taximeter_Test, miles_36point8_fares_169point4)
{
	EXPECT_EQ(float(169.4), taximeternight.GetFares(36.8));
}
