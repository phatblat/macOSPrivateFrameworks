//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURL;

@interface WFFileCoder : NSObject <NSSecureCoding>
{
    NSURL *_sharedDirectory;
    NSURL *_sharedTemporaryDirectory;
    long long _deletionResponsibility;
    long long _targetPlatform;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedDirectoryFileArchiver;
@property(nonatomic) long long targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property(nonatomic) long long deletionResponsibility; // @synthesize deletionResponsibility=_deletionResponsibility;
@property(copy, nonatomic) NSURL *sharedTemporaryDirectory; // @synthesize sharedTemporaryDirectory=_sharedTemporaryDirectory;
@property(copy, nonatomic) NSURL *sharedDirectory; // @synthesize sharedDirectory=_sharedDirectory;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)waitForFileAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)decodeFileWithCoder:(id)arg1 fileIsTemporary:(char *)arg2;
- (void)archiveFileAtURL:(id)arg1 fileIsTemporary:(BOOL)arg2 withCoder:(id)arg3;

@end

