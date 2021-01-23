function converti() {
  var num = document.getElementById('num').value;
  var startunit = parseInt(document.getElementById('startunit').selectedIndex);
  var arriveunit = parseInt(
    document.getElementById('arriveunit').selectedIndex
  );
  var result = document.getElementById('result');
  switch (startunit) {
    case 0:
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 1:
      num = num * Math.pow(10, 3);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 2:
      num = num * Math.pow(10, 6);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 3:
      num = num * Math.pow(10, 9);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 4:
      num = num * Math.pow(10, 12);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 5:
      num = num * Math.pow(10, 15);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 6:
      num = num * Math.pow(10, 18);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 7:
      num = num * Math.pow(2, 10);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 8:
      num = num * Math.pow(2, 20);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 9:
      num = num * Math.pow(2, 30);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 10:
      num = num * Math.pow(2, 40);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 11:
      num = num * Math.pow(2, 50);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
    case 12:
      num = num * Math.pow(2, 60);
      switch (arriveunit) {
        case 0:
          result.innerHTML = num;
          break;
        case 1:
          result.innerHTML = num / Math.pow(10, 3);
          break;
        case 2:
          result.innerHTML = num / Math.pow(10, 6);
          break;
        case 3:
          result.innerHTML = num / Math.pow(10, 9);
          break;
        case 4:
          result.innerHTML = num / Math.pow(10, 12);
          break;
        case 5:
          result.innerHTML = num / Math.pow(10, 15);
          break;
        case 6:
          result.innerHTML = num / Math.pow(10, 18);
          break;
        case 7:
          result.innerHTML = num / Math.pow(2, 10);
          break;
        case 8:
          result.innerHTML = num / Math.pow(2, 20);
          break;
        case 9:
          result.innerHTML = num / Math.pow(2, 30);
          break;
        case 10:
          result.innerHTML = num / Math.pow(2, 40);
          break;
        case 11:
          result.innerHTML = num / Math.pow(2, 50);
          break;
        case 12:
          result.innerHTML = num / Math.pow(2, 60);
          break;
      }
      break;
  }
}
