//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PRLikenessCacheContext : NSObject
{
    BOOL _circular;
    BOOL _forceDecode;
    unsigned long long _cacheSize;
    double _scale;
}

+ (id)contextWithCacheSize:(unsigned long long)arg1;
@property BOOL forceDecode; // @synthesize forceDecode=_forceDecode;
@property double scale; // @synthesize scale=_scale;
@property BOOL circular; // @synthesize circular=_circular;
@property unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (id)init;

@end

