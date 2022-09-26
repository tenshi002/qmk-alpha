SRC += muse.c

# Cause the final step to take longer, but should get you a smaller compiled size.
# This also disables Action Functions, and Action Macros, both of which are deprecated.
# This will get you the most savings, in most situations.
LTO_ENABLE = yes

# Disables some of the functionality that you may not need.
# But note that extrakeys disables stuff like the media keys and system volume control.
CONSOLE_ENABLE = no				# Console for debug
COMMAND_ENABLE = no				# Commands for debug and configuration
MOUSEKEY_ENABLE = no			# Mouse keys
EXTRAKEY_ENABLE = yes			# Audio control and System control


BOOTMAGIC_ENABLE = no			# Enable Bootmagic Lite

AUDIO_ENABLE = yes				# Audio output
RGBLIGHT_ENABLE = yes			# Enable WS2812 RGB underlight.
BACKLIGHT_ENABLE = no			# Enable keyboard backlight functionality
MUSIC_ENABLE = no
