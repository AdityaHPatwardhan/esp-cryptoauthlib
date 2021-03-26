# ESP cryptoauth utility firmware
This is the source code for the firmware used in the "esp_cryptpauth_utility". It is recommended to use the pre-built binaries kept in the "sample_bins" folder. Only when pre-built binaries do not satisfy your use-case then you should build the firmaware.

## Steps to build the firmware
1) Select the appropriate I2C SDA and SCL pins of your esp device to which the Secure element (ATECC608A) is going to be connected. That can be done in meuconfig:

    `Component config > esp-cryptoauthlib-> I2C SDA/SCL pin`.

2) Build the project using:
```
idf.py build
```
this will build an elf image named "ecu_firmware.elf".

3) convert the elf image to binary with following command:
```
esptool.py --chip esp32 elf2image build/ecu_firmware.elf
```
This will create `ecu_firmware.bin` from the `ecu_firmware.elf` in the build folder.

4) The generated binary file can be used with the "esp_cryptoauth_utility" with the following command:
```
python secure_cert_mfg.py --flash /* path to ecu_firmware.bin */ /* other options */
```
## (optional)

* The debug logs for the utility can be turned on by enabling following option in menuconfig:

    `ECU Configurations->esp_cryptoauth_utililty Debug`.
