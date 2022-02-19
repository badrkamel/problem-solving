void find_from_back(int th)
{
	Node* p1 = head;
	Node* p2 = head;

	for (int i{}; i < th; i++)
	{
		p2 = p2->next;
	}
	while (p2) {
		p1 = p1->next;
		p2 = p2->next;
	}
	std::cout << "The "<<th
			<<"'th node from back is: " << p1->data << "\n";
}
