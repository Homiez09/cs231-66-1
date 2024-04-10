package com.example.composition.composition2;
//6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.ArrayList;

public class Invoice {
    private String name;
    private String address;
    private ArrayList<Product> products;

    public Invoice(String name, String address) {
        products = new ArrayList<>();
        this.name = name;
        this.address = address;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public void addProduct(Product product) {
        products.add(product);
    }

    public double calTotal() {
        double totalPrice = 0;
        for (Product product : products) {
            totalPrice += product.getTotalPrice();
        }
        return totalPrice;
    }

    public void printInvoice() {
        System.out.println("\t\t\t\tI N V O I C E");
        System.out.println(name);
        System.out.println(address);
        System.out.println("\n");
        System.out.println("Description\t\t\t\tPrice\tQty\tSubtotal");

        for (Product product : products) {
            System.out.printf("\t%-20s%-10.2f%-5d%-10.2f\n", product.getName(), product.getPrice(),
                    product.getQuantity(), product.getTotalPrice());
        }

        System.out.println("\nTOTAL TO PAY:  $ " + this.calTotal());
    }
}
