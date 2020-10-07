#include <computing.h>
#include <ctest.h>
#include <string.h>

CTEST(SORT_TEST, FIRST_TEST)
{
    char* k1 = "I";
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
    char* k1 = "CHEESE";
    char* k2 = "check";
    int result = sort(k1, k2);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(SORT_TEST, FORTH_TEST)
{
    char* k1 = "CHEESE";
    char* k2 = "cHoIce";
    int result = sort(k1, k2);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(SORT_TEST, FIFTH_TEST)
{
    char* k1 = "привет";
    char* k2 = "пока";
    int result = sort(k1, k2);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(COMPUTING_TEST, FIRST_TEST)
{
    int count_words = 6;
    char array[5][16] = {"shop", "check", "word", "apt", "course"};
    int result = 0;
    int expected = 3;
    array[count_words][16] = computing(array, count_words); // void function
    char array_check[5][16] = {"apt", "check", "course", "shop", "word"};
    if (array[0][0] == array_check[0][0])
        result++;
    if (array[1][1] == array_check[1][1])
        result++;
    if (array[2][2] == array_check[2][2])
        result++;
    ASSERT_EQUAL(expected, result);
}

CTEST(COMPUTING_TEST, SECOND_TEST)
{
    int count_words = 6;
    char array[5][16] = {"ice", "study", "cat", "people", "house"};
    int result = 0;
    int expected = 0;
    array[count_words][16] = computing(array, count_words); // void function
    char array_check[5][16] = {"people", "study", "ice", "cat", "house"};
    if (array[0][0] == array_check[0][0])
        result++;
    if (array[1][1] == array_check[1][1])
        result++;
    if (array[2][2] == array_check[2][2])
        result++;
    ASSERT_EQUAL(expected, result);
}
