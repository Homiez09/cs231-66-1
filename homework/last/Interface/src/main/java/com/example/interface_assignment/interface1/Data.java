// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface1;

public class Data {
    public static <T extends Comparable<T>> T min(T[] array) {
        if (array == null || array.length == 0) {
            throw new IllegalArgumentException("Array must not be empty");
        }

        T min = array[0];
        for (T item : array) {
            if (item.compareTo(min) < 0) {
                min = item;
            }
        }

        return min;
    }
}
