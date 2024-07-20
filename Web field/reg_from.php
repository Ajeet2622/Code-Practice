<?php
// reg_form.php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Collect and sanitize form data
    $name = htmlspecialchars($_POST['name']);
    $email = htmlspecialchars($_POST['email']);
    $password = htmlspecialchars($_POST['password']);
    $phone = htmlspecialchars($_POST['phone']);
    $major = htmlspecialchars($_POST['major']);
    $year = htmlspecialchars($_POST['year']);

    // Output form data for demonstration purposes
    echo "<h2>Registration Details</h2>";
    echo "Name: $name<br>";
    echo "Email: $email<br>";
    echo "Password: $password<br>";
    echo "Phone: $phone<br>";
    echo "Major: $major<br>";
    echo "Year: $year<br>";

    // Example of database connection (uncomment and update with your database credentials)
   
    $servername = "localhost:3307";
    $username = "root"; // Default XAMPP username
    $password = ""; // Default XAMPP password is empty
    $dbname = "university_info";

    // Create connection
    $conn = new mysqli($servername, $username, $password, $dbname);

    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $sql = "INSERT INTO reg_info (name, email, password, phone, major, year)
            VALUES ('$name', '$email', '$password', '$phone', '$major', '$year')";

    if ($conn->query($sql) === TRUE) {
        echo "New record created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
  
}
?>
