#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab1.3\lab1.3\FuzzyNumber.h"
#include "E:\oop\lab1.3\lab1.3\FuzzyNumber.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber e;
			bool h = e.Init(2, 3, 4);
			Assert::AreEqual(h, true);
		}
	};
}
