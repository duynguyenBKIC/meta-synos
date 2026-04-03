# Copyright (c) 2026 Synos Developper, Inc.

# IMAGE_FEATURES controls the contents of Synos images
#
# Available IMAGE_FEATURES:
#
# synos-ros2:                   ROS2 supports
#
# and IMAGE_FEATURES from core-image
IMAGE_FEATURES[validitems] += " \
    synos-ros2 \
"

# Define packages for each image feature
# The platform profile is determined by the combination of image features.
FEATURE_PACKAGES_synos-ros2 = " \
    ros-base \
    ros2launch \
    rclcpp \
    rclpy \
    std-msgs \
    sensor-msgs \
    vision-msgs \
"
