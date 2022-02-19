void find_intersection(Node* head1, Node* head2)
{
	Node* rear1 = head1;
	Node* rear2 = head2;

	while (rear1->next) rear1 = rear1->next;
	while (rear2->next) rear2 = rear2->next;

	if (rear1 == rear2)
	std::cout << "Intersection found\n";
	else
	std::cout << "No intersection\n";
}
