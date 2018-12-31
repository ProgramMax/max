C:/projects/max/Projects/VisualStudio/maxAutomatedTests/Win32\Debug\maxAutomatedTests.exe

i$wc = New-Object 'System.Net.WebClient'
$wc.UploadFile("https://ci.appveyor.com/api/testresults/juint/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ./junit-results.xml))
