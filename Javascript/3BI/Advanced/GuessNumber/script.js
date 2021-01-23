var nmosse;
var random;
var results;
var cont = 1;
var found = false;

function play() {
  nmosse = document.getElementById('nmosse').value;
  document.getElementById('mosse').innerHTML = nmosse;
  random = Math.floor(Math.random() * 50) + 1;
}

function check() {
  var num = document.getElementById('num').value;
  results = document.getElementById('results');
  if (cont <= nmosse && found != true) {
    if (num < random) {
      var newSpan = document.createElement('span');
      newSpan.innerHTML = 'Mossa ' + cont + ': il numero ' + num + ' è minore!';
      results.appendChild(newSpan);
      var newBr = document.createElement('br');
      results.appendChild(newBr);
      cont++;
    } else if (num > random) {
      var newSpan = document.createElement('span');
      newSpan.innerHTML =
        'Mossa ' + cont + ': il numero ' + num + ' è maggiore!';
      results.appendChild(newSpan);
      var newBr = document.createElement('br');
      results.appendChild(newBr);
      cont++;
    } else {
      found = true;
      document.getElementById('risposta').innerHTML =
        random + ', hai indovinato in ' + cont + ' mosse!';
    }
  }
  if (cont > nmosse) {
    document.getElementById('risposta').innerHTML =
      random + ', non hai indovinato in ' + nmosse + ' mosse!';
    alert(
      'Hai finito il numero di mosse disponibili! Resetta il gioco per riprovare.'
    );
  }
}

function reset() {
  document.getElementById('nmosse').value = '';
  document.getElementById('num').value = '';
  results = document.getElementById('results');
  nmosse = null;
  random = null;
  cont = 1;
  found = false;
  document.getElementById('mosse').innerHTML = 'x';
  document.getElementById('risposta').innerHTML = '';
  while (results.hasChildNodes) {
    results.removeChild(results.firstChild);
  }
}
