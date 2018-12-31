$env:APPVEYOR_BUILD_FOLDER\Projects\VisualStudio\maxAutomatedTests\$env:PLATFORM\$env:CONFIGURATION\maxAutomatedTests.exe

i$wc = New-Object 'System.Net.WebClient'
$wc.UploadFile("https://ci.appveyor.com/api/testresults/juint/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ./junit-results.xml))
