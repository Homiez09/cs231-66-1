package com.example.designpattern.Store;
// 6510405750 ภูมิระพี เสริญวณิชกุล
public class Main {
    public static void main(String[] args) {
        Store store = new Store();
        store.addProduct("Big Java", 300, 5);
        store.addProduct("Da Vinci Code", 120, 0);
        store.addProduct("Python 101", 200, 10);

        Product.Counter countAll = new CountAll();
        Product.Counter countInStock = new CountInStock();
        Product.Counter countQuantity = new CountQuantity();

        System.out.println("Total Products: " + store.countProduct(countAll));
        System.out.println("Products In Stock: " + store.countProduct(countInStock));
        System.out.println("Total Product Quantity: " + store.countProduct(countQuantity));

        System.out.println("Product Details:");
        for (Product product : store.getProducts()) {
            System.out.println(product.toString());
        }
    }
}
