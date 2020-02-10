//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@class MSVSegmentedCodingPackage, NSDictionary, NSMutableDictionary;

@interface MSVSegmentedEncoder : NSCoder
{
    BOOL _hasFinished;
    MSVSegmentedCodingPackage *_package;
    id <MSVSegmentedCoding> _rootObject;
    NSMutableDictionary *_subcoders;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableDictionary *subcoders; // @synthesize subcoders=_subcoders;
@property(retain, nonatomic) id <MSVSegmentedCoding> rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) MSVSegmentedCodingPackage *package; // @synthesize package=_package;
@property(nonatomic) BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
- (void).cxx_destruct;
- (id)_coderForKey:(id)arg1;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)finishEncoding;
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2;
- (id)initWithCodingPackage:(id)arg1;

@end
