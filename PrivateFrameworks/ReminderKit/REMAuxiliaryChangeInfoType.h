//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REMAuxiliaryChangeInfoObject.h"

@class NSDictionary, NSString, REMObjectID;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject>
{
    REMObjectID *remObjectID;
    NSDictionary *_storage;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (id)cdEntityName;
@property(retain, nonatomic) NSDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) REMObjectID *remObjectID; // @synthesize remObjectID;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithREMObjectID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
