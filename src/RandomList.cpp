class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

// 生成长度为size，数值范围在l~r上的链表
ListNode* randomList(int size, int l, int r) {
    srand(time(0));
    ListNode* head = new ListNode(rand() % (r - l + 1) + l);
    ListNode* cur = head;
    for (int i = 0; i < size; i++) {
        int val = rand() % (r - l + 1) + l;
        cur->next = new ListNode(val);
        cur = cur->next;
    }
    return head;
}

int main() {
    ListNode* head = randomList(10, 0, 1000);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
