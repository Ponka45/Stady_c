#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>

extern int n1;
extern int n2;
extern int n3;
extern int n4;

int Max();
int Min();
int Max4();
int Min4();
int PredMax();

static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	assert_int_equal(PredMax(n1, n2, n3, n4),0 );

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    int ans=PredMax(n1,n2,n3,n4);
    printf("%d\n",ans);
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
