//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocationResult.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>
{
    NSArray *_accountStorages;
    NSArray *_listStorages;
    NSArray *_reminderStorages;
    NSArray *_objectIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(readonly, nonatomic) NSArray *reminderStorages; // @synthesize reminderStorages=_reminderStorages;
@property(readonly, nonatomic) NSArray *listStorages; // @synthesize listStorages=_listStorages;
@property(readonly, nonatomic) NSArray *accountStorages; // @synthesize accountStorages=_accountStorages;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4;

@end
