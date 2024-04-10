package com.example.composition.composition2;
//6510405750 ภูมิระพี เสริญวณิชกุล
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Invoice invoice = new Invoice("Sam's Small Appliances", "100 Main Street\nAnytown, CA 98765");

        while (true) {
            System.out.print("Enter product name (or done to finish): ");
            String productName = scanner.nextLine();

            if (productName.equalsIgnoreCase("done")) {
                break;
            }

            System.out.print("Enter price: ");
            double price = Double.parseDouble(scanner.nextLine());

            System.out.print("Enter quantity: ");
            int quantity = Integer.parseInt(scanner.nextLine());

            Product product = new Product(productName, price, quantity);
            invoice.addProduct(product);
        }

        invoice.printInvoice();
    }
}
