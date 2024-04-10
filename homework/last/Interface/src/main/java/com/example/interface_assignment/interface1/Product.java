// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface1;

public class Product implements Comparable<Product> {
    private String name;
    private double price; // ราคา
    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }
    public String getName() {
        return name;
    }
    public double getPrice() {
        return price;
    }
    @Override
    public int compareTo(Product other) {
        return Double.compare(this.price, other.price);
    }
}
