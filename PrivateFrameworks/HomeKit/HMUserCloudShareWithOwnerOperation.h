//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "HMFLogging.h"

@class CKContainer, CKShare, HMUser, NSString;

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging>
{
    CDUnknownBlockType _completion;
    HMUser *_currentUser;
    HMUser *_ownerUser;
    CKShare *_share;
    CKContainer *_container;
}

+ (id)logCategory;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property(retain) CKShare *share; // @synthesize share=_share;
@property(readonly) HMUser *ownerUser; // @synthesize ownerUser=_ownerUser;
@property(readonly) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)main;
- (void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeOwnerAsParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveShareAndObtainSavedOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchParticipantForLookupInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 currentUser:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

