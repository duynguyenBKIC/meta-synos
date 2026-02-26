SUMMARY = "SynOS Custom Image"
DESCRIPTION = "A base custom OS image for SynOS distribution"
LICENSE = "MIT"

inherit core-image

# Add basic packages
IMAGE_INSTALL += "packagegroup-core-boot"

# Add extra packages if needed
IMAGE_INSTALL += " \
    systemd \
    openssh \
    tzdata \
"

IMAGE_FEATURES += "ssh-server-openssh"
