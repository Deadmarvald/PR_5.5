#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.5/Lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT55
{
	TEST_CLASS(UT55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = Gen(0., 0., 0., 6., 6., 0., 0.);
			Assert::AreEqual(t, 0.);
		}
	};
}
