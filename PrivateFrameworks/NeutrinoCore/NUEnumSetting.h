//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSArray, NSString;

@interface NUEnumSetting : NUSetting
{
    NSArray *_values;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
@property(readonly) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (BOOL)validateValues:(out id *)arg1;
- (BOOL)isValid:(out id *)arg1;
- (BOOL)validate:(id)arg1 error:(out id *)arg2;
@property(readonly) NSString *defaultValue;
- (id)description;
- (id)initWithValues:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

