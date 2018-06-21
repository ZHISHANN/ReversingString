#include "build/temp/_test_ReversingString.c"
#include "ReversingString.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_getStringLength_given_a_NULL_expect_0 (void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((getStringLength(

((void *)0)

))), (

((void *)0)

), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

}



void test_getStringLength_given_an_empty_string_expect_0 (void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((getStringLength(""))), (

((void *)0)

), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}



void test_getStringLength_given_a_f_string_expect_1 (void)

{

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((getStringLength("f"))), (

((void *)0)

), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_getStringLength_given_mumbo_jumbo_string_expect_11 (void)

{

 UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((getStringLength("mumbo-jumbo"))), (

((void *)0)

), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}



void test_ReversingString_given_framework_expect_krowemarf(void)

{

  char *str = ReversingString("framework");

 UnityAssertEqualString((const char*)(("krowemarf")), (const char*)((str)), (

((void *)0)

), (UNITY_UINT)(35));

}



void test_ReversingString_given_12345_expect_54321(void)

{

  char *str = ReversingString("12345");

 UnityAssertEqualString((const char*)(("54321")), (const char*)((str)), (

((void *)0)

), (UNITY_UINT)(41));

}
