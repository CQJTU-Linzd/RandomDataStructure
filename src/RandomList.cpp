class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

// 生成大小为size，数据范围在l~r的随机链表
ListNode* randomList(int size, int l, int r) {
    srand(time(0));
    ListNode* head = new ListNode(rand() % (r - l + 1) + l);
    ListNode* cur = head;
    for (int i = 1; i < size; i++) {
        cur->next = new ListNode(rand() % (r - l + 1) + l);
        cur = cur->next;
    }
    return head;
}

int main() {
    for (int test = 0; test < 100000; test++) {
        int size = rand() % (15 - 1 + 1) + 1; // 生成数组的大小
        ListNode* head = randomList(size, 0, 1000);
        ListNode* cur = head;
        while (cur) {
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
    return 0;
}
