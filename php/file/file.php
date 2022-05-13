<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="file.css">
  <link href="https://fonts.googleapis.com/css2?family=Montserrat&display=swap" rel="stylesheet" />
  <title>Lista Utenti</title>
</head>

<body>
  <center>
    <h1>Lista Utenti</h1>
  </center>
  <?php
  if (isset($_POST['print'])) {
    echo "<table>";
    foreach (file('utenti.txt') as $row) {
      $user_data = explode('*', $row);
      $username = $user_data[0];
      $password = $user_data[1];

      echo "
      <tr>
      <th>Username:</th>
      <td>${username}</td>
      </tr>
      <tr>
      <th>Password:</th>
      <td>${password}</td>
      </tr>
      ";
    }
    echo "</table>";
  }
  ?>
</body>

</html>