import csv

with open("favorite.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row[1])