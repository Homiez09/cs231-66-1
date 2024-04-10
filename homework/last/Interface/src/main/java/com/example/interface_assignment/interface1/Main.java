// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface1;

public class Main {
    public static void main(String[] args) {
        Product[] products = new Product[3];
        products[0] = new Product("Product A", 100.0);
        products[1] = new Product("Product B", 75.0);
        products[2] = new Product("Product C", 50.0);

        Car[] cars = new Car[3];
        cars[0] = new Car("License A", 5000.0);
        cars[1] = new Car("License B", 7500.0);
        cars[2] = new Car("License C", 3000.0);

        SortUtils.sort(products);

        SortUtils.sort(cars);

        System.out.println("Sorted Products by Price:");
        for (Product product : products) {
            System.out.println(product.getName() + " - " + product.getPrice());
        }

        System.out.println("\nSorted Cars by Kilo Driven:");
        for (Car car : cars) {
            System.out.println(car.getLicense() + " - " + car.getKiloDriven());
        }
    }
}

