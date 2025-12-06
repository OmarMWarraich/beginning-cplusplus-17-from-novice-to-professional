#include <cppunit/TestCase.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>
#include <vector>

class FixtureTests : public CppUnit::TestFixture {
public:

  // void setUp() override
  // {
  //   printf("Passed\n");
  // }
  // void tearDown() override
  // {
  //   printf("ailed\n");
  // }

  void testAddition()
  {
    CPPUNIT_ASSERT(2 + 4 == 6);
    // CPPUNIT_ASSERT_MESSAGE("Failed", 3 + 4 == 8);
  }
  void testLogic()
  {
    // CPPUNIT_ASSERT(false == false);
    // CPPUNIT_ASSERT(true == false);
    std::vector<int> v;
    // v.push_back(10);
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("terribly failed!", v.at(0));
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