#include "pch.h"
#include "../TriangleDoTestow/Triangle.hpp"

TEST(TriangleArea, getArea_Valid) {
	Triangle t(3,4,5);

	EXPECT_DOUBLE_EQ(t.getArea(), 6);

}

TEST(TriangleArea, getArea_Invalid) {
	Triangle t(3, 4, 5);

	EXPECT_DOUBLE_EQ(t.getArea(), 0);
}

	TEST(TrianglePerimiter, getPerimeterValid) {
		Triangle t(3, 4, 5);

		EXPECT_DOUBLE_EQ(t.getParimeter(), 12);
	}

	TEST(TrianglePerimeterTest, getPerimeterInvalid) {
		Triangle t(1, 2, 3);
		
		EXPECT_DOUBLE_EQ(t.getParimeter(), 0);
	}

	TEST(TriangleValidityTest, isValid_Valid) {
		Triangle t(3, 4, 5);

		EXPECT_TRUE(t.isValid());
	}

	TEST(TriangleValidityTest, isValid_Invalid) {
		Triangle t(1, 2, 3);

		EXPECT_FALSE(t.isValid());
}

