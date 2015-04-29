#include "gtest\gtest.h"
#include "Car.h"

TEST(CarTests, Drive_Normal_ShouldNotThrow)
{
	Car car;
	ASSERT_NO_THROW(car.Drive());
}
