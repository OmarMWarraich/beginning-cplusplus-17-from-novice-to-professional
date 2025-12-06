#include <cppunit/TestCase.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>

class FixtureTests : public CppUnit::TestFixture {
public:

  void setUp() override
  {
    printf("Passed\n");
  }
  void tearDown() override
  {
    printf("ailed\n");
  }

  void testAddition()
  {
    CPPUNIT_ASSERT(2 + 4 == 6);
    // CPPUNIT_ASSERT(2 + 1 == 4);
  }
  void testLogic()
  {
    CPPUNIT_ASSERT(false == false);
    // CPPUNIT_ASSERT(true == false);
  }
};

int main()
{
  CppUnit::TextUi::TestRunner runner{};
  runner.addTest(new CppUnit::TestCaller<FixtureTests>{
    "test the addition operator",
      &FixtureTests::testAddition
    });

  runner.addTest(new CppUnit::TestCaller<FixtureTests>{
    "test the logic operator",
      &FixtureTests::testLogic
    });

  runner.run();

  return 0;
}