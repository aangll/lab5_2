#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_2/lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int n;
			t = S(1.,1., n = 0, 0.);
			Assert::AreEqual(t, 0.);
		}
	};
}