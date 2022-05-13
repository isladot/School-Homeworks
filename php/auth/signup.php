<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="signup.css">
  <link href="https://fonts.googleapis.com/css2?family=Montserrat&display=swap" rel="stylesheet" />
  <title>Response</title>
</head>

<body>
  <center>
    <?php
    $username = $_POST['username'];
    $password = $_POST['password'];
    $genere = $_POST['genere'];
    $maggiorenne = isset($_POST['maggiorenne']) ? 1 : 0;
    $interesse = $_POST['interesse'];

    $db_hostname = "localhost";
    $db_username = "root";
    $db_password = "";

    $db_name = "auth";

    if (!empty($username) && !empty($password) && !empty($genere) && !empty($interesse)) {
      // Open connection
      $conn = mysqli_connect($db_hostname, $db_username, $db_password, $db_name);

      if (!$conn) {
        die("Connection error");
        exit();
      }

      // Perform Insert query
      $insert = mysqli_query($conn, "INSERT INTO user (username, password, genere, maggiorenne, interesse) VALUES ('$username', '$password', '$genere', $maggiorenne, '$interesse')");
      if (!$insert) {
        echo "<h1 class='error'>Errore</h1>";
        echo ("Insert query error: " . mysqli_error($conn));
        exit();
      }

      // Perform Select query
      $select =  mysqli_query($conn, "SELECT username, interesse FROM user WHERE username='$username'");
      if (!$select) {
        echo "<h1 class='error'>Errore</h1>";
        echo ("Select query error: " . mysqli_error($conn));
        exit();
      }

      // Print Interesse
      $row = mysqli_fetch_array($select);
      echo "<h2>Ciao " . $row['username'] . ", ecco il tuo interesse</h2>";
      echo ucfirst($row['interesse']);

      // Close connection
      mysqli_close($conn);
    } else {
      echo "Si prega di inserire tutti i valori prima di sottomettere il form.";
    }


    ?>
  </center>

</body>

</html>