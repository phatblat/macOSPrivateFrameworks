//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

#import "LiLibrarySchema.h"

@class NSError, NSString;

@interface LiUpgradeFinishedRequest : LiRequest <LiLibrarySchema>
{
    NSError *_upgradeError;
    long long _libraryVersion;
    long long _libraryCompatibleBackToVersion;
    NSString *_schemaDigest;
}

+ (unsigned char)encodingObjectType;
+ (BOOL)requiresLibrary;
@property(retain, nonatomic) NSString *schemaDigest; // @synthesize schemaDigest=_schemaDigest;
@property(nonatomic) long long libraryCompatibleBackToVersion; // @synthesize libraryCompatibleBackToVersion=_libraryCompatibleBackToVersion;
@property(nonatomic) long long libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(readonly, nonatomic) NSError *upgradeError; // @synthesize upgradeError=_upgradeError;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithLibrarySchema:(id)arg1 upgradeError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
