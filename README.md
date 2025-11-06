# Keymap for Halcyon Kyria (rev4) from splitkb.com

## Changelog
v1.6 - Added a key for “Sleep”

## Installation
1. Install QMK with `brew install qmk`
2. Install correct version of Python with `brew install python@3.13`
3. Go to `cd ~/-repos` and run `qmk setup`
4. Select option to clone the `qmk_firmware` repository
5. Change QMK home directory with `qmk setup -H /Users/{user name}/-repos/qmk_firmware`
6. Go to `cd /Users/{user name}/-repos/qmk_firmware/keyboards/splitkb/halcyon/kyria/keymaps/` folder and `git clone` this repository
7. To compile, run `qmk compile -c -kb splitkb/halcyon/kyria/rev4 -km qmk-kyria-rev4`
