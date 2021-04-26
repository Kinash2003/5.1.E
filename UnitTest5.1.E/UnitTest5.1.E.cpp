#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.E/Object.cpp"
#include "../5.1.E/Object.h"
#include "../5.1.E/LongLong.h"
#include "../5.1.E/LongLong.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(5, 2), B(0, 0);
			Assert::AreEqual(A * B, 10.0);

		}
	};
}
