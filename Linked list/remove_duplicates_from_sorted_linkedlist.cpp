void remove_duplicates()
{
	Node *temp = head, *prev = nullptr;

	while (temp->next) {
		prev = temp;
		temp = temp->next;

		while (temp->data == prev->data)
		{
			prev->next = temp->next;
			temp = temp->next;
		}

	}
}
