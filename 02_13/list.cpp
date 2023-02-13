#include <iostream>

using namespace std;

struct Node
{
    string val;
    Node *next;
    Node(string _val) : val(_val), next(nullptr)
    {
        cout << _val;
    }
};

struct list
{
    Node *first;
    Node *last;
    list() : first(nullptr), last(nullptr) {}

    bool is_empty()
    {
        return first == nullptr;
    }

    void push_back(string _val)
    {
        Node *p = new Node(_val);
        if (is_empty())
        {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void print()
    {
        if (is_empty())
            return;
        Node *p = first;
        while (p)
        { // p != nullptr
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }

    Node *find(string _val)
    {
        Node *p = first;
        while (p && p->val != _val)
            p = p->next;
        return (p && p->val == _val) ? p : nullptr;
    }

    void remove_first()
    {
        if (is_empty())
            return;
        Node *p = first;
        first = p->next;
        delete p;
    }
};

int main()
{
    list l;
    cout << l.first << endl;
    l.push_back("dsd");
    cout << l.first->val << endl;

    cout << l.find("dsd")->val << endl;
    return 0;
}