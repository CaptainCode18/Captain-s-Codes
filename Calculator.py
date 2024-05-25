first=int(input("ENter first number: "))
operator=input("Enter the opeation to be performed (+,-,*,**,/,//,%): ")
second=int(input("Enter second number: "))
if operator=="+":
    print(first+second)
elif operator=="-":
    print(first-second)
elif operator=="*":
    print(first*second)
elif operator=="**":
    print(first**second)
elif operator=="/":
    print(first/second)
elif operator=="//":
    print(first//second)
elif operator=="%":
    print(first%second)
else:
    print("|Invalid input|")