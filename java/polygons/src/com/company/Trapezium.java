package com.company;

public class Trapezium {
    // Trapezium sides.
    float lato1, lato2, lato3, lato4, altezza;

    // Trapezium constructor,
    Trapezium(float side1, float side2, float side3, float side4, float height) {
        lato1 = side1;
        lato2 = side2;
        lato3 = side3;
        lato4 = side4;
        altezza = height;
    }

    // Getters.
    public float getLato1() {
        return lato1;
    }
    public float getLato2() {
        return lato2;
    }
    public float getLato3() {
        return lato3;
    }
    public float getLato4() {
        return lato4;
    }
    public float getAltezza() {
        return altezza;
    }

    // Setters.
    public void setLato1(float lato1) {
        this.lato1 = lato1;
    }
    public void setLato2(float lato2) {
        this.lato2 = lato2;
    }
    public void setLato3(float lato3) {
        this.lato3 = lato3;
    }
    public void setLato4(float lato4) {
        this.lato4= lato4;
    }
    public void setHeight(float height) {
        this.altezza= height;
    }

    // Get trapezium perimeter.
    public float getTrapeziumPerimeter() {
        return lato1+lato2+lato3+lato4;
    }

    // Get trapezium area.
    public float getTrapeziumArea() {
        return (lato1+lato2)/2*altezza;
    }
}
