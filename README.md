# Alan's SDCC repo

This is the SDCC svn2git with the Fuzix useful patches added

- Allows .o for object files always
- Supports banked Z80 binaries with an external bank tool
- Puts constants in CONST not sometimes in CODE (needed for banking)

This sdcc is required for Fuzix banked kernels, and will probably soon
become mandatory for Fuzix once I add relocatable binary support and other
things we really want.
