
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>


 

int f_003_002();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(10,-45,-56,0),10);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_2(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(12,-45,-56,10),12);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(12,55,-56,10),55);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_4(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(12,55,56,10),56);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_5(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_002(12,55,56,99),99);
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
    

