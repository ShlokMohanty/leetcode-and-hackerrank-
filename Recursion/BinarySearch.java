
public class Binary_Search {
public static void main(String[] args) {
	int[] arr= {2,4,6,9,11,12,14,20,36,48};
	
	int target=14;
	
	System.out.println(search(arr,0,arr.length-1,target));
}
static int search(int[] arr,int start,int end,int target) {
	if(start>end) {
		return -1;
	}
		int mid=start+(end-start)/2;
		
		if(arr[mid]==target) {
			return mid;
		}
		else if(target<arr[mid]) {
			return search(arr,start,mid-1,target);
		}
		else {
			return search(arr,mid+1,end,target);
		}
	}
}

