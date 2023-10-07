-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports
WHERE street = 'Humphrey Street';

--Bakery witnesses--
SELECT * FROM interviews
WHERE transcript LIKE '%bakery%';

--witness 1 truth--
SELECT * FROM bakery_security_logs WHERE year = 2021 AND MONTH = 7 AND DAY = 28 AND HOUR = 10 AND MINUTES BETWEEN 