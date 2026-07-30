#define _CRT_SECURE_NO_WARNINGS 1
//写一个二分查找函数
// 二分查找（Binary Search）是一种高效的查找算法，也称为折半查找。
// 它的核心思想是：在已排序的数组中，通过不断将查找范围减半，快速定位目标元素。
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while(left<=right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;//找打了，返回下标
	}
	return -1;//找不到，返回-1
}
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字

