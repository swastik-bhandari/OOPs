-- -- CREATE TABLE mydatabase_new(username TEXT NOT NULL PRIMARY KEY, password TEXT NOT NULL , Email TEXT NOT NULL);
-- --  INSERT INTO mydatabase_new(username , password , Email)
-- --  SELECT username , password , Email FROM mydatabase ;
-- --   --  INSERT INTO mydatabase(username , password , Email)
-- --   -- VALUES ("ashok" , "ashok2" , "ashok@gmail.com")
--  INSERT INTO mydatabase(username , password , Email)
-- VALUES ("shubhakar" , "shubham7" , "shubh@gmail.com");
 SELECT username , password , COUNT(*) FROM mydatabase 
GROUP BY password;