//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@class NSMutableDictionary;

@interface RDFileManager : NSFileManager
{
    id <RKFMFilter> m_filter;
    NSMutableDictionary *m_attCache;
}

+ (id)fileSafeName:(id)arg1;
+ (id)fileSafeNameForString:(id)arg1;
+ (void)purge;
+ (id)pathSeparator;
+ (id)defaultManager;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)removeFilesButNotFoldersAtPath:(id)arg1;
- (BOOL)copyFilesAtPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 object:(id)arg4;
- (BOOL)copyFilesAtPath:(id)arg1 toPath:(id)arg2;
- (id)fileType:(id)arg1;
- (void)directoryEntriesAtPath:(id)arg1 files:(id *)arg2 folders:(id *)arg3 attributes:(id *)arg4 filterDelegate:(id)arg5;
- (void)directoryEntriesAtPath:(id)arg1 files:(id *)arg2 folders:(id *)arg3 attributes:(id *)arg4;
- (void)directoryEntriesAtPath:(id)arg1 files:(id *)arg2 folders:(id *)arg3;
- (void)networkDirectoryEntriesAtPath:(id)arg1 files:(id *)arg2 folders:(id *)arg3 attributes:(id *)arg4 filterDelegate:(id)arg5;
- (BOOL)folderExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (id)directoryEntriesAtPath:(id)arg1;
- (id)ensureUniquePath:(id)arg1 andAlternateExtensions:(id)arg2;
- (id)ensureUniquePath:(id)arg1 andAlternateExtension:(id)arg2;
- (id)ensureUniquePath:(id)arg1 relativeToPath:(id)arg2;
- (id)ensureUniquePath:(id)arg1;
- (id)uniqueFileSystemNameForPath:(id)arg1 withAlternateExtensions:(id)arg2;
- (id)uniqueFileSystemNameForPath:(id)arg1 withAlternateExtension:(id)arg2;
- (id)uniqueFileSystemName:(id)arg1 inDirectory:(id)arg2;
- (void)setFilter:(id)arg1;
- (id)deleteContentsOfFolderAtPath:(id)arg1;
- (void)deleteFoldersAtPathsIfEmpty:(id)arg1;
- (BOOL)deleteFolderAtPathIfEmpty:(id)arg1;
- (BOOL)createDirectoriesAtPath:(id)arg1 attributes:(id)arg2;
- (void)cancelPurge;
- (void)purgeAttributeCache;

@end

