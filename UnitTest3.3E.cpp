#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/3.3E/3.3E/Pair.h"
#include "C://Users/User/source/repos/3.3E/3.3E/Pair.cpp"
#include "C://Users/User/source/repos/3.3E/3.3E/Rectangle.h"
#include "C://Users/User/source/repos/3.3E/3.3E/Rectangle.cpp"
#include "C://Users/User/source/repos/3.3E/3.3E/Object.h"
#include "C://Users/User/source/repos/3.3E/3.3E/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle T(3, 4);
			Assert::AreEqual(T.Square(), 12.0);
		}
	};
}
