// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface1;

public class Car implements Comparable<Car> {
    private String license;
    private double kiloDriven; // ระยะทางการขับ
    public Car(String license, double kiloDriven) {
        this.license = license;
        this.kiloDriven = kiloDriven;
    }
    public String getLicense() {
        return license;
    }
    public double getKiloDriven() {
        return kiloDriven;
    }
    @Override
    public int compareTo(Car other) {
        return Double.compare(this.kiloDriven, other.kiloDriven);
    }
}
