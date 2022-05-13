package com.company;

public class Triangle {
    // Triangle sides.
    float lato1, lato2, lato3;

    // Triangle constructor,
    Triangle(float side1, float side2, float side3) {
        lato1 = side1;
        lato2 = side2;
        lato3 = side3;
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

    // Get triangle perimeter.
    public float getTrianglePerimeter() {
        return lato1+lato2+lato3;
    }
}
