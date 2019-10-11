sfind = 'machula'
t = int(input())
for i in range(t):
    input()
    eq = input().split()
    if sfind in eq[0]:
        print ("%d + %s = %s" % (int(eq[4]) - int( eq[2]), eq[2], eq[4]))
    elif sfind in eq[2]:
        print ("%s + %d = %s" % (eq[0], int(eq[4]) - int(eq[0]), eq[4]))
    elif sfind in eq[4]:
        print ("%s + %s = %d" % (eq[0], eq[2], int(eq[0]) + int(eq[2])))
