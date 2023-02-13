class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void test() {
    srand(time(0));
    // 需要在对数器里生成链表
    // 不能单独写一个randomList函数，否则得到的链表全都一样
    for (int test = 0; test < 100; test++) { // 对数器 测100次
        // generateList
        ListNode* head = new ListNode(rand() % (100 - 0 + 1) + 0);
        ListNode* cur = head;
        int size = rand() % (100 - 1 + 1) + 1;
        for (int i = 1; i < size; i++) { //链表长度为size
            cur->next = new ListNode(rand() % (100 - 0 + 1) + 0);
            cur = cur->next;
        }

        // printList
        while (head) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
        
        // 释放内存
        delete head;
        head = NULL;
    }
    cout << "end" << endl;
}

int main() {
    test();
    return 0;
}
