int count(Node* head) {
	size_t nodes{};
	for (Node *curr = head; curr; curr = curr->next)
		nodes++;
	return nodes;
}
void get_intersection_node(Node* first, Node* second)
{
	size_t len1 = count(first);
	size_t len2 = count(second);

	int d = abs(len1-len2);

	if (len1>len2)
		for (size_t i={}; i < d; i++)
			first = first->next;
	else
		for (size_t i={}; i < d; i++)
			second = second->next;

	while (first != second) {
		first = first->next;
		second = second->next;
	}

	if (first && first == second)
		printf("Intersection node address is: %p, Value: %d\n", first, first->data);
	else
		printf("No Intersection\n");
}
