//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMChangeTombstone.h>

@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone
{
    NSDictionary *_persistentHistoryChangeTombstone;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDictionary *persistentHistoryChangeTombstone; // @synthesize persistentHistoryChangeTombstone=_persistentHistoryChangeTombstone;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)shareeOwningListIdentifier;
- (id)daIsEventOnlyContainer;
- (id)externalIdentifier;
- (id)objectIdentifier;
- (id)initWithDictionary:(id)arg1;

@end

