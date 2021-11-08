#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab1.6\lab1.6\Complex.h"
#include "E:\oop\lab1.6\lab1.6\Complex.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex::Pair a;
			int c = a.Suma_1(2, 4);
			Assert::AreEqual(c, 6);

		}
	};
}

