function check() {
  let nameValue = document.getElementById('name').value.toLowerCase();
  let surnameValue = document.getElementById('surname').value.toLowerCase();
  let startDateValue = new Date(document.getElementById('start-date').value);
  let endDateValue = new Date(document.getElementById('end-date').value);

  if (nameValue == '' || surnameValue == '') {
    alert('Inserire nome e cognome validi.');
    return;
  } else {
    if (isNaN(startDateValue) || startDateValue < new Date()) {
      alert('Data di arrivo non valida.');
      return;
    }
    if (
      isNaN(endDateValue) ||
      endDateValue < new Date() ||
      endDateValue < startDateValue
    ) {
      alert('Data di partenza non valida.');
      return;
    }
  }

  alert('Form validato correttamente.');
}
