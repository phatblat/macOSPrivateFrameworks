//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface PLSimpleDCIMDirectory : NSObject
{
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    BOOL _representsCameraRoll;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)cloudPlistName;
+ (id)cameraRollPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;
@property(readonly) NSURL *directoryURL; // @synthesize directoryURL=_baseURL;
@property BOOL representsCameraRoll; // @synthesize representsCameraRoll=_representsCameraRoll;
- (void).cxx_destruct;
- (void)reset;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;
- (BOOL)_ensureDirectoryExists:(id)arg1;
- (void)_loadUserInfoLastDirectoryNumber:(id *)arg1 lastFileNumber:(id *)arg2;
- (void)_saveUserInfo;
- (struct _NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1;
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1;
- (id)subDirURLForNumber:(unsigned long long)arg1 create:(BOOL)arg2 didCreate:(char *)arg3;
@property(readonly, retain, nonatomic) NSURL *currentSubDirectory;

@end

