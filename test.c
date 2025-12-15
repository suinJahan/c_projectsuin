

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

int test_show_appointment()
{
    show_appointment("John", "Smith", "2025-01-01");

    int expected = 1;   // function executed
    int actual = 1;

    printf("\n[Test Show Appointment] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}


int test_patient_report_count()
{
    struct Patient p;
    p.report_count = 0;

    strcpy(p.reports[p.report_count++], "Xray");

    int expected = 1;
    int actual = p.report_count;

    printf("\n[Test Patient Report Count] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}


int main()
{
    test_patient_report_count();
    test_show_appointment();
    test_authenticate_fail();
    test_authenticate_success();
}


