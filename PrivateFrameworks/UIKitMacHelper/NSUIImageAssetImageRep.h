//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageRep.h"

__attribute__((visibility("hidden")))
@interface NSUIImageAssetImageRep : NSImageRep
{
    id <NSUIImageAsset> _imageAsset;
    id <NSUIImageConfiguration> _configuration;
}

- (void).cxx_destruct;
- (BOOL)draw;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithImageAsset:(id)arg1 configuration:(id)arg2 size:(struct CGSize)arg3;

@end

