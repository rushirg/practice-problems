"""
The Fundraising problem

https://www.hackerrank.com/contests/hack-the-interview-u-s-2/challenges/charity
"""

# NOTE: Incomplete code

tc = int(input())
for i in range(tc):
    m, n, t = map(int, input().split())

    # student with charm
    student = []
    for j in range(m):
        student.append(list(map(int, input().split())))

    # guest with generosity
    guest = []
    for j in range(t):
        guest.append(list(map(int, input().split()))[1:])

    # max guest student can approach
    k = int(input())

    # -1 cases
    total_guest = 0
    invalid_case = False
    # 1. no of people on table > group size of student
    for table in guest:
        if len(table) > n:
            print("-1")
            invalid_case = True
            break
        total_guest += len(table)
    if invalid_case:
        continue
    # 2. no of total guest > total number of students
    if total_guest > (m * n):
        print("-1")
        continue

    # for other cases

    # find max charm of student in a group
    global_max_charm = 0
    max_charm_index = -1
    index = 0
    for charm in student:
        max_charm = max(charm)
        if max_charm > global_max_charm:
            global_max_charm = max_charm
            max_charm_index = index
        index += 1

    # find max generosity of guest
    global_max_genrosity = 0
    max_genrosity_index = -1
    index = 0
    for gen in guest:
        max_genrosity = max(gen)
        if max_genrosity > global_max_genrosity:
            global_max_genrosity = max_genrosity
            max_genrosity_index = index
        index += 1



