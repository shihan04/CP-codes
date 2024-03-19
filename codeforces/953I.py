n=int(input())
a=[]
v=[]
for i in range(0,24*60):
    a.append(0)
    v.append(0)
t=[]
for i in range(0,n):
    s=input()
    h=int(s[0])*10+int(s[1])
    m=int(s[3])*10+int(s[4])
    t.append(h*60+m)
    a[h*60+m]=1
st=t[0]
r=0
d=0
ans=0
while r<=24*60:
    if a[(st+r)%(24*60)]==1:
        ans=max(ans,d)
        d=0
    else:
        d+=1
    if v[(st+r)%(24*60)]==1:
        break
    v[(st+r)%(24*60)]=1
    r+=1
m=ans%60
h=int((ans-m)/60)
s=""
if h>9:
    s+=str(h)
else:
    s+='0'+str(h)
s+=':'
if m>9:
    s+=str(m)
else:
    s+='0'+str(m)
print(s)
