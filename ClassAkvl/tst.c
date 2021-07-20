#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"


int function_H (int a, int b, int c, int d, int H);
int result;

static void test_1(void **state) {
    result = function_H(2000, 2000, 2000, 123, 0);
    assert_int_equal(result ,1);
}

static void test_2(void **state) {
    result = function_H(2000, 2000, 123, 2000, 0);
    assert_int_equal(result ,1);
}

static void test_3(void **state) {
    result = function_H(2000, 123, 2000, 2000, 0);
    assert_int_equal(result ,1);
}

static void test_4(void **state) {
    result = function_H(123, 2000, 2000, 2000, 0);
    assert_int_equal(result ,1);
}

static void test_5(void **state) {
    result = function_H(2000, 1999, 1999, 2000, 0);
    assert_int_equal(result ,0);
}

static void test_6(void **state) {
    result = function_H(1999, 1999, 2000, 2000, 0);
    assert_int_equal(result ,0);
}

static void test_7(void **state) {
    result = function_H(1999, 2000, 2000, 1999, 0);
    assert_int_equal(result ,0);
}

static void test_8(void **state) {
    result = function_H(2000, 2000, 1999, 1999, 0);
    assert_int_equal(result ,0);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
        cmocka_unit_test( test_2 ),
        cmocka_unit_test( test_3 ),
        cmocka_unit_test( test_4 ),
        cmocka_unit_test( test_5 ),
        cmocka_unit_test( test_6 ),
        cmocka_unit_test( test_7 ),
        cmocka_unit_test( test_8 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}

