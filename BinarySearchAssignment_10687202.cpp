int binarySearch(const int array[], int numElems, int value)
{
	int first = 0, last = numElems − 1, middle, position = −1;
	bool found = false; 

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}

		else if (array[middle] > value)
			last = middle − 1;
		else
			first = middle + 1;
	}
	
	return position;
}