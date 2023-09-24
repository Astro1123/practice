package Test;

import Sort.*;
import Sort.Const.*;
import Sort.BubbleSort.*;
import Sort.GnomeSort.*;
import Sort.MergeSort.*;
import Sort.QuickSort.*;
import Sort.SelectionSort.*;
import Sort.InsertionSort.*;
import Sort.HeapSort.*;
import Sort.ShakerSort.*;

public class TestDriver {
	private final int LENGTH = 16;
	
	public static void main(String[] args) {
		TestDriver td = new TestDriver();
		System.out.println("Bubble sort:");
		td.test(new BubbleSort());
		System.out.println("----------------------------------------");
		System.out.println("Gnome sort:");
		td.test(new GnomeSort());
		System.out.println("----------------------------------------");
		System.out.println("Merge sort:");
		td.test(new MergeSort());
		System.out.println("----------------------------------------");
		System.out.println("Quick sort:");
		td.test(new QuickSort());
		System.out.println("----------------------------------------");
		System.out.println("Selection sort:");
		td.test(new SelectionSort());
		System.out.println("----------------------------------------");
		System.out.println("Insertion sort:");
		td.test(new InsertionSort());
		System.out.println("----------------------------------------");
		System.out.println("Heap sort:");
		td.test(new HeapSort());
		System.out.println("----------------------------------------");
		System.out.println("Shaker sort:");
		td.test(new ShakerSort());
	}
	
	private void test(Sort sort) {
		Test t = new Test();
		int[] arr = t.make(LENGTH);
		t.print(arr);
		
		int[] result = sort.sort(arr);
		t.print(result);
	}
}