// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface1;

public class SortUtils {
    public static <T extends Comparable<T>> void sort(T[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < array.length; j++) {
                if (array[j].compareTo(array[minPos]) < 0) {
                    minPos = j;
                }
            }

            T temp = array[minPos];
            array[minPos] = array[i];
            array[i] = temp;
        }
    }
}

