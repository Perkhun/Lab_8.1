
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char cs[] = "+-=";
			int m = Count("This == +", cs);
			Assert::AreEqual(m, 3);

		}
	};
}
