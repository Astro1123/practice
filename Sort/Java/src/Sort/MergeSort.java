package Sort;

import java.util.Arrays;

import Debug.Log;
import Sort.Const.Order;

public class MergeSort implements Sort {
	private Order order;
	private final String methodName = "Merge sort";
	
	public MergeSort() {
		setOrder(Order.ASC);
	}
	
	public MergeSort(Order order) {
		setOrder(order);
	}
	
	public MergeSort(boolean order) {
		setOrder(order);
	}
	
	@Override
	public void setOrder(boolean order) {
		if (order) {
			this.order = Order.ASC;
		} else {
			this.order = Order.DESC;
		}
	}
	
	@Override
	public void setOrder(Order order) {
		this.order = order;
	}
	
	@Override
	public void printOrder() {
		if (order == Order.ASC) {
			System.out.println("Order: Ascending");
		} else {
			System.out.println("Order: Descending");
		}
	}
	
	@Override
	public int[] sort(final int[] src) {
		int[] dst = Arrays.copyOf(src, src.length);
		int[] tmp = new int[src.length];
		
		mergeSort(dst, tmp, 0, dst.length-1);
		
		return dst;
	}
	
	@Override
	public String getName() {
		return methodName;
	}
	
	private void mergeSort(int[] arr, int[] tmp, int left, int right) {
		int mid;
		if (right > left) {
			mid = (right + left) / 2;
			mergeSort(arr, tmp, left, mid);
			mergeSort(arr, tmp, mid+1, right);
			
			merge(arr, tmp, left, mid, right);
		}
	}
	
	private void merge(int[] arr, int[] tmp, int left, int mid, int right) {
		int lp = left;
		int rp = mid+1;
		int tp = 0;
		
		while ((lp <= mid) && (rp <= right)) {
			if ( comp( arr[lp], arr[rp] ) ) {
				tmp[tp++] = arr[lp++];
			} else {
				tmp[tp++] = arr[rp++];
			}
		}
		while (rp <= right) {
			tmp[tp++] = arr[rp++];
		}
		while (lp <= mid) {
			tmp[tp++] = arr[lp++];
		}
		for (int i = 0; i < tp; i++) {
			arr[left + i] = tmp[i];
		}
	}
	
	private boolean comp(int i, int j) {
		if (this.order == Order.ASC) {
			return i <= j;
		}
		return i >= j;
	}
}