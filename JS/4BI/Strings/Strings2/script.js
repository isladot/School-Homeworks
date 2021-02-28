function checkDate() {
  let input_date = document.getElementById('datetime').value;

  //Check if input is valid.
  if (
    input_date == null ||
    input_date == undefined ||
    input_date == '' ||
    input_date.length > 10
  ) {
    alert('Please insert a date.');
  } else {
    let splitted_date = input_date.split('/');
    let day = splitted_date[0],
      month = splitted_date[1],
      year = splitted_date[2];

    //Check if date is before current date.
    if (Date.parse(`${month} ${day} ${year}`) < Date.now()) {
      let errors = false;

      //Check each date field.
      if (day < 1 || day > 31) {
        alert('Please insert a valid day.');
        errors = true;
      }
      if (month < 1 || month > 12) {
        alert('Please insert a valid month.');
        errors = true;
      }
      if (year > 2021) {
        alert('Please insert a valid year.');
        errors = true;
      }
      if (!errors) {
        alert('Date is correct.');
      }
    } else {
      alert('Please avoid inserting future dates.');
    }
  }
}
