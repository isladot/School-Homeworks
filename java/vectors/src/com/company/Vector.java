package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Vector {
    int[] v = new int[100];

    public Vector() {
    }

    public void insert(int value) {
        v[v.length] = value;
    }

    public int getMax() {
        return Arrays.stream(v).max().getAsInt();
    }

    public double getMean(){
        return Arrays.stream(v).average().getAsDouble();
    }

    public int reduce(int index) {
        if(v.length < index){
            Arrays.asList(v).remove(index);
            return 0;

        } else {
            return -1;
        }
    }
}