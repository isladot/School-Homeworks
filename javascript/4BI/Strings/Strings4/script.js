function checkFiscalCode() {
  let nameValue = document.getElementById('name').value.toLowerCase();
  let surnameValue = document.getElementById('surname').value.toLowerCase();
  let birthdayValue = document.getElementById('birthday').value.toLowerCase();
  let fiscalCodeValue = document
    .getElementById('fiscal_code')
    .value.toLowerCase();

  //Check input.
  if (
    nameValue == '' ||
    surnameValue == '' ||
    birthdayValue == '' ||
    fiscalCodeValue == ''
  ) {
    alert('Si prega di inserire tutte le informazioni richieste.');
    return;
  }

  //Check fiscal code.
  if (
    getConsonants(surnameValue).substring(0, 3) !=
      fiscalCodeValue.substring(0, 3) ||
    getConsonants(nameValue).substring(0, 3) !=
      fiscalCodeValue.substring(3, 6) ||
    birthdayValue.split('/')[2] != fiscalCodeValue.substring(6, 8)
  ) {
    alert('Sono stati rilevati degli errori.');
  } else {
    alert('Codice fiscale inserito correttamente.');
  }
}

function getConsonants(value) {
  let results = '';
  for (let i = 0; i < value.length; i++) {
    let letter = value[i];
    if (
      letter != 'a' &&
      letter != 'e' &&
      letter != 'i' &&
      letter != 'o' &&
      letter != 'u'
    ) {
      results += letter;
    }
  }
  return results;
}
