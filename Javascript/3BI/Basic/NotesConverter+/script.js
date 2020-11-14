var note, giudizio;

function input(){
    note = parseInt(note = prompt("Inserire il voto da convertire:", "10"));  
}

function controls(){
    switch(note){
        case 1:
        case 2:
            giudizio = "Insufficienza grave";
            break;
        case 3:
        case 4:
            giudizio = "Insufficienza";
            break;
        case 5:
            giudizio = "Lieve insufficienza";
            break;
        case 6:
            giudizio = "Sufficienza";
            break;
        case 7:
            giudizio = "Discreto";
            break;
        case 8:
            giudizio = "Buono";
            break;
        case 9:
            giudizio = "Distinto";
            break;
        case 10:
            giudizio = "Ottimo";
            break;
    }
}

function main(){
    input();
    if(isNaN(note)==false && note>0 && note<=10){
        controls();
        alert("Giudizio: " + giudizio);
    }
    else {
        alert("Giudizio: Dati non validi");
    }
}