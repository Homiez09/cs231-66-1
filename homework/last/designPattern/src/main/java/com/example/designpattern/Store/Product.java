package com.example.designpattern.Store;
// 6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.List;

public class Product {
    private String name;
    private double price;
    private int quantity;

    public Product(String name, double price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    @Override
    public String toString() {
        return "Product: " + name + ", Price: " + price + ", Quantity: " + quantity;
    }


    public interface Counter {
        int count(List<Product> products);
    }

}
