CREATE DATABASE auth;

USE auth;

CREATE TABLE user (
  id INT(3) PRIMARY KEY AUTO_INCREMENT,
  username VARCHAR(255) UNIQUE,
  password VARCHAR(255),
  genere VARCHAR(5),
  maggiorenne BIT(1),
  interesse VARCHAR(11)
);