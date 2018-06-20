//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DEUtils : NSObject
{
}

+ (id)processErrorResponse:(id)arg1;
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;
+ (void)removeFile:(id)arg1;
+ (id)uniqueDateString;
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3;
+ (id)userFileAttributes;
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;
+ (id)userLibraryDirectoryForApp:(id)arg1;
+ (id)lsDir:(id)arg1;
+ (id)lsDir:(id)arg1 sorted:(BOOL)arg2;
+ (id)findAllfiles:(id)arg1;
+ (id)findAllItems:(id)arg1 includeDirs:(BOOL)arg2;
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(BOOL)arg3;
+ (BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2 withNewFileName:(id)arg3;
+ (BOOL)copyFile:(id)arg1 toDir:(id)arg2;
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3;
+ (BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(BOOL)arg3;
+ (BOOL)isValidDirectory:(id)arg1;
+ (id)dirForTarGz:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(BOOL)arg2;
+ (id)tarGzForDirectoryUrl:(id)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (unsigned long long)getDirectorySize:(id)arg1;
+ (unsigned long long)getFileSystemItemSize:(id)arg1;

@end

