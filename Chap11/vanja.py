import csv
import re

# Open the CSV file
with open('microRNA_table.csv', 'r') as file:
    reader = csv.reader(file)
    pattern = r"miR-(\d+)"
    pattern2 = r"miR(\d+)"

    # Loop through each row
    for row in reader:
        # Print the value in the first column
        
        match = re.search(pattern, row[0])
        match2 = re.search(pattern2, row[0])
        if match:
            number = match.group(1)
            print(number)
        elif match2: 
            number = match2.group(1)
            print(number)
        else:
            print("[]")