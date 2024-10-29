#pragma once

#include "main.h"

using namespace std;

void TPMClean()
{
    cout << "[/] Delete specific registry values" << endl;
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\" /v \"WindowsAIKHash\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\" /v \"TaskManufacturerId\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\" /v \"TaskInformationFlags\" /f");

    cout << "[/] Delete Sub-keys" << endl;
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\TaskStates\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\PlatformQuoteKeys\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Endorsement\\EKCertStoreECC\\Certificates\" /f");

    cout << "[/] Delete more specific registry values" << endl;
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Endorsement\" /v \"EkRetryLast\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Endorsement\" /v \"EKPub\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Endorsement\" /v \"EkNoFetch\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Endorsement\" /v \"EkTries\" /f");

    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\Parameters\\Wdf\" /v \"TimeOfLastTelemetry\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\Admin\" /v \"SRKPub\" /f");

    cout << "[/] Delete more Sub-Keys" << endl;
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI\\User\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\KeyAttestationKeys\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\Enum\" /f");
    system("reg delete \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\TPM\\ODUID\" /f");

    cout << "[+] Clean Done!" << endl;
}
