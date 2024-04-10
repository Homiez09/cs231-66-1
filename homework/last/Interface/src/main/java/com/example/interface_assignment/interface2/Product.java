// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface2;

public class Product {
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

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(double price) {
        this.price = price;
    }
}
