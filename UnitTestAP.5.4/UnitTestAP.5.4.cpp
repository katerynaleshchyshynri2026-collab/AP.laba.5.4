#include "pch.h"
#include "CppUnitTest.h"
#include "../AP.laba.5.4/AP.laba.5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAP54
{
	TEST_CLASS(UnitTestAP54)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            double t;
            t = S0(10);
            Assert::AreEqual(t, 6.8990675396528385, 1e-9);
        }

        TEST_METHOD(TestMethod2)
        {
            double t;
            t = S1(10, 10);
            Assert::AreEqual(t, 6.8990675396528385, 1e-9);
        }

        TEST_METHOD(TestMethod3)
        {
            double t;
            t = S2(10, 10);
            Assert::AreEqual(t, 6.8990675396528385, 1e-9);
        }

        TEST_METHOD(TestMethod4)
        {
            double t;
            t = S3(10, 10, 1);
            Assert::AreEqual(t, 6.8990675396528385, 1e-9);
        }

        TEST_METHOD(TestMethod5)
        {
            double t;
            t = S4(10, 10, 1);
            Assert::AreEqual(t, 6.8990675396528385, 1e-9);
        }
    };
}
