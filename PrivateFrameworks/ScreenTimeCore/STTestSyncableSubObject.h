//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "STSyncableSubObject.h"

@class NSString, STTestSyncableObject;

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>
{
}

@property(readonly) id <STSerializableManagedObject> syncableRootObject;

// Remaining properties
@property(nonatomic) BOOL active; // @dynamic active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) STTestSyncableObject *root; // @dynamic root;
@property(readonly) Class superclass;

@end
