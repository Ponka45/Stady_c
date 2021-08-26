#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>


int Max();
int Min();
int PreMax();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PreMax(1, 90, 0, 78),78 );

    // все, заканчиваем... ниже ничего писать не надо
}
static void test_2(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PreMax(200, 90, 0, 78),90 );

    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PreMax(200, 500, 0, 78),200 );

    // все, заканчиваем... ниже ничего писать не надо
}
static void test_4(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PreMax(200, 500, -55 , 78),200 );

    // все, заканчиваем... ниже ничего писать не надо
}
static void test_5(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PreMax(200, 500, -55, 0),200 );

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
	const struct CMUnitTest tests[] = {
	cmocka_unit_test( test_1 ),
	cmocka_unit_test( test_2 ),
	cmocka_unit_test( test_3 ),
	cmocka_unit_test( test_4 ),
	cmocka_unit_test( test_5 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
