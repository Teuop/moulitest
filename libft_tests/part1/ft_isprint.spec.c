#include "project.h"

UT_TEST(ft_isprint)
{
	UT_ASSERT_EQ(ft_isprint('a'), isprint('a'));
	UT_ASSERT_EQ(ft_isprint('a' + 0x100), isprint('a' + 0x100));
	UT_ASSERT_EQ(ft_isprint('2'), isprint('2'));
	UT_ASSERT_EQ(ft_isprint('Z'), isprint('Z'));
	UT_ASSERT_EQ(ft_isprint('t'), isprint('t'));
	UT_ASSERT_EQ(ft_isprint(0), isprint(0));
	UT_ASSERT_EQ(ft_isprint(1), isprint(1));
	UT_ASSERT_EQ(ft_isprint(9999), isprint(9999));
	UT_ASSERT_EQ(ft_isprint('1'), isprint('1'));
	UT_ASSERT_EQ(ft_isprint('2'), isprint('2'));
	UT_ASSERT_EQ(ft_isprint('A'), isprint('A'));
	UT_ASSERT_EQ(ft_isprint('Z'), isprint('Z'));
	UT_ASSERT_EQ(ft_isprint(' '), isprint(' '));
	UT_ASSERT_EQ(ft_isprint('%'), isprint('%'));
	UT_ASSERT_EQ(ft_isprint('\t'), isprint('\t'));
	UT_ASSERT_EQ(ft_isprint('\n'), isprint('\n'));
	UT_ASSERT_EQ(ft_isprint('\v'), isprint('\v'));
	UT_ASSERT_EQ(ft_isprint('\b'), isprint('\b'));
	UT_ASSERT_EQ(ft_isprint(7), isprint(7));
}
