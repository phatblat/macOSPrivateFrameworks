//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolFloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    float _values[2];
    char _valueSet[2];
}

- (void)removeAll;
- (void)removeFloatForKey:(BOOL)arg1;
- (void)setFloat:(float)arg1 forKey:(BOOL)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_319e3a73 *)arg1 forGPBGenericValueKey:(CDUnion_319e3a73 *)arg2;
- (BOOL)getFloat:(float *)arg1 forKey:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFloats:(const float *)arg1 forKeys:(const char *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

