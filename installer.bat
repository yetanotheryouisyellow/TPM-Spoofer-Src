@echo off
cd /
mkdir tpm-spoofer
cd tpm-spoofer
powershell -Command "Invoke-WebRequest https://github.com/Mealmeu/TPM-Spoofer-Src/releases/download/TPM/Mapper.exe -OutFile "Mapper.exe""
powershell -Command "Invoke-WebRequest https://github.com/Mealmeu/TPM-Spoofer-Src/releases/download/TPM/Mapper.exe -OutFile "Tpm.sys""
powershell -Command "Invoke-WebRequest https://github.com/Mealmeu/TPM-Spoofer-Src/releases/download/TPM/Mapper.exe -OutFile "TPMLoader.exe"
call Mapper.exe
call TPMloader.exe
call Tpm.sys
cls 
cd /
::eh its just a basic installer that will also run it just saves a couple of seconds :P
@echo on
exit

