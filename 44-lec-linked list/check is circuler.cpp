
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // One step
            fast = fast->next->next;    // Two steps

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Output: false" << endl;
        return 0;
    }

    vector<ListNode*> nodes;
    cout << "Enter node values: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        nodes.push_back(new ListNode(value));
    }

    // Connect nodes normally
    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    int pos;
    cout << "Enter pos (-1 for no cycle): ";
    cin >> pos;

    // Connect the last node back to index pos
    if (pos >= 0 && pos < n) {
        nodes[n - 1]->next = nodes[pos];
    }

    Solution obj;
    bool result = obj.hasCycle(nodes[0]);

    cout << "Output: ";
    cout << (result ? "true" : "false") << endl;

    return 0;
}
//Complexity: Time \(O(n)\), auxiliary space \(O(1)\).