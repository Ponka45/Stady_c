#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>




int f_003_005();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_005(4, 2),1);

    // все, заканчиваем... ниже ничего писать не надо
}

static void test_2(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_005(9, 2),0);

    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_005(9, 3),1);

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
	const struct CMUnitTest tests[] = {
	cmocka_unit_test( test_1 ),
	cmocka_unit_test( test_2 ),
	cmocka_unit_test( test_3 ),    
		};
    return cmocka_run_group_tests(tests, NULL, NULL);
}