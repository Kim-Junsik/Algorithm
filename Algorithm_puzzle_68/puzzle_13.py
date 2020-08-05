from itertools import permutations
count=0
for (r,e,a,d,w,i,t,l,k,s) in permutations(range(0,10)):
    if r == 0 or w == 0 or t == 0 or s == 0:
        continue
    READ = r*1000 + e*100 + a*10 + d
    WRITE = w*10000 + r*1000 + i*100 + t*10 + e
    TALK = t*1000 + a*100 + l*10 + k
    SKILL = s*10000 + k*1000 + i*100 + l*10 + l
    if READ + WRITE + TALK == SKILL:
        count+=1
        print('{} + {} + {} = {}'.format(READ, WRITE, TALK, SKILL))

print(count)
