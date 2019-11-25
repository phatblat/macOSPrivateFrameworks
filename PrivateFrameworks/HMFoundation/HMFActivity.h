//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"
#import "HMFObject.h"

@class HMFUnfairLock, NSArray, NSDate, NSMutableSet, NSObject<OS_os_activity>, NSObject<OS_voucher>, NSString, NSUUID;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject>
{
    HMFUnfairLock *_lock;
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    BOOL _valid;
    NSUUID *_identifier;
    HMFActivity *_parent;
    NSString *_name;
    unsigned long long _options;
    NSArray *_internalAssertions;
    NSDate *_startDate;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (id)currentActivity;
+ (void)initialize;
+ (id)bundleIdentifier;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)activityWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *internalAssertions; // @synthesize internalAssertions=_internalAssertions;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak HMFActivity *parent; // @synthesize parent=_parent;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)blockWithQualityOfService:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)blockWithBlock:(CDUnknownBlockType)arg1;
- (void)markWithReason:(id)arg1;
- (void)markWithFormat:(id)arg1;
- (void)mark;
- (void)end;
- (void)begin;
@property(readonly) unsigned long long assertions;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (void)invalidate;
@property(readonly, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

