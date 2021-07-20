#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>

int a=10;
int b=3;

int KratChek();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(KratChek(a,b),1 );

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    int ans=KratChek(a,b);
    printf("%d\n",ans);
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
