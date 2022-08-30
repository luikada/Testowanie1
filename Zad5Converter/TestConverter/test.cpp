#include "pch.h"
#include "../ConverterUnits/ConverterUnits.hpp"



TEST(UnitConverterTEMP, CtoF_0) {
	Coverter convert;

	EXPECT_DOUBLE_EQ(convert.celciusToFarenheit(0), 32);
} 

TEST(UnitConverterTEMP, FtoC_Positive) {
	Coverter convert;

	EXPECT_DOUBLE_EQ(convert.farenheitToCelcius(40), 104);
} 

TEST(UnitConverterTEMP, FtoC_Negative) {
	Coverter convert;

	EXPECT_DOUBLE_EQ(convert.farenheitToCelcius(-15), 5);
} 

