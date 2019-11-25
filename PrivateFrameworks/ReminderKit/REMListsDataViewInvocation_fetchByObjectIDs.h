//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface REMListsDataViewInvocation_fetchByObjectIDs : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_objectIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;

@end

