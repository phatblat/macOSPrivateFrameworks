//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIIDSAvailabilityProvider.h"

@class CNCache, NSArray, NSString;

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider>
{
    id <CNUIIDSIDQueryControllerWrapper> _queryControllerWrapper;
    CNCache *_faceTimeRequests;
    CNCache *_iMessageRequests;
    NSArray *_requestFutures;
    id <CNScheduler> _resourceLock;
}

@property(retain, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(retain, nonatomic) NSArray *requestFutures; // @synthesize requestFutures=_requestFutures;
@property(retain, nonatomic) CNCache *iMessageRequests; // @synthesize iMessageRequests=_iMessageRequests;
@property(retain, nonatomic) CNCache *faceTimeRequests; // @synthesize faceTimeRequests=_faceTimeRequests;
@property(retain, nonatomic) id <CNUIIDSIDQueryControllerWrapper> queryControllerWrapper; // @synthesize queryControllerWrapper=_queryControllerWrapper;
- (void).cxx_destruct;
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;
- (id)init;
- (id)initWithQueryControllerWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

