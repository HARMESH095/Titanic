#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

Node* convertarray2LL(vector<int>& arr) {
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthofLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main() {
    vector<int> arr = {4, 5, 6, 7};
    Node* head = convertarray2LL(arr);
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    int output = lengthofLL(head);
    cout << "Length of the linked list: " << output << endl;

    // Clean up memory (not shown in this snippet)
    return 0;
}
 