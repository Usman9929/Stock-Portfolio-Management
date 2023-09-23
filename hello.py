import csv

books = []

with open("2018m.csv") as file:
    file_reader = csv.DictReader(file)
    for book in file_reader:
        print(book)