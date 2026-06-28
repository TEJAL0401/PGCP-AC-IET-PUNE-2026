#include <iostream>
using namespace std;

// String Length
int myStrlen(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

// String Copy
void myStrcpy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// String Concatenate
void myStrcat(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// String Comparison
int myStrcmp(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[100], str2[100], result[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Length: " << myStrlen(str1) << endl;

    myStrcpy(result, str1);
    cout << "Copied string: " << result << endl;

    myStrcat(result, str2);
    cout << "Concatenated string: " << result << endl;

    int cmp = myStrcmp(str1, str2);
    if (cmp == 0)
        cout << "Strings are equal" << endl;
    else if (cmp > 0)
        cout << "First string is greater" << endl;
    else
        cout << "Second string is greater" << endl;

    return 0;
}


