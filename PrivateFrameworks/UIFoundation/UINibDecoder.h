//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder
{
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class *classes;
    id *missingClasses;
    struct UINibDecoderObjectEntry *objects;
    struct UINibDecoderValue *values;
    char *valueTypes;
    void *valueData;
    unsigned long long valueDataSize;
    struct UINibDecoderHeader header;
    id *objectsByObjectID;
    unsigned int *longObjectClassIDs;
    char *shortObjectClassIDs;
    unsigned int *keyMasks;
    long long inlinedValueKey;
    struct UINibDecoderRecursiveState recursiveState;
    UINibStringIDTable *keyIDTable;
    id delegate;
    struct UIKeyToKeyIDCache keyIDCache;
    struct UIKeyAndScopeToValueCache valueCache;
    long long lookupRounds;
    long long maxPossibleLookupRounds;
    long long failedByKeyMask;
    long long savedByKeyMask;
}

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
@property id delegate; // @synthesize delegate;
- (void)finishDecoding;
- (long long)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)decodePropertyList;
- (id)decodeObject;
- (id)decodeDataObject;
- (id)decodeNXObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (BOOL)decodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
@property(readonly, nonatomic) long long uniqueIDForCurrentlyDecodingObject;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)nextGenericKey;
- (BOOL)validateAndIndexKeys:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexValues:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexObjects:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexClasses:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)validateAndIndexData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isReusable) BOOL reusable;
- (void)dealloc;
- (id)initForReadingWithData:(id)arg1;
- (id)initForReadingWithData:(id)arg1 error:(id *)arg2;

@end

