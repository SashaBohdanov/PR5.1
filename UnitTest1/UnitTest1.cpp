#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.1/Pr5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double c;
            c = (k(1 + p * p, 1 - q * q) - (1 + p * q) * (1 + p * q)) / (1 + k(p * q, 1));
            Assert::AreEqual(c, 0.997796, 0.00001);

        }
    };
}