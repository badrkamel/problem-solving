void move_last_to_front()
{
	Node* last = head, *prev = nullptr;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = nullptr;
	last->next = head;
	head = last;
}
