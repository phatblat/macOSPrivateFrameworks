//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, REMFetchMetadata, REMFetchResultToken;

@interface REMFetchResult : NSObject <NSSecureCoding>
{
    long long _type;
    long long _count;
    NSArray *_requestedObjectIDs;
    NSArray *_fetchedAccountStorages;
    NSArray *_fetchedListStorages;
    NSArray *_fetchedReminderStorages;
    REMFetchMetadata *_metadata;
    REMFetchResultToken *_fetchResultToken;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) REMFetchResultToken *fetchResultToken; // @synthesize fetchResultToken=_fetchResultToken;
@property(readonly, nonatomic) REMFetchMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *fetchedReminderStorages; // @synthesize fetchedReminderStorages=_fetchedReminderStorages;
@property(readonly, nonatomic) NSArray *fetchedListStorages; // @synthesize fetchedListStorages=_fetchedListStorages;
@property(readonly, nonatomic) NSArray *fetchedAccountStorages; // @synthesize fetchedAccountStorages=_fetchedAccountStorages;
@property(readonly, nonatomic) NSArray *requestedObjectIDs; // @synthesize requestedObjectIDs=_requestedObjectIDs;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithRequestedObjectIDs:(id)arg1;
- (id)initWithReminderStorages:(id)arg1;
- (id)initWithListStorages:(id)arg1;
- (id)initWithAccountStorages:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 requestedObjectIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithCount:(long long)arg1;
- (id)initWithType:(long long)arg1;

@end

