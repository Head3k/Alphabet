#include <computing.h>
#include <ctest.h>
#include <string.h>

CTEST(SORT_TEST, FIRST_TEST)
{
	char* k1 = "shit";
	char* k2 = "am";
	int result = sort(k1, k2);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}
CTEST(SORT_TEST, SECOND_TEST)
{
	char* k1 = "check";
	char* k2 = "word";
	int result = sort(k1, k2);
	int expected = 0;
	ASSERT_EQUAL(expected, result);
}
CTEST(SORT_TEST, THIRD_TEST)
{
	char* k1 = "Shit";
	char* k2 = "am";
	int result = sort(k1, k2);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(COMPUTING_TEST, FIRST_TEST)
{
	int count_words = 5;
	char array[5][16] = 
	{
		"word",
		"shit",
		"am",
		"course",
		"check"
	};
	char back_array;
	int result;
	int expected = 1;
	back_array = computing(array, count_words);
	if (array[0][0] == back_array) result = 1;
	else result = 0;
	ASSERT_EQUAL(expected, result);
}
