//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding>
{
    int _style;
    int _size;
    int _scale;
    NSNumber *_version;
    NSURL *_baseURL;
    NSURL *_localizationURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSURL *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, nonatomic) int scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)init;

@end

