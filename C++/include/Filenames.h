/* 
 * File:   Filenames.h
 * Author: Richard Greene
 * 
 * Names of named pipes and other shared files.
 *
 * Created on May 19, 2014, 11:17 AM
 */

#ifndef FILENAMES_H
#define	FILENAMES_H

#define FIRMWARE_VERSION ("0.1.0.0\n")
#define BOARD_SERIAL_NUM_FILE ("/sys/bus/i2c/devices/0-0050/eeprom")

#define PRINTER_STATUS_PIPE ("/tmp/PrinterStatusPipe")
#define COMMAND_PIPE ("/tmp/CommandPipe")
#define COMMAND_RESPONSE_PIPE ("/tmp/CommandResponsePipe")
#define STATUS_TO_WEB_PIPE ("/tmp/StatusToWebPipe")

#define ROOT_DIR "/smith"

#define IMAGE_EXTENSION "png"
#define IMAGE_FILE_FILTER ("/*." IMAGE_EXTENSION)

#define PRINT_FILE_EXTENSION "tar.gz"
#define PRINT_FILE_FILTER ("/*." PRINT_FILE_EXTENSION)

#define SLICE_IMAGE_PREFIX "slice"

#define TEST_PATTERN_FILE "/TestPattern.png"
#define TEST_PATTERN (ROOT_DIR TEST_PATTERN_FILE)

#define SETTINGS_FILE "/settings"
#define SETTINGS_SUB_DIR "/config"
#define SETTINGS_PATH (ROOT_DIR SETTINGS_SUB_DIR SETTINGS_FILE)

#endif	/* FILENAMES_H */

