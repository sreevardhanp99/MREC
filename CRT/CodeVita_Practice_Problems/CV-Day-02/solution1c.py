import math

def calculate_distance(point1, point2):
    return abs(point1[0] - point2[0]) + abs(point1[1] - point2[1])

def assign_vehicles(passengers, vehicles):
    allocated_vehicles = {}
    total_distance = 0

    for passenger in sorted(passengers):
        min_distance = math.inf
        closest_vehicle = ""
        passenger_coordinates = passengers[passenger]

        for vehicle in vehicles:
            if vehicles[vehicle] == "":
                vehicle_coordinates = vehicles[vehicle + "_coordinates"]
                distance = calculate_distance(passenger_coordinates, vehicle_coordinates)
                if distance < min_distance or (distance == min_distance and vehicle < closest_vehicle):
                    min_distance = distance
                    closest_vehicle = vehicle
        
        allocated_vehicles[passenger] = closest_vehicle
        vehicles[closest_vehicle] = passenger
        total_distance += min_distance

    return total_distance
N, M = map(int, input().split())
passengers = {}
vehicles = {}

for _ in range(N):
    name, x, y = input().split()
    passengers[name] = (int(x), int(y))

for _ in range(M):
    vehicle, x, y = input().split()
    vehicles[vehicle] = ""
    vehicles[vehicle + "_coordinates"] = (int(x), int(y))
minimum_distance = assign_vehicles(passengers, vehicles)
print(minimum_distance,end="")