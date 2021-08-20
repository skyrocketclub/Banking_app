##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Banking_App
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/ugo/Documents/Part_Two
ProjectPath            :=C:/Users/ugo/Documents/Part_Two/ATM
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ugo
Date                   :=20/08/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Banking_App.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Banking.cpp$(ObjectSuffix) $(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) $(IntermediateDirectory)/Printable.cpp$(ObjectSuffix) $(IntermediateDirectory)/Current.cpp$(ObjectSuffix) $(IntermediateDirectory)/Kids.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/Banking.cpp$(ObjectSuffix): Banking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Banking.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Banking.cpp$(DependSuffix) -MM Banking.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Banking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Banking.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Banking.cpp$(PreprocessSuffix): Banking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Banking.cpp$(PreprocessSuffix) Banking.cpp

$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix): Savings.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Savings.cpp$(DependSuffix) -MM Savings.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Savings.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Savings.cpp$(PreprocessSuffix): Savings.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Savings.cpp$(PreprocessSuffix) Savings.cpp

$(IntermediateDirectory)/Printable.cpp$(ObjectSuffix): Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Printable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Printable.cpp$(DependSuffix) -MM Printable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Printable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Printable.cpp$(PreprocessSuffix): Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Printable.cpp$(PreprocessSuffix) Printable.cpp

$(IntermediateDirectory)/Current.cpp$(ObjectSuffix): Current.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Current.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Current.cpp$(DependSuffix) -MM Current.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Current.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Current.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Current.cpp$(PreprocessSuffix): Current.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Current.cpp$(PreprocessSuffix) Current.cpp

$(IntermediateDirectory)/Kids.cpp$(ObjectSuffix): Kids.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Kids.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Kids.cpp$(DependSuffix) -MM Kids.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ugo/Documents/Part_Two/ATM/Kids.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Kids.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Kids.cpp$(PreprocessSuffix): Kids.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Kids.cpp$(PreprocessSuffix) Kids.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


