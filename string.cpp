#include <iostream>
#include <cstring>   
#include <algorithm> 
#include <cctype>   

using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    strcpy(str3, str1);
    cout << "After strcpy(), str3 = " << str3 << endl;
    cout << "Length of str1 = " << strlen(str1) << endl;
    strcat(str1, str2);
    cout << "After strcat(), str1 = " << str1 << endl;
    reverse(str2, str2 + strlen(str2));
    cout << "Reverse of str2 = " << str2 << endl;
    for (int i = 0; str3[i] != '\0'; i++) {
        str3[i] = tolower(str3[i]);
    }
    cout << "Lowercase of str3 = " << str3 << endl;

    return 0;
}

