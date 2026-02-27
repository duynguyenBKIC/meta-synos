# Copyright (c) 2025 Synos Deverlopper

# See available image features in image-feature-packages.inc
require recipes-core/images/profiles/include/image-feature-packages.inc

EXTRA_IMAGE_FEATURES += " \
    synos-ros2 \
"
