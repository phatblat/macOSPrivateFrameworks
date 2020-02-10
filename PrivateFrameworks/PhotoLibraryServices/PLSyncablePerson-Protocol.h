//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PLSyncableObject.h"

@class NSString;

@protocol PLSyncablePerson <NSObject, PLSyncableObject>
@property(readonly, nonatomic) BOOL keyFaceIsPicked;
@property(readonly, nonatomic) BOOL isTombstone;
@property(readonly, nonatomic) BOOL graphVerified;
@property(readonly, nonatomic) BOOL userVerified;
@property(retain, nonatomic) NSString *fullName;
@property(retain, nonatomic) NSString *personUUID;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setKeyFaceToPicked;
@end
