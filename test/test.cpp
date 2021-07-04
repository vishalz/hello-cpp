#include "vmath/complex.h"
#include "vtl/vector.h"
#include <gtest/gtest.h> 

TEST(Complex , DefaultConstrctor){
  Complex c; 
  EXPECT_EQ(0, c.real());
  EXPECT_EQ(0, c.imag());
};

TEST(Complex , RealConstrctor){
  Complex c(10); 
  EXPECT_EQ(10, c.real());
  EXPECT_EQ(0, c.imag());
};

TEST(Complex , MainConstrctor){
  Complex c(10,20); 
  EXPECT_EQ(10, c.real());
  EXPECT_EQ(20, c.imag());
};

TEST(Complex , AdditionAssignment){
  Complex c(10,20); 
  Complex d(5,10);
  c+=d;
  EXPECT_EQ(15, c.real());
  EXPECT_EQ(30, c.imag());
};

TEST(Complex , SubtractionAssignment){
  Complex c(10,20); 
  Complex d(5,10);
  c-=d;
  EXPECT_EQ(5, c.real());
  EXPECT_EQ(10, c.imag());
};

TEST(Vector, DefaultConstructor){
  Vector v;
  EXPECT_EQ(0, v.size());
}



TEST(Vector, Constructor){
  Vector v(5);
  EXPECT_EQ(5, v.size());

}

TEST(Vector, SubscriptOperator){
  Vector v(5);
  v[0] = 0;
  v[1] = 1;
  EXPECT_EQ(1, v[1]);
}


















