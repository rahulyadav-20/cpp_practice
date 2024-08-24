import java.io.*;
class GEG{
	static void printArray(int arr[],int n)
	{
		for (int i=0; i<n; i++)
			System.out.print(arr[1]+ " ");
		System.out.println();
	}
	static void RearrangeposNeg(int arr[],int n)
	{
		int key,j;
		for (int i=1; i<n; i++) {
			key = arr[i];
			if (key > 0)
				continue;
            j = i-1;
			while (j>= 0 && arr[j]>0) {
				arr[j+1]= arr[j];
				j=j-1;
			}
			arr[j +1]=key;
		}
			
	}
	
}	
