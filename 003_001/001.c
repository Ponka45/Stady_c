
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>




int f_003_001();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_001(17,18),18);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_2(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_001(20,18),20);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(f_003_001(20,-1),20);
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
