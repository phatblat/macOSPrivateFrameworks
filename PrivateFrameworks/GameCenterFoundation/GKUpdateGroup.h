//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSLock, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface GKUpdateGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_notifiers;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1;
+ (id)updateGroup;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *notifiers; // @synthesize notifiers=_notifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long updateCount;
- (void)cancelUpdates;
- (void)applyUpdates;
- (void)wait;
- (void)joinAndApplyUpdates;
- (void)joinApplyUpdatesAndDo:(CDUnknownBlockType)arg1;
- (void)join:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;

@end

