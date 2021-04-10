function calculate() {
  let good_answers = 0;
  for (let value of document.getElementById('ready-list').elements) {
    if (value.checked && value.id === 'q1a1') good_answers++;
  }
  for (let value of document.getElementById('scheduling').elements) {
    if (value.checked && value.id === 'q2a1') good_answers++;
  }
  for (let value of document.getElementById('context-switch').elements) {
    if (value.checked && value.id === 'q3a3') good_answers++;
  }
  for (let value of document.getElementById('requirements').elements) {
    if (value.checked && value.id === 'q4a2') good_answers++;
  }
  for (let value of document.getElementById('requirements-classification')
    .elements) {
    if (value.checked && value.id === 'q5a1') good_answers++;
  }
  let message;
  switch (good_answers) {
    case 2:
      message = 'Giudizio insufficiente.';
      break;
    case 3:
      message = 'Giudizio sufficiente.';
      break;
    case 4:
      message = 'Giudizio distinto.';
      break;
    case 5:
      message = 'Giudizio ottimo.';
      break;
    default:
      message = 'Giudizio pessimo.';
      break;
  }
  alert(message);
}
