cap = int(input())
a, s_min = [int(i) for i in input().split('.')]
b, e_min = [int(i) for i in input().split('.')]
people = int(input())
at = [int(i) for i in input().split('')]
ans = 0
tt = (((b-a)-1)*60)+(60-s_min)+e_min
check = 0
out_time=[i+30 for i in at]
pp=0
for i in range(len(at)):
   if at[i]+30<=tt and pp<=cap:
      ans+=1
      pp+=1
      check+=at[i]+30
   if out_time[0]<=check:
      pp-=1
      out_time=out_time[1:]
      check-=30
print(ans)