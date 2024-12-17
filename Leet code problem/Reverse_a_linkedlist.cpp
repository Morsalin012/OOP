#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a simulated linked list using a vector
vector<int> reverseList(vector<int>& list) {
    vector<int> reversedList;  // Create a new vector to store the reversed list
    for (int i = list.size() - 1; i >= 0; --i) {
        reversedList.push_back(list[i]); // Add elements from the end of the list
    }
    return reversedList;
}

int main() {
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    vector<int> list(n);
    cout << "Enter the elements of the list:\n";
    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }

    // Reverse the list
    vector<int> reversedList = reverseList(list);

    // Print the reversed list
    cout << "Reversed List: ";
    for (int i = 0; i < reversedList.size(); ++i) {
        cout << reversedList[i] << " ";
    }
    cout << endl;

    return 0;
}
