//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface BRCDatabaseBackupManager : NSObject
{
    NSURL *_userURL;
    NSURL *_outputUserURL;
    NSURL *_destinationDirectory;
}

@property(retain, nonatomic) NSURL *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(retain, nonatomic) NSURL *outputUserURL; // @synthesize outputUserURL=_outputUserURL;
@property(retain, nonatomic) NSURL *userURL; // @synthesize userURL=_userURL;
- (void).cxx_destruct;
- (void)cleanOnDisk;
- (BOOL)enumerateURL:(id)arg1 rootURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)enumerateRootURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *urlPropertiesToFetch;
@property(readonly, nonatomic) NSURL *databaseURL;
- (id)desiredBackupDataDirectoryForUserURL:(id)arg1;
- (void)backUpWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;

@end
