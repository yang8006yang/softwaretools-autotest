#include "unity.h"
#include "calc.c"

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(0, add(INT_MAX, 1));
}

void test_sub(void){
    TEST_ASSERT_EQUAL(2, sub(4, 2));
}

void test_mult(void){
    TEST_ASSERT_EQUAL(9, mult(3, 3));
    TEST_ASSERT_EQUAL(0.025, mult(0.5, 0.5));
    TEST_ASSERT_EQUAL(4, mult(2, 2));
}

void test_div(void){
    TEST_ASSERT_EQUAL(3, div(6, 2));
    TEST_ASSERT_EQUAL(6, div(3, 0.5));
}

void test_calc(void){
    TEST_ASSERT_EQUAL(4, calc("2 * 2"));
    TEST_ASSERT_FLOAT_WITHIN(0.001f, 13.3f, calc("4.2 + 9.1"));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mult);
    RUN_TEST(test_div);
    RUN_TEST(test_calc);
    return UNITY_END();
}
