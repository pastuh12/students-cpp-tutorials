#include <iostream>

using namespace std;

struct Node
{
    string val;
    Node *next;
    Node(string _val) {
        val = _val;
        next = nullptr;
        cout << _val;
    }
};

struct list
{
    Node *first;// голова
    Node *last;
    list() : first(nullptr), last(nullptr) {}

    bool is_empty()
    {
        return first == nullptr;
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
};

int main()
{

    string name;
    int age;
    list l;

    l.push_back("dsd");
    l.push_back("gggg");
    
    cout << endl;


    l.print();
    return 0;
}