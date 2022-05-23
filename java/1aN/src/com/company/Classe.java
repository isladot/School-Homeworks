package com.company;

import java.util.ArrayList;

public class Classe {
    private String codice;
    private ArrayList<Studente> studenti = new ArrayList<Studente>();

    Classe(String codice) {
        this.codice = codice;
    }

    public String getCodice() {
        return codice;
    }

    public void addStudente(Studente s) {
        studenti.add(s);
    }

    public String getStudenti() {
        return studenti.toString();
    }
}
