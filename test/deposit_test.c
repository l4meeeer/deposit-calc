#include "deposit.h"
#include <ctest.h>
#include <stdio.h>

//Tests for data

CTEST(check_data, test1)
{
	ASSERT_EQUAL(0, data(10000, 365)); // что хотим получить, что вводим ret
}

CTEST(check_data, test2)
{
        ASSERT_EQUAL(-1, data(9999, 365));// мин.сум вклада
}

CTEST(check_data, test3)
{
        ASSERT_EQUAL(-1, data(10000, 366));
}

CTEST(check_data, test4)
{
        ASSERT_EQUAL(-1, data(-1, 365));
}

CTEST(check_data, test5)
{
        ASSERT_EQUAL(-1, data(10000, -1));
}

CTEST(check_data, test6)
{
        ASSERT_EQUAL(-1, data(-1, -1));
}

//Tests for results

CTEST(calculate, test1)
{
        ASSERT_EQUAL(90000, result(100000, 30)); //
} 

CTEST(calculate, test2)
{
        ASSERT_EQUAL(102000, result(100000, 31));
}

CTEST(calculate, test3)
{
        ASSERT_EQUAL(102000, result(100000, 120));
}

CTEST(calculate, test4)
{
        ASSERT_EQUAL(106000, result(100000, 121));
}

CTEST(calculate, test5)
{
        ASSERT_EQUAL(106000, result(100000, 240));
}

CTEST(calculate, test6)
{
        ASSERT_EQUAL(112000, result(100000, 241));
}

CTEST(calculate, test7)
{
        ASSERT_EQUAL(99000, result(110000, 30));
} 

CTEST(calculate, test8)
{
        ASSERT_EQUAL(113300, result(110000, 31));
}

CTEST(calculate, test9)
{
        ASSERT_EQUAL(113300, result(110000, 120));
}

CTEST(calculate, test10)
{
        ASSERT_EQUAL(118800, result(110000, 121));
}

CTEST(calculate, test11)
{
        ASSERT_EQUAL(118800, result(110000, 240));
}
