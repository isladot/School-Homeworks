function launch_site() {
  let userOption = document.getElementById('site-to-choose').value;
  let iframe = document.getElementById('iframe');
  switch (userOption) {
    case '1':
      iframe.src = 'http://www.lastampa.it';
      break;
    case '2':
      iframe.src = 'http://www.repubblica.it';
      break;
    case '3':
      iframe.src = 'http://www.corriere.it';
      break;
    case '4':
      iframe.src = 'http://www.liberoquotidiano.it';
      break;
    case '5':
      iframe.src = 'http://www.ilgiornale.it';
      break;
    default:
      alert("Selezionare un'opzione valida.");
  }
}
