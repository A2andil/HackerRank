#IN THE NAME OF ALLAH

def is_leap(year):
    leap = False
    if year % 4 == 0 and (year % 400 == 0 or year % 100 != 0):
        leap = True
    else:
        leap = False
    
    return leap

year = int(raw_input())
print is_leap(year)