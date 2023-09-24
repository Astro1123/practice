package Test;

import Sort.*;
import Sort.Const.*;

public class TestDriver {
	private final int LENGTH = 16;
	private final String[] LIST = {
		"Bubble", 
		"Selection", 
		"Insertion", 
		"Heap", 
		"Merge", 
		"Quick",
		//"Gnome",
		//"Shaker"
	};
	
	public static void main(String[] args) {
		TestDriver td = new TestDriver();
		td.startDriver();
	}
	
	private void startDriver() {
		SortMap sm = new SortMap();
		
		System.out.println("----------------------------------------");
		for (String key : LIST) {
			System.out.println(String.format("%s sort:", key));
			test(sm.getMethod(key));
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