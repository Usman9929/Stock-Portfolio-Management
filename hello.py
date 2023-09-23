import csv

books = []

with open("book.csv") as file:
    file_reader = csv.DictReader(file)
    for book in file_reader:
        print(book)