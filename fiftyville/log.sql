-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports
WHERE street = 'Humphrey Street';

--Bakery witnesses--
SELECT * FROM interviews
WHERE transcript LIKE '%bakery%';

--witness 1 truth--
SELECT * FROM bakery_security_logs WHERE year = 2021 AND MONTH = 7 AND DAY = 28 AND HOUR = 10 AND MINUTE BETWEEN 15 AND 25;
--check aginst license plates--
SELECT p.name, bsl.activity, bsl.license_plate, bsl.year, bsl.month, bsl.day, bsl.hour, bsl.minute
FROM bakery_security_logs bsl
JOIN peaple p ON p.license_plate = bsl.license_plate
WHERE bsl.year = 2021 AND bsl.month = 7 AND bsl.day = 28 and bsl.hour = 10 AND bsl.minute BETWEEN 15 AND 25;