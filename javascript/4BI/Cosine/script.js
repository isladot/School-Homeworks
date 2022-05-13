function getCos() {
  let selected_value = document.getElementById('degrees-selector').value;
  let output_cos = document.getElementById('cos-output');
  let output_degrees = document.getElementById('degrees-output');

  output_cos.innerHTML = Math.cos((selected_value * Math.PI) / 180);
  output_degrees.innerHTML = selected_value;
}
