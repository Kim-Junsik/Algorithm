W, H = 6, 4
DIR = [[0, 1], [-1, 0], [0, -1], [1, 0]]
left = [0] * H   
bottom = [0] * W  


def search(x, y, dir, left, bottom):
  left_l = left.copy()
  bottom_l = bottom.copy()
  
  if (dir == 0) or (dir == 2):  
    pos = min([y, y + DIR[dir][1]])
    if (pos < 0) or (y + DIR[dir][1] > H):
      return 0
    if left_l[pos] & (1 << x) > 0:
      return 0
    left_l[pos] |= (1 << x)        
  else:                             
    pos = min([x, x + DIR[dir][0]])
    if (pos < 0) or (x + DIR[dir][0] > W):
      return 0
    if bottom_l[pos] & (1 << y) > 0:
      return 0
    bottom_l[pos] |= (1 << y)      
  next_x, next_y = x + DIR[dir][0], y + DIR[dir][1]
  if (next_x == W) and (next_y == H):
    return 1  

  cnt = 0
  
  cnt += search(next_x, next_y, dir, left_l, bottom_l)
  
  dir = (dir + 1) % len(DIR)
  cnt += search(next_x, next_y, dir, left_l, bottom_l)
  return cnt

print(search(0, 0, 3, left, bottom))
