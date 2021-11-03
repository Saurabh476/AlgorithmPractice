days = {"Monday":0,"Tuesday":1, "Wednesday":2,"Thrusday":3,"Friday":4,"Saturday":5,6:"Sunday"}
dk = {0:"Monday",1:"Tuesday", 2:"Wednesday",3:"Thrusday",4:"Friday",5:"Saturday",6:"Sunday"}
day = input().strip()
K = int(input().strip())
cur = days[day]
cur = (cur + K)%7
print(dk[cur])
