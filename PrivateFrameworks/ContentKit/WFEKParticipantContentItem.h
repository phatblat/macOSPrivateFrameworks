//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import "WFContentItemClass.h"

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)possibleStatuses;
+ (id)possibleRoles;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
- (BOOL)isCurrentUser;
- (id)status;
- (id)role;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)canGenerateContact;
- (id)participant;

@end

