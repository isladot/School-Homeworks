<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="login.css">
  <link href="https://fonts.googleapis.com/css2?family=Montserrat&display=swap" rel="stylesheet" />
  <title>IF-ELSE in PHP - Server</title>
</head>

<body>
  <center>
    <h1>IF-ELSE Response</h1>
  </center>
  <?php

  define('USERNAME', 'Mario');
  define('PASSWORD', 'sonomario01');

  $input_username = $_POST['username'];
  $input_password = $_POST['password'];

  if ($input_username == USERNAME && $input_password == PASSWORD) {
    echo "<h2>Benvenuto ${input_username}!</h2>";
  } else {
    echo "<h2 class=\"error\">Username e/o Password errati.</h2>";
  }

  ?>
</body>

</html>