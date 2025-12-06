#include <iostream>


class Thing
{
  public:
    Thing(float x, float y)
    {
      this -> x = x;
      this -> y = y;
    }
    float getX()
    {
      return this->x;
    }
  private:
    float x;
    float y;
};

int addOne(int input)
{
  return input + 1;
}

int main()
{
  int x = 10;
  float f = 10.0;

  int myInts[] = {2,4,6,8,10};
  myInts[0] = addOne(myInts[0]);

  printf("x = %i \n", x);
  printf("f = %f \n", f);
  printf("myInt's first integer = %i \n", myInts[0]);
  int i;
  for (size_t i = 0; i < std::size(myInts); ++i)
  {
    printf("The number %li of myInts array is %i \n",i+1, myInts[i]);
  }

  Thing aThing {10.2f, 10.5f};
  printf("Thing's x: %f \n", aThing.getX());

  std::cout << "Thing's x is: " << aThing.getX() << std::endl;
}