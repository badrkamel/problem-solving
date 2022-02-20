void printMiddle()
{
    Node *fast = head, *slow = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    std::cout << "The middle element is: " << slow->data << "\n";
}
