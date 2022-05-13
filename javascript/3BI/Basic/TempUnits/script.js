var temp, tempconv;

function inputTemp() {
  temp = parseFloat(prompt('Prego, inserire la temperatura (°F):', '100'));
}
function convertTemp() {
  var multipler = 10;
  tempconv = (temp - 32) / 1.8;
  tempconv = Math.round(tempconv * multipler) / multipler;
}
function dispTemp() {
  alert('Temperatura convertita in °C = ' + tempconv);
}
function Temp() {
  inputTemp();
  convertTemp();
  dispTemp();
}
