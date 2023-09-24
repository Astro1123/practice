package Sort;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.List;

import Sort.BubbleSort.*;
import Sort.GnomeSort.*;
import Sort.MergeSort.*;
import Sort.QuickSort.*;
import Sort.SelectionSort.*;
import Sort.InsertionSort.*;
import Sort.HeapSort.*;
import Sort.ShakerSort.*;

public class SortMap {
	private Map<String, Sort> sortMap;
	
	public SortMap() {
		sortMap = new LinkedHashMap<>();
		sortMap.put("Bubble", new BubbleSort());
		sortMap.put("Gnome", new GnomeSort());
		sortMap.put("Merge", new MergeSort());
		sortMap.put("Quick", new QuickSort());
		sortMap.put("Selection", new SelectionSort());
		sortMap.put("Insertion", new InsertionSort());
		sortMap.put("Heap", new HeapSort());
		sortMap.put("Shaker", new ShakerSort());
	}
	
	public Sort getMethod(String key) {
		Sort result = null;
		if (sortMap.containsKey(key)) {
			result = sortMap.get(key);
		}
		return result;
	}
	
	public Map<String, Sort> getSortMap() {
		return sortMap;
	}
	
	public Map<String, Sort> getSortMap(List<String> list) {
		Map<String, Sort> result = new LinkedHashMap<>();
		for (String key : list) {
			if (sortMap.containsKey(key)) {
				result.put(key, sortMap.get(key));
			}
		}
		return result;
	}
	
	public Map<String, Sort> getSortMap(String key) {
		Map<String, Sort> result = new LinkedHashMap<>();
		if (sortMap.containsKey(key)) {
			result.put(key, sortMap.get(key));
		}
		return result;
	}
	
	public Map<String, Sort> getSortMap(String... list) {
		Map<String, Sort> result = new LinkedHashMap<>();
		for (String key : list) {
			if (sortMap.containsKey(key)) {
				result.put(key, sortMap.get(key));
			}
		}
		return result;
	}
}