# Import
from cs50 import get_string

# Get text form input
text = get_string("Text: ")

# Count number of latter in text
num_latters = 0
for c in text:
    if c.isalpha():
        num_latters += 1

# Count Number of words in text
num_words = len(text.split())

# Count Number of sentences in text
num_sentences = text.count(".") + text.count("!") + text.count("?")

# Calculate Average number of latters per 100 words
L = num_latters / num_words + 100

# Calculate Average number of sentences per 100 wors
S = num_sentences / num_words * 100

# Calculate Garade Level using formula
grade_Level = 0.0588 * L - 0.296 * S - 15.8

#Print Grande Level
if grade_Level < 1:
    print("Before Grade 1")
elif grade_Level >= 16:
    print("Grade 16+")
else:
    print(f"Grade {round(grade_Level)}")