int min(int a, int b) {
	if (a>b)
		return a;
	return b;
}
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

	Node* bigger, *lesser;
	if (len1 > len2) {
		bigger = first;
		lesser = second;
	} else {
		bigger = second;
		lesser = first;
	}

	for (size_t i={}; i < d; i++)
	bigger = bigger->next;

	while (bigger && lesser) {
		if (bigger == lesser) {
			printf("Intersection node address is: %p, Value: %d\n", bigger, bigger->data);
			return;
		}
		bigger = bigger->next;
		lesser = lesser->next;
	}

	std::cout << "No Intersection\n";
}
