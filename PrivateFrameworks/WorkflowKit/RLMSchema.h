//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying>
{
    NSArray *_objectSchema;
    struct Schema _objectStoreSchema;
    NSMutableDictionary *_objectSchemaByName;
}

+ (Class)classForString:(id)arg1;
+ (id)dynamicSchemaFromObjectStoreSchema:(const struct Schema *)arg1;
+ (id)sharedSchema;
+ (id)partialPrivateSharedSchema;
+ (id)partialSharedSchema;
+ (id)sharedSchemaForClass:(Class)arg1;
+ (id)schemaWithObjectClasses:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *objectSchemaByName; // @synthesize objectSchemaByName=_objectSchemaByName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Schema)objectStoreCopy;
- (id)description;
- (BOOL)isEqualToSchema:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)schemaForClassName:(id)arg1;
@property(copy, nonatomic) NSArray *objectSchema;
- (id)init;

@end

