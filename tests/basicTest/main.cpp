#include <cppunit/TestCase.h>

class BasicTest : public CppUnit::TestCase {
public:
  BasicTest(std::string name) : CppUnit::TestCase(name) {}
  void runTest() override
  {
    CPPUNIT_ASSERT(2 + 2 == 4);
    CPPUNIT_ASSERT(2 + 2 == 5);
  }
};

int main()
{
  BasicTest test{ "BasicTest" };
  test.runTest();

  return 0;
}