package Sort.SelectionSort;

import java.util.Arrays;

import Debug.Log;
import Sort.Const.Order;
import Sort.Sort;

public class SelectionSort implements Sort {
	private Order order;
	
	public SelectionSort() {
		setOrder(Order.ASC);
	}
	
	public SelectionSort(Order order) {
		setOrder(order);
	}
	
	@Override
	public void setOrder(Order order) {
		this.order = order;
	}
	
	@Override
	public int[] sort(final int[] src) {
		int[] dst = Arrays.copyOf(src, src.length);
		int ext;
		int extpos;
		int i, j;
		
		for (i = 0; i < dst.length-1; i++) {
			ext = dst[i];
			extpos = i;
			for (j = i+1; j < dst.length; j++) {
				if ( comp( ext, dst[j] ) ) {
					extpos = j;
					ext = dst[j];
				}
			}
			swap(dst, i, extpos);
		}
		
		return dst;
	}
	
	private boolean comp(int i, int j) {
		if (this.order == Order.ASC) {
			return i > j;
		}
		return i < j;
	}
	
	private void swap(int[] arr, int e1, int e2) {
		int tmp = arr[e1];
		arr[e1] = arr[e2];
		arr[e2] = tmp;
	}
}