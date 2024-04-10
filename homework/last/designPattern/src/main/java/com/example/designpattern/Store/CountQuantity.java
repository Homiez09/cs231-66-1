package com.example.designpattern.Store;
// 6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.List;

public class CountQuantity implements Product.Counter {
    @Override
    public int count(List<Product> products) {
        int count = 0;
        for (Product prod : products) {
            count += prod.getQuantity();
        }
        return count;
    }
}