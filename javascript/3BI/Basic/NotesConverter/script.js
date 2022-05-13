var note, giudizio;

function input() {
  note = prompt('Inserire il voto da convertire:', '10');
}

function controls() {
  if (note < 6) {
    giudizio = 'Insufficiente';
  } else if (note >= 6 && note < 7) {
    giudizio = 'Sufficiente';
  } else if (note >= 7 && note < 8) {
    giudizio = 'Discreto';
  } else if (note >= 8 && note < 9) {
    giudizio = 'Buono';
  } else if (note >= 9 && note < 10) {
    giudizio = 'Distinto';
  } else if (note == 10) {
    giudizio = 'Ottimo';
  }
}

//Inizio controls 2.0 (utilizzo del for (riduzione degli if statements))
function controls2() {
  var carray = 1;
  var giudizi = [
    'Insufficiente',
    'Sufficiente',
    'Discreto',
    'Buono',
    'Distinto',
    'Ottimo'
  ];
  if (note < 6) {
    giudizio = giudizi[0];
  } else {
    if (note >= 6 && note < 10) {
      for (var i = 6; i < 10; i++) {
        if (note >= i && note < i + 1) {
          giudizio = giudizi[carray];
        } else carray++;
      }
    } else giudizio = giudizi[5];
  }
}
//Fine controls 2.0

function result() {
  alert('Il voto ' + note + ' equivale al giudizio: ' + giudizio);
  document.write('Il voto ' + note + ' equivale al giudizio: ' + giudizio);
}

function main() {
  input();
  if (isNaN(note) == false && note >= 0 && note <= 10) {
    controls2();
    result();
  } else {
    alert("E'stato inserito un voto non valido, riprova.");
  }
}
