//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding>
{
    unsigned char _format;
    double _scale;
    struct CGColor *_formatColor;
    NSData *_data;
    struct CGSize _size;
}

+ (BOOL)supportsSecureCoding;
+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct CGColor *formatColor; // @synthesize formatColor=_formatColor;
@property(nonatomic) unsigned char format; // @synthesize format=_format;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

