var giorno = [
  'Domenica',
  'Lunedì',
  'Martedì',
  'Mercoledì',
  'Giovedì',
  'Venerdì',
  'Sabato'
];
var mese = [
  'Gennaio',
  'Febbraio',
  'Marzo',
  'Aprile',
  'Maggio',
  'Giugno',
  'Luglio',
  'Agosto',
  'Settembre',
  'Ottobre',
  'Novembre',
  'Dicembre'
];

function main() {
  var test = setInterval(clock, 1000);
  ex5();
}

function clock() {
  var d = new Date();
  document.getElementById('day').innerHTML = giorno[d.getDay()];
  document.getElementById('nday').innerHTML = d.getDate();
  document.getElementById('month').innerHTML = mese[d.getMonth()];
  document.getElementById('year').innerHTML = d.getFullYear();
  document.getElementById('time').innerHTML = d.toLocaleTimeString();
}

function ex5() {
  var d2 = new Date();
  document.getElementById('date').innerHTML =
    d2.getDate() + '-' + (d2.getMonth() + 1) + '-' + d2.getFullYear();
  document.getElementById('hms').innerHTML =
    d2.getHours() + ':' + d2.getMinutes() + ':' + d2.getSeconds();
  document.getElementById('fulldate').innerHTML = d2;
}
