class IntArray {

public:
	IntArray(int* arr, int size) {
		arr_ = new int[size];
		size_ = size;

		for (int i = 0; i < size_; i++) {
			arr_[i] = arr[i];
		}
	}

	//���� ���������
	IntArray(const IntArray& rhs) 
		{
		int size_ = rhs.size;
		int* arr_ = new int[size_];
		for (int i = 0; i < size_; i++) {
			arr_[i] = rhs.arr[i];
		}
	}


private :
	int* arr;
	int size;
	

};

int main(void) {
	int arr[] = { 1,2,3 };
	IntArray ia = IntArray(arr, sizeof(arr)/sizeof(*arr));
	IntArray ca = ia;  //��������� ȣ��

	return 0;
}