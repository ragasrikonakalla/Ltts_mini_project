#include "hang.h"
#include "unity.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void test_getRandom(void *n);

void setUp(){

}
void tearDown(){

}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_getRandom);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_getRandom(void *n){
n=4;
flag = true;
TEST_ASSERT_EQUAL(clock, getRandom(4,clock));
}