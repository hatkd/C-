int ADD(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+ADD(n-1);
	}
}

//���ַǵݹ�
int Frecursion(int *a,int key){
	int i = 0,j = max-1;
	//����ͷβָ��
	int middle = (i+j)/2;
	while(a[middle] != key){
		if(a[middle] > key){
			j = middle;
			middle = (i+j)/2;
		}
		else if(a[middle] < key)
		{
		
			i = middle;
			middle = (i+j)/2;
		}
		else
			return 1;
	} 
if(a[(i+j)/2+1]  == key )
return 1;
else
return 0;
}

//���ֵݹ� 
int Trecursion(int *arr, int low, int high, int target){
	
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return Trecursion(arr, low, mid - 1, target);
        } else {
            return Trecursion(arr, mid + 1, high, target);
        }
    
    return -1;
}
}

// ���ӷֽ�����,�ݹ���,!!!!!!!!
int Break(int n)
{
	int  ans = 1,i;//ans==1��ֱ����������*1��һ����� 
	for (i = 2;i*i<n;i++) 
	{
		if(n%i == 0)
			ans += Break(i) + Break(n/i);
		if(i+i == n)
		  	ans += Break(i);
		return ans;
	} 
 }

