#include <limits.h>
#include <project.h>

static void test_num1(t_test *test)
{
	mt_assert(strcmp(ft_itoa(0), "0") == 0);
}

static void test_num2(t_test *test)
{
	mt_assert(strcmp(ft_itoa(-1234), "-1234") == 0);
}

static void test_num3(t_test *test)
{
	mt_assert(strcmp(ft_itoa(123456000), "123456000") == 0);
}

static void test_num4(t_test *test)
{
	mt_assert(strcmp(ft_itoa(-2147483648), "-2147483648") == 0);
}

static void test_num5(t_test *test)
{
	char	s[16];
	char	*p;
	int		n;
	int		ret;

	n = INT_MIN;
	while (n < 0)
	{
		sprintf(s, "%d", n);
		p = ft_itoa(n);
		ret = strcmp(s, p);
		free(p);
		if (ret)
		{
			mt_assert(0);
			return ;
		}
		n += 777;
	}
	mt_assert(1);
}

void	suite_01_part2_ft_itoa(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_num1);
	SUITE_ADD_TEST(suite, test_num2);
	SUITE_ADD_TEST(suite, test_num3);
	SUITE_ADD_TEST(suite, test_num4);
	SUITE_ADD_TEST(suite, test_num5);
}
