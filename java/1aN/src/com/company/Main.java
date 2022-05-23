package com.company;

public class Main {
    public static void main(String[] args) {
        Classe c1 = new Classe("5BI");
        Studente s1 = new Studente("1", c1);
        c1.addStudente(s1);
        Studente s2 = new Studente("2", c1);
        c1.addStudente(s2);

        System.out.printf("Facoltà %s%n", c1.getCodice());
        System.out.printf("Studenti %s%n", c1.getStudenti());

        System.out.printf("Studente %s: %s", s1.getIdStudente(), s1.getClasse().getCodice());
    }
}
