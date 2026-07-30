/*创建一个整形数组，完成对数组的操作

  1.实现函数Init() 初始化数组为全0
  2.实现print()  打印数组的每个元素
  3.实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。

*/
void Init(int arr[], int sz, int set)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = set;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);		
	}
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arry[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arry) / sizeof(arry[0]);
	Print(arry, sz);
	Reverse(arry, sz);
	Print(arr, sz);
	Init(arry, sz, 0);
	Print(arry, sz);
	return 0;
}