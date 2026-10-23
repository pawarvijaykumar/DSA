
#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Three dummy nodes
        ListNode zeroDummy(0);
        ListNode oneDummy(0);
        ListNode twoDummy(0);

        // Three tail pointers
        ListNode* zero = &zeroDummy;
        ListNode* one = &oneDummy;
        ListNode* two = &twoDummy;

        ListNode* curr = head;

        // Separate nodes into three lists
        while (curr != nullptr) {
            if (curr->val == 0) { \
                zero->next = curr;
                zero = zero->next;
            }
            else if (curr->val == 1) {
                one->next = curr;
                one = one->next;
            }
            else {
                two->next = curr;
                two = two->next;
            }

            curr = curr->next;
        }

        // Merge the three lists
        two->next = nullptr;

        zero->next = (oneDummy.next != nullptr)
                         ? oneDummy.next
                         : twoDummy.next;

        one->next = twoDummy.next;

        return zeroDummy.next;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Empty list" << endl;
        return 0;
    }

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter nodes (0, 1, or 2): ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Original list: ";
    printList(head);

    Solution obj;
    head = obj.sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}


/*merge 3 sublist
if(oneHead->next!=NULL){
  zeroTail->next=oneHead->next;
}else{
  //1s list is eampty
  zeroTail->next=twoHead->next;
}

  oneTail->next=twoHead->next;
  twoTail->next=NULL;
}*/