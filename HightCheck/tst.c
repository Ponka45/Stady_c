#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>

int Hight=1000;
int Control=1;

  void HightCheck(int b);


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)

	HightCheck(Control);
	assert_int_equal(Hight,990);

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void)
 {

    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);


}
