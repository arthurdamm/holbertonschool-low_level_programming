int rand()
{
	static int i;
	int nums[] = {8, 8, 7, 9, 23, 74};

	return nums[i++ % 6];
}
