// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface2;

import java.util.Comparator;

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

        Comparator<Product> productComparator = Comparator.comparing(Product::getPrice);
        Comparator<Car> carComparator = Comparator.comparing(Car::getKiloDriven);

        Product minProduct = Data.min(products, productComparator);
        Car minCar = Data.min(cars, carComparator);

        System.out.println("Product with the minimum price: " + minProduct.getName() + " - " + minProduct.getPrice());
        System.out.println("Car with the minimum kilo driven: " + minCar.getLicense() + " - " + minCar.getKiloDriven());
    }
}
