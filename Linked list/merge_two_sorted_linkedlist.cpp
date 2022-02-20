Node* mergeTwoLists(Node* list1, Node* list2) {

	Node* temp = new Node(-1);
	Node* head = temp;
	while (list1 && list2)
	{
		if (list1->data < list2->data) {
			temp->next = list1;
			list1 = list1->next;
		}
		else
		{
			temp->next = list2;
			list2 = list2->next;
		}
		temp = temp->next;
	}
	if (list1)
		temp->next = list1;
	else
		temp->next = list2;

	return head->next;
}
