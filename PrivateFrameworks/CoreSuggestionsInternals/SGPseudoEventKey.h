//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGEntityKey.h"

@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey>
{
    NSString *_serialized;
    NSString *_domain;
    NSString *_groupId;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)alternativeKeysForEventKitQuery;
- (BOOL)isDropoff;
- (id)keyForEventKitQuery;
@property(readonly, copy) NSString *description;
- (id)serialize;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToPseudoEventKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithGloballyUniqueId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

