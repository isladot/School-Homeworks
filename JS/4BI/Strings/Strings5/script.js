function validatePassword() {
  let input = document.getElementById('password-input').value;

  if(input.match(/(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[!@#$%^&*]).{8}/)) {
    alert('Password valida.');
  } else {
    alert('Password non valida.');
  }
}