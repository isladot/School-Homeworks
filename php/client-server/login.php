<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="login.css">
  <link
    href="https://fonts.googleapis.com/css2?family=Montserrat&display=swap"
    rel="stylesheet"
  />
  <title>Client - Server</title>
</head>

<body>
  <center>
    <h1>Response - Server</h1>
  </center>
  <?php

  $input_username = $_POST['username'];
  $input_password = $_POST['password'];

  echo "
<center>
  <h2>Benvenuto ${input_username}!</h2>
  <h2>Password \"${input_password}\"</h2>
</center>
";
  ?>
</body>

</html>