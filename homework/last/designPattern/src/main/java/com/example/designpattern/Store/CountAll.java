package com.example.designpattern.Store;
// 6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.List;

public class CountAll implements Product.Counter {
    @Override
    public int count(List<Product> products) {
        return products.size();
    }
}