#include "unity.h"
#include <Quiz.h>

/* Modify these two lines according to the project */
#include <Quiz.h>
#define PROJECT_NAME    "Quiz_Gaming_Application"

/* Prototypes for all the test functions */
void show_record(void);


/* Required by the unity test framework */
void reset_score(){}
/* Required by the unity test framework */
void help(){}
/*Requried by the unity test framework*/
void edit_score()
  /* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Quiz);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Quiz(void) {
  TEST_ASSERT_EQUAL(1, open(show_record.var));
  TEST_ASSERT_EQUAL(2, open(reset_score.var));
  TEST_ASSERT_EQUAL(3, open(help.var));
  TEST_ASSERT_EQUAL(4, open(edit_score.var));
 
    /* Dummy fail*/
  // TEST_ASSERT_EQUAL(0, file does not exist);
  
}

