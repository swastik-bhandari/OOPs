import matplotlib.pyplot as plt
import numpy as np

# Parameters
a = 1.42  # Carbon-carbon distance in graphene (in Angstroms)
num_atoms_x = 10  # Number of atoms in the x-direction
num_atoms_y = 10  # Number of atoms in the y-direction

# Define lattice vectors
a1 = np.array([a * np.sqrt(3), 0])
a2 = np.array([a * np.sqrt(3) / 2, a * 3 / 2])

# Create graphene lattice
x_coords = []
y_coords = []

for i in range(num_atoms_x):
    for j in range(num_atoms_y):
        pos = i * a1 + j * a2
        x_coords.append(pos[0])
        y_coords.append(pos[1])

# Shift to create the second layer
x_coords_shifted = np.array(x_coords) + a * np.sqrt(3) / 2
y_coords_shifted = np.array(y_coords) + a * 3 / 2

# Plot
plt.figure(figsize=(8, 6))
plt.scatter(x_coords, y_coords, color='b', label='Layer 1')
plt.scatter(x_coords_shifted, y_coords_shifted, color='r', label='Layer 2')

# Join dots with lines
for i in range(num_atoms_x):
    for j in range(num_atoms_y):
        index = i * num_atoms_y + j
        plt.plot([x_coords[index], x_coords_shifted[index]], [y_coords[index], y_coords_shifted[index]], color='black')

plt.xlabel('X (Angstroms)')
plt.ylabel('Y (Angstroms)')
plt.title('Stacked Graphene Sheets with Bonds')
plt.gca().set_aspect('equal', adjustable='box')
plt.legend()
plt.show()

