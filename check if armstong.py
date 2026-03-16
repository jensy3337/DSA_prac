number=int(input("enter a number: "))
length=len(str(number))
temp=number
sum=0
while temp>0:
    digit=temp%10
    sum+=digit**length
    temp=temp//10
    
print("number is {} and sum is {}".format(number,sum))
if sum==number:
    print("armstrong number")
else:
    print("not armstrong number")
