//sort array using templates
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {2,1,6,3,4};
	int size = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
