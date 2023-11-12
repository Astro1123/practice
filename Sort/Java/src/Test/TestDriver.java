package Test;

import Sort.*;
import Sort.Const.*;

public class TestDriver {
	private final int LENGTH = 16;
	private final Sort[] LIST = {
		new BubbleSort(), 
		new SelectionSort(), 
		new InsertionSort(), 
		new HeapSort(), 
		new MergeSort(), 
		new QuickSort(),
		new ShellSort(1),
		//new GnomeSort(),
		//new ShakerSort(),
	};
	
	public static void main(String[] args) {
		TestDriver td = new TestDriver();
		td.startDriver();
	}
	
	private void startDriver() {
		System.out.println("----------------------------------------");
		for (Sort s : LIST) {
			System.out.print("Method: ");
			System.out.println(s.getName());
			s.printOrder();
			test(s);
			System.out.println("----------------------------------------");
		}
	}
	
	private void test(Sort sort) {
		Test t = new Test();
		int[] arr = t.make(LENGTH);
		t.print(arr);
		
		int[] result = sort.sort(arr);
		t.print(result);
	}
}