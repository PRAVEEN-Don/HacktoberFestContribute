#include <iostream>
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

Node* mergeTwoLists(Node* l1, Node* l2) {
    // Base cases
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data < l2->data) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(5);

    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);
    Node* mergedList = mergeTwoLists(l1, l2);

    std::cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
