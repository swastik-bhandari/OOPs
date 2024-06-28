import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle

# Create figure and axis
fig, ax = plt.subplots(figsize=(12, 10))

# Function to add labeled rectangle
def add_labeled_rect(ax, xy, width, height, label, fontsize=14, facecolor='skyblue'):
    rect = Rectangle(xy, width, height, linewidth=1, edgecolor='black', facecolor=facecolor)
    ax.add_patch(rect)
    rx, ry = rect.get_xy()
    cx = rx + rect.get_width()/2.0
    cy = ry + rect.get_height()/2.0
    ax.annotate(label, (cx, cy), color='black', weight='bold', 
                fontsize=fontsize, ha='center', va='center')

# Top-level labels and dimensions
top_level_labels = ['User Interface', 'Application Logic', 'Database', 'External APIs']
top_level_height = 1
top_level_width = 10

# Top-level rectangles
for i, label in enumerate(top_level_labels):
    add_labeled_rect(ax, (0, -i*2), top_level_width, top_level_height, label, facecolor='lightgrey')

# Sub-component labels and dimensions
ui_components = ['Calendar Widget', 'Weather Display', 'Alert Notifications', 'Language Selector']
logic_components = ['Data Fetching Module', 'Data Parsing Module', 'Database Interaction']
db_components = ['Weather Data Table', 'User Preferences Table']
external_components = ['OpenWeatherMap API']

sub_component_height = 0.8
sub_component_width = top_level_width * 0.8

# UI components
for i, label in enumerate(ui_components):
    add_labeled_rect(ax, (1, -0.5-i*0.9), sub_component_width, sub_component_height, label, fontsize=12)

# Logic components
for i, label in enumerate(logic_components):
    add_labeled_rect(ax, (1, -2.5-i*0.9), sub_component_width, sub_component_height, label, fontsize=12)

# Database components
for i, label in enumerate(db_components):
    add_labeled_rect(ax, (1, -4.5-i*0.9), sub_component_width, sub_component_height, label, fontsize=12)

# External APIs
for i, label in enumerate(external_components):
    add_labeled_rect(ax, (1, -6.5-i*0.9), sub_component_width, sub_component_height, label, fontsize=12)

# Remove axes
ax.axis('off')

# Show the diagram
plt.tight_layout()
plt.show()

