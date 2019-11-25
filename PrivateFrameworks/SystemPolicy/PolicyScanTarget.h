//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PolicyScanTarget : NSObject
{
    NSUUID *_volumeUUID;
    NSString *_pathOnVolume;
    unsigned long long _objectID;
    NSString *_fsTypeName;
    NSString *_volumePath;
    NSString *_blockDevice;
    NSDate *_mountTime;
    NSDate *_modTime;
    NSDate *_chgTime;
    BOOL _checkValidity;
    NSURL *_url;
    NSURL *_mainExecutableURL;
    NSString *_bundleID;
    BOOL _isDirectory;
    struct __CFBundle *_bundle;
    struct __SecCode *_staticCodeRef;
    NSDictionary *_signingInfo;
    NSString *_cdhash;
    NSData *_cdhashData;
    unsigned int _cdhashDigestAlgorithm;
    NSString *_teamID;
    NSString *_signingID;
    BOOL _quarantineChecked;
    BOOL _isQuarantinedMount;
    BOOL _isQuarantined;
    BOOL _isUserApproved;
    BOOL _isScript;
    BOOL _isBundled;
    BOOL _triggeredByLibraryLoad;
    int _pid;
}

@property(readonly, nonatomic) NSDate *mountTime; // @synthesize mountTime=_mountTime;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) BOOL isBundled; // @synthesize isBundled=_isBundled;
@property(nonatomic) BOOL isScript; // @synthesize isScript=_isScript;
@property(readonly, nonatomic) BOOL isQuarantinedMount; // @synthesize isQuarantinedMount=_isQuarantinedMount;
@property(nonatomic) BOOL triggeredByLibraryLoad; // @synthesize triggeredByLibraryLoad=_triggeredByLibraryLoad;
@property(nonatomic) BOOL checkValidity; // @synthesize checkValidity=_checkValidity;
@property(readonly, nonatomic) NSDate *modTime; // @synthesize modTime=_modTime;
@property(readonly, nonatomic) NSString *volumePath; // @synthesize volumePath=_volumePath;
@property(readonly, nonatomic) NSString *fsTypeName; // @synthesize fsTypeName=_fsTypeName;
@property(readonly, nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSString *blockDevice; // @synthesize blockDevice=_blockDevice;
@property(readonly, nonatomic) NSString *pathOnVolume; // @synthesize pathOnVolume=_pathOnVolume;
@property(readonly, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isUserApproved;
@property(readonly, nonatomic) BOOL isQuarantined;
@property(readonly, nonatomic) NSString *signingID;
@property(readonly, nonatomic) NSString *teamID;
@property(readonly, nonatomic) unsigned int cdhashDigestAlgorithm;
@property(readonly, nonatomic) NSData *cdhashData;
@property(readonly, nonatomic) NSString *cdhash;
- (id)signingInfo;
@property(readonly, nonatomic) const struct __SecCode *staticCodeRef;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSURL *mainExecutableURL;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

