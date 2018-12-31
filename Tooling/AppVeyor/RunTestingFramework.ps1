#$($env:APPVEYOR_BUILD_FOLDER)/Projects/VisualStudio/maxAutomatedTests/Win32\Debug\maxAutomatedTests.exe
C:/projects/max/Projects/VisualStudio/maxAutomatedTests/Win32\Debug\maxAutomatedTests.exe

$wc = New-Object 'System.Net.WebClient'
$wc.UploadFile("https://ci.appveyor.com/api/testresults/juint/$($env:APPVEYOR_JOB_ID)", (Resolve-Path C:/projects/max/Tooling/AppVeyor/junit-results.xml))
