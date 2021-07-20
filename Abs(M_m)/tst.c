#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
#include <stdlib.h>
#include <stdio.h>

 int n1=-9;
 int n2=0;
 int n3=-6;
 int n4=5;

int Max();
int Min();
int Abs();

static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
	//assert_int_equal(Abs_M_m(0,0,0,0), 0);
    assert_int_equal(Abs(Max(n1,n2,n3,n4),Min(n1,n2,n3,n4)), 2);
    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    int ans=Abs(Max(n1,n2,n3,n4),Min(n1,n2,n3,n4));
    printf("%d\n",ans);
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
