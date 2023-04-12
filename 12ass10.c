def min_jumps(arr):
    n = len(arr)
    if n <= 1:
        return 0  # Already at the end, no jumps needed

    if arr[0] == 0:
        return -1  # Cannot jump from the starting position

    max_reach = arr[0]  # Maximum reachable index from current index
    steps = arr[0]  # Number of steps remaining from current index
    jumps = 1  # Number of jumps needed to reach the end
    for i in range(1, n):
        if i == n - 1:
            return jumps  # Reached the end, return jumps

        max_reach = max(max_reach, i + arr[i])  # Update maximum reachable index

        steps -= 1  # Decrease steps remaining from current index

        if steps == 0:
            if max_reach <= i:
                return -1  # Cannot reach beyond current index
            steps = max_reach - i  # Update steps with remaining maximum reach
            jumps += 1  # Increment jump count

    return -1  # Cannot reach the end

//output
arr = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
print(min_jumps(arr))  # Output: 3

arr = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
print(min_jumps(arr))  # Output: 10
