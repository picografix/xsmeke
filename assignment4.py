def ways(coins, types, amount): 
#types= len(coins)
 array = [0 for k in range(amount+1)] 
 array[0] = 1
 for i in range(types): 
  for j in range(coins[i],amount+1): 
   array[j] += array[j-coins[i]] 
 ans = array[amount] 
 return ans 

print(ways([1,5,10,25,50],5,100))



def chess(p,q):
 if p==1 or q==1:
  return 1
 p,q=p-1,q-1
 s,c=p+q,p+q
 for i in range(1, p):
  c=c*(s-i)/i
 return c/p

print(chess(5,4))
import sys
print(ways([1,5,10,25,50],5,int(sys.argv[1])))
print(chess(int(sys.argv[2]),int(sys.argv[3])))
