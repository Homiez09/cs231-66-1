// 6510405750 ภูมิระพี เสริญวณิชกุล
package com.example.interface_assignment.interface2;

public class Car {
    private String license;
    private double kiloDriven; // ระยะทางการขับ

    public Car(String license, double kiloDriven) {
        this.license = license;
        this.kiloDriven = kiloDriven;
    }

    public void setLicense(String license) {
        this.license = license;
    }

    public void setKiloDriven(double kiloDriven) {
        this.kiloDriven = kiloDriven;
    }

    public String getLicense() {
        return license;
    }
    public double getKiloDriven() {
        return kiloDriven;
    }
}
