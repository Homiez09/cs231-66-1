package com.example.designpattern.Store;
// 6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.List;

public class CountInStock implements Product.Counter {
    @Override
    public int count(List<Product> products) {
        int count = 0;
        for (Product prod : products) {
            if (prod.getQuantity() > 0) {
                count++;
            }
        }
        return count;
    }
}
