'''combine method to print the date and time '''

# from datetime import *
# d = date(2026, 8, 24)
# t = time(15, 30)
# dt = datetime.combine(d, t)
# print(dt)

# # output  2026-08-24 15:30:00

''' print current date and time'''

# dt1 = datetime.now()
# print(dt1.year)
# print(dt1.month)
# print(dt1.day)

# #output : 2026
# # 8
# # 24

''' using the replace function'''


# dt2 = datetime(2026, 8, 24, 15, 30)

# new_dt = dt2.replace(year=2027)

# print(dt2)
# print(new_dt)

# #output : 2026-08-24 15:30:00
#           #2027-08-24 15:30:00

''' multiple value replace'''

# dt3 = datetime(2026, 8, 24, 15, 30)

# new_dt1 = dt3.replace(month=12, day=25, hour=10, minute=45)

# print(new_dt1)

# #output : 2026-12-25 10:45:00

'''formating data '''

# now = datetime.now()
# print(now)
# print(now.strftime("%d-%m-%Y"))
# print(now.strftime("%d/%m/%Y"))
# print(now.strftime("%d %B %Y"))
# print(now.strftime("%A, %d %B %Y"))

# #output : 24-08-2026
# # 24/08/2026
# # 24 August 2026
# # Monday, 24 August 2026

''' formating time'''

# now = datetime.now()
# print(now.strftime("%H:%M:%S"))
# print(now.strftime("%I:%M:%S %p"))

#output : 11:37:39
        # 11:37:39 AM

'''he user enters a date, and the program displays the day of the week.'''


# date_input = input("Enter date (DD-MM-YYYY): ")

# date = datetime.strptime(date_input, "%d-%m-%Y")

# #print("Day of the week:", date.strftime("%A"))

# s = date.strftime("today is %w day of weak its %A")
# print(s)

''' another program'''
# from datetime import date

# d1, m1, y1 = [int(x) for x in input("Enter first date (dd-mm-yyyy): ").split('-')]
# d2, m2, y2 = [int(x) for x in input("Enter second date (dd-mm-yyyy): ").split('-')]

# dtt1 = date(y1, m1, d1)
# dtt2 = date(y2, m2, d2)

# dtt = abs(dtt1 - dtt2)   # display difference

# print("Days difference =", dtt.days)

# weeks, days = divmod(dtt.days, 7) # weeks difference
# print("Weeks difference =", weeks)

# months, days = divmod(dtt.days, 30)
# print("Months difference (approx.) =", months) # months difference


'''find the diffrence between days along with time'''

# from datetime import datetime

# dt1 = input("Enter first date and time (dd-mm-yyyy HH:MM:SS): ")
# dt2 = input("Enter second date and time (dd-mm-yyyy HH:MM:SS): ")

# dtt1 = datetime.strptime(dt1, "%d-%m-%Y %H:%M:%S")
# dtt2 = datetime.strptime(dt2, "%d-%m-%Y %H:%M:%S")

# diff = abs(dtt1 - dtt2)

# # Total days
# total_days = diff.days

# # Years and remaining days
# years, remaining_days = divmod(total_days, 365)

# # Weeks and remaining days
# weeks, days = divmod(remaining_days, 7)

# # Time
# hours, remainder = divmod(diff.seconds, 3600)
# minutes, seconds = divmod(remainder, 60)

# print("\nDifference:")
# print("Years   =", years)
# print("Weeks   =", weeks)
# print("Days    =", days)
# print("Hours   =", hours)
# print("Minutes =", minutes)
# print("Seconds =", seconds)

# output : Enter second date and time (dd-mm-yyyy HH:MM:SS): 24-08-2026 12:45:30

# Difference:
# Years   = 2
# Weeks   = 0
# Days    = 4
# Hours   = 2
# Minutes = 15
# Seconds = 30

# from datetime import *
# timedelta(days =0,seconds=0,microseconds=0,minutes=0,hours=0,weeks=0)
# d1 = datetime(2026,8,24,12,30,42,123456)
# print(d1)
# p1 = timedelta(days =10,seconds = 20,minutes=5,hours=2)
# new_d1 = d1+p1
# print("new date and time =",new_d1)

# output : 2026-08-24 12:30:42.123456
# new date and time = 2026-09-03 14:36:02.123456

#write a pyhon code to enter to person dateof birth and return older the person



#write a python program to generete  10 random numbers beteen 100 to 200 with  time delay betwwen each number
# import random
# import time

# for i in range(10):
#     num = random.randint(100, 200)
#     print(num)
#     time.sleep(3)   # 3 second 

''' find the total time taken by our program '''




# import time
# import random

# start = time.perf_counter()

# for i in range(10):
#     num = random.randint(100, 200)
#     print(num)
#     time.sleep(3)

# end = time.perf_counter()

# print("Performance counter time =", end - start, "seconds")


# import time
# import random

# start = time.process_time()

# for i in range(10):
#     num = random.randint(100, 200)
#     print(num)
#     time.sleep(3)

# end = time.process_time()

# print("prcoess time =", end - start, "seconds")

'''write a pyhon code to enter to person dateof birth and return older the person'''

# from datetime import datetime

# dob1 = input("Enter Person 1 DOB (DD-MM-YYYY): ")
# dob2 = input("Enter Person 2 DOB (DD-MM-YYYY): ")

# date1 = datetime.strptime(dob1, "%d-%m-%Y")
# date2 = datetime.strptime(dob2, "%d-%m-%Y")

# if date1 < date2:
#     print("Person 1 is older")
# elif date2 < date1:
#     print("Person 2 is older")
# else:
#     print("Both are of the same age")

# '''strptime() → String → Date'''
# from datetime import datetime

# date = "31-08-2026"

# d = datetime.strptime(date, "%d-%m-%Y")

# print(d)

'''strftime() → Date → String'''

# from datetime import datetime

# d = datetime.now()

# date = d.strftime("%d-%m-%Y")

# print(date,type(date))




# ''' perfromance counter'''

import time
import random

start = time.perf_counter()

for i in range(10):
    num = random.randint(100, 200)
    print(num)
    time.sleep(3)

end = time.perf_counter()

print("Performance counter time =", end - start, "seconds")

'''procress time'''
import time
import random

start = time.process_time()

for i in range(10):
    num = random.randint(100, 200)
    print(num)
    time.sleep(3)

end = time.process_time()

print("prcoess time =", end - start, "seconds")
