nrm=[31,31,28,31,30,31,30,31,31,30,31,30]
uru=[31,31,29,31,30,31,30,31,31,30,31,30]


d=335
mon=[]
ans=0
(1901..2000).each do |y|
  mon=nrm
  mon=uru if y%4==0
  mon.each do |m|
    d+=m
    ans+=1 if d%7==0
  end
end

p ans
