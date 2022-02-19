bool hasCycle(Node *head)
{
	Node *slow = head;
	Node *fast = head->next;

	while (fast && slow && fast->next)
	{
		if (fast == slow){
			return true;
		}
		fast = fast->next->next;
		slow = slow->next;
	}
	return false;
}
