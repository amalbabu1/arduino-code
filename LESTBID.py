
dict={
"0":0,
"1":1,
"2":2,
"3":3,
"4":4,
"5":5,
"6":6,
"7":7,
"8":8,
"9":9,
"A":10,
"B":11,
"C":12,
"D":13,
"E":14,
"F":15,
"G":16,
"H":17,
"I":18,
"J":19,
"K":20,
"L":21,
"M":22,
"N":23,
"O":24,
"P":25,
"Q":26,
"R":27,
"S":28,
"T":29,
"U":30,
"V":31,
"W":32,
"X":33,
"Y":34,
"Z":35,
"a":10,
"b":11,
"c":12,
"d":13,
"e":14,
"f":15,
"g":16,
"h":17,
"i":18,
"j":19,
"k":20,
"l":21,
"m":22,
"n":23,
"o":24,
"p":25,
"q":26,
"r":27,
"s":28,
"t":29,
"u":30,
"v":31,
"w":32,
"x":33,
"y":34,
"z":35,
}
def split(x):
    return [char for char in x]
def findbase(x):
    b=x
    arr=split(x)
    temp=[0]
    for i in range(0,len(arr)):
        b=dict[arr[i]]
        temp.append(b)
    b=max(temp)
    base=b+1;

    ans=0
    temp.reverse()
    l=len(temp)
    for i in range(1,l+1):
     ans=ans+int(base**(l-i)*temp[l-i])
    bid=ans
    return(bid)




minbid=[]
bids = input("Enter your bids : ")
a= bids.split()
for x in a:
    a=findbase(x)
    minbid.append(a)
print(min(minbid))
