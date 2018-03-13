//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface TIAssetAttributes : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_inputModeLevel;
    NSDictionary *_region;
}

+ (BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(CDUnknownBlockType)arg3;
+ (BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4;
+ (BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;
@property(readonly, nonatomic) NSDictionary *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *inputModeLevel; // @synthesize inputModeLevel=_inputModeLevel;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (BOOL)containMatchingAttributes:(id)arg1;
- (BOOL)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(CDUnknownBlockType)arg2;
- (BOOL)containMatchingInputModeLevelIn:(id)arg1;
- (BOOL)containMatchingInputModeLevel:(id)arg1;
- (BOOL)containMatchingTypeIn:(id)arg1;
- (BOOL)containMatchingType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;

@end

