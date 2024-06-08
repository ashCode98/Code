#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArrayToLinkedlist(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int lengthOfLinkedList(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node *removeHead(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *removetail(Node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

Node *deletingKth(Node *head, int key)
{
    if (head == NULL)
        return NULL;

    if (key == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == key)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node *deletingByValue(Node *head, int value)
{
    if (head == NULL)
        return NULL;

    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int value)
{
    Node *temp = new Node(value, head);
    return temp;
}

Node *insertTail(Node *head, int value)
{

    if (head == NULL)
    {
        Node *temp = new Node(value);
        return temp;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        Node *newNode = new Node(value);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

Node *insertKth(Node *head, int value, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            Node *temp = new Node(value);
            return temp;
        }
        else
        {
            return head;
        }
    }
    if (k == 1)
    {
        Node *newNode = new Node(value, head);
        return newNode;
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *x = new Node(value, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> v = {2, 1, 3, 8, 5, 3, 3, 6};

    Node *head = convertArrayToLinkedlist(v);

    head = insertTail(head, 4);

    // head = deletingKth(head, 5);

    print(head);
    // head = removeHead(head);
    // head = removetail(head);

    // print(head);

    // cout << lengthOfLinkedList(head);

    // while (temp != nullptr) {
    //     temp = temp->next;
    // }
}