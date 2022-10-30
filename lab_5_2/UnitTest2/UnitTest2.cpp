#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_2/lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1., 1, 0.);
			Assert::AreEqual(t, 0.);
		}
	};
}
