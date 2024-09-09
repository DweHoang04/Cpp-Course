#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // char name1[4] = {'D', 'u', 'y', '\0'};
    // The last character must be a null character
    char name[4] = "Duy";
    // String literal is a null-terminated array of characters
    name[0] = 'T';
    // Character literal
    char lastName[] = "Hoang";
    // Concatenate
    strcat(name, lastName);
    // Copy
    strcpy(name, lastName);
    // Compare
    strcmp(name, lastName);

    cout << name << endl;

    return 0;
}