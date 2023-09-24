package Test;

import java.util.Map;
import java.util.LinkedHashMap;
import java.util.Iterator;

import Sort.*;
import Sort.Const.*;

public class TestDriver {
	private final int LENGTH = 16;
	private final String[] LIST = {"Bubble", "Selection", "Insertion", "Heap", "Merge", "Quick"};
	
	public static void main(String[] args) {
		TestDriver td = new TestDriver();
		td.startDriver();
	}
	
	private void startDriver() {
		SortMap sm = new SortMap();
		sm.makeMap();
		Map<String, Sort> sortMap = sm.getSortMap(LIST);
		
		System.out.println("----------------------------------------");
		for (Iterator<String> itr = sortMap.keySet().iterator(); itr.hasNext();) {
			String key = itr.next();
			System.out.println(String.format("%s sort:", key));
			test(sortMap.get(key));
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