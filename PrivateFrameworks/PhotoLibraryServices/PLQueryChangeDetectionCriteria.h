//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject
{
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

- (void).cxx_destruct;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntitiesAndAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2;
- (void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2;
@property(readonly) BOOL isEmpty;
- (id)description;
- (id)init;

@end
