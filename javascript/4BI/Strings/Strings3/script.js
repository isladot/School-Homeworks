function getResults() {
  let name = document.getElementById('name').value;
  let surname = document.getElementById('surname').value;
  let nameResult = getConsonants(name);
  let surnameResult = getConsonants(surname);

  if (nameResult.length > 0) {
    document.getElementById('name-result').innerHTML = nameResult;
  } else {
    document.getElementById('name-result').innerHTML = 'No consonanti.';
  }

  if (surnameResult.length > 0) {
    document.getElementById('surname-result').innerHTML = sursurnameResult;
  } else {
    document.getElementById('surname-result').innerHTML = 'No consonanti.';
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
