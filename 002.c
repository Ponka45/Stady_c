
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>


 

int f_003_002();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(1000,2000,3000,4000),4000);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_2(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(90,2000,3000,4000),4000);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(90,-98,3000,4000),4000);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_4(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(90,-98,33,4000),4000);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_5(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(90,-98,33,99),99);
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
    

