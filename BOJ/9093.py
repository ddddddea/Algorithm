N = input()
while True:
    try:
        str_l = list(map(str, input().split()))
        str_rev= ""
        for word in str_l:
            str_rev += word[-1::-1] + " "
        print(str_rev)
    except:
        break