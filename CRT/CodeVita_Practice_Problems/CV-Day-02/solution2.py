def minimum_vehicles(weights, max_limit):
    # Filter out zero weights and sort the remaining weights in descending order
    sorted_weights = sorted(filter(lambda x: x != 0, weights), reverse=True)
    
    left, right = 0, len(sorted_weights) - 1
    vehicles = 0
        
    while left <= right:
        if sorted_weights[left] + sorted_weights[right] <= max_limit:
            right -= 1
        left += 1
        vehicles += 1

    return vehicles

# Example usage:
weights = list(map(int, input().split()))
max_limit = int(input())

result = minimum_vehicles(weights, max_limit)
print(result,end="")