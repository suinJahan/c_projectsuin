#include "healtcareproject.h"

int test_authenticate_success()
{
    struct User admin = {"admin", "1234", "admin"};

    int result = authenticate(admin, "admin", "1234");

    int expected = 1;
    int actual = result;

    printf("\n[Test Auth Success] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}

int test_authenticate_fail()
{
    struct User admin = {"admin", "1234", "admin"};

    int result = authenticate(admin, "admin", "wrongpass");

    int expected = 0;
    int actual = result;

    printf("\n[Test Auth Fail] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}

int main()
{
    int ok_fail = test_authenticate_fail();
    int ok_success = test_authenticate_success();

    if (ok_fail && ok_success)
    {
        printf("\nAll tests passed.\n");
        return 0;
    }
    else
    {
        printf("\nSome tests failed.\n");
        return 1;
    }
}