package Sort;

import Sort.Const.Order;

public interface Sort {
	public void setOrder(Order order);
	public int[] sort(final int[] src);
}