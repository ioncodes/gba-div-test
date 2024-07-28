Super basic trace (taken from Mesen2) & test rom of a DIV SWI. Needed it to figure out why my implementation would infinitely loop when doing the supervisor call.
* `out/rom.gba`: Prebuilt test rom
* `logs/mesen2 full.7z`: A trace starting at 0x0 (BIOS)
* `logs/mesen2 rom only.log`: A trace starting at the cartridge entry
* `logs/mesen2 swi only.log`: A trace starting at the `swi` instruction
