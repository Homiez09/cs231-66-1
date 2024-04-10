// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface2;

import java.util.Comparator;

public class Data {
    public static <T> T min(T[] array, Comparator<T> comparator) {
        if (array == null || array.length == 0) {
            throw new IllegalArgumentException("Array must not be empty");
        }

        T min = array[0];
        for (T item : array) {
            if (comparator.compare(item, min) < 0) {
                min = item;
            }
        }

        return min;
    }
}
