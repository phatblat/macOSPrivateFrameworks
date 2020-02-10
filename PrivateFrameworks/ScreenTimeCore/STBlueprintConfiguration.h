//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "STSyncableSubObject.h"
#import "STUniquelySerializableManagedObject.h"

@class NSData, NSString, STBlueprint;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>
{
}

+ (id)blueprintConfigurationTypeForDeclaration:(id)arg1;
+ (Class)cemDeclarationClassForConfigurationType:(id)arg1;
+ (id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)setCemConfiguration:(id)arg1;
- (id)cemConfiguration;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) STBlueprint *blueprint; // @dynamic blueprint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *payloadPlist; // @dynamic payloadPlist;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
