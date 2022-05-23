package com.company;

public class Studente {
    String idStudente;
    Classe classe;

    public Studente(String id, Classe classe){
        idStudente = id;
        this.classe = classe;
    }

    public String getIdStudente() {
        return idStudente;
    }

    public Classe getClasse() {
        return classe;
    }
}
