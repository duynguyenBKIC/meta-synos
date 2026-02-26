# meta-synos

This is a custom Yocto Distribution layer for SynOS.

## Dependencies

This layer depends on:
- openembedded-core (meta)
- meta-poky (if based on poky)

## Adding the meta-synos layer

Run the following command to add this layer to your Yocto build:

```bash
bitbake-layers add-layer paths/to/meta-synos
```

## Building SynOS

1. Set the custom distribution in your `conf/local.conf`:
   ```bash
   DISTRO = "synos"
   ```
2. Build the default image:
   ```bash
   bitbake synos-image
   ```
