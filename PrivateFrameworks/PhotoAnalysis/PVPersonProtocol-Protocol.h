//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PVPersonProtocol <NSObject>
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) BOOL isVerified;
@property(readonly, nonatomic) long long verifiedType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) BOOL favorite;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly, nonatomic) NSString *localIdentifier;
- (void)pv_addMergeCandidatePersons:(id <PVFetchResultProtocol>)arg1;
@end

