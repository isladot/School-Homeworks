function getSinAndLimit() {
  let selected_value = document.getElementById('degrees-selector').value;
  let output_sin = document.getElementById('sin-output');
  let output_degrees = document.getElementById('degrees-output');
  let output_limit = document.getElementById('limit-output');

  let x = (selected_value * Math.PI) / 180;

  output_sin.innerHTML = Math.sin(x);
  output_degrees.innerHTML = selected_value;
  output_limit.innerHTML = Math.sin(x) / x;
}
