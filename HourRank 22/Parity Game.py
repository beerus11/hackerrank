t=int(raw_input().strip())
array=map(int,raw_input().strip().split(" "))
s=sum(array)
if sum%2==0:
	print "0"
elif len(array)==1:
	print "-1"
else:
	print "1"