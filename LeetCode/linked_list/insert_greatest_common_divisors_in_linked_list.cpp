struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int gcd(int a, int b) {
        while (b > 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            int gcdVal = gcd(curr->val, curr->next->val);
            ListNode* gcdNode = new ListNode(gcdVal);

            gcdNode->next = curr->next;
            curr->next = gcdNode;
            
            curr = gcdNode->next;
        }

        return head;
    }
};