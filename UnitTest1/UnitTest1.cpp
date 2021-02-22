#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.2/date.h"
#include "../lab1.2/date.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			date g;
			bool t;
			t = g.Init(23, 3,1999);
			Assert::AreEqual(t,true);
		}
	};
}
