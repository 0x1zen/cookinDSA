#include <iostream>
#include <cstring>
using namespace std;

void findReverse(char name[], int size) {
    int i = 0;
    int j = size - 1;
    while (i <= j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main() {
    char name[50];
    cin >> name;
    int size = strlen(name);
    
    char original[50];
    strcpy(original, name); // Make a copy of the original string
    
    findReverse(name, size);

    if (strcmp(name, original) == 0) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
