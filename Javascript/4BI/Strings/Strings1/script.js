function validateForm() {
  //Getting form input.
  const inputName = document.getElementById('inputName');
  const inputSurname = document.getElementById('inputSurname');
  const inputEmail = document.getElementById('inputEmail');

  //Validating name.
  if (inputName.value == '' || inputName.value == null) {
    alert('Si prega di inserire un nome valido.');
    inputName.classList.remove('good');
    inputName.classList.add('error');
  } else {
    inputName.classList.remove('error');
    inputName.classList.add('good');
  }
  //Validating surname.
  if (inputSurname.value == '' || inputSurname.value == null) {
    alert('Si prega di inserire un cognome valido.');
    inputSurname.classList.remove('good');
    inputSurname.classList.add('error');
  } else {
    inputSurname.classList.remove('error');
    inputSurname.classList.add('good');
  }
  //Validating email address.
  if (
    inputEmail.value == '' ||
    inputEmail.value == null ||
    !inputEmail.value.includes('@' && '.')
  ) {
    alert('Si prega di inserire un indirizzo email valido.');
    inputEmail.classList.remove('good');
    inputEmail.classList.add('error');
  } else {
    inputEmail.classList.remove('error');
    inputEmail.classList.add('good');
  }
}
