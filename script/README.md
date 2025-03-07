### **Linux Instructions**

#### 1. Open the terminal (:term)  
*(Optional if you need to use `iostream` in your C++ file)*  
```bash
:term
```

#### 2. Make the script executable  
```bash
chmod +x [script_name].sh
```

#### 3. Compile the script with a given file  
```bash
./[script_name].sh /path/to/file.cpp
```

#### 4. Run the executable  
```bash
./[file_name]
```

---

### **Windows Batch (CMD) Instructions**

#### 1. Open Command Prompt  
Navigate to the directory where the script is located:  
```cmd
cd C:\path\to\your\script
```

#### 2. Run the script with a C++ file  
```cmd
compile_and_run.bat C:\path\to\your\file.cpp
```

#### 3. Run the executable  
The script will automatically compile and run the file if there are no errors.

---

### **Windows (PowerShell) Instructions**

#### 1. Open PowerShell  
You can open PowerShell in the script directory or navigate to the directory using:  
```powershell
cd "C:\path\to\your\script"
```

#### 2. Allow script execution *(Run once if needed)*  

##### Command Prompt (Invoke)
```cmd
powershell -Command "Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser"
```

##### PowerShell
```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```

#### 3. Run the script with a C++ file  

##### Command Prompt (Invoke)
```cmd
powershell -File "C:\path\to\compile_and_run.ps1" "C:\path\to\your\file.cpp"
```

##### PowerShell
```powershell
.\[script_name].ps1 "C:\path\to\file.cpp"
```

#### 4. Run the executable  
The script will automatically compile and run the file if there are no errors.

