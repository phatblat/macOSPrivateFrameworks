//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes
{
    unsigned long long _level;
    unsigned long long _face;
}

@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (BOOL)doesSpecifyAllFaces;
- (void)specifyAllFaces;
@property(nonatomic) unsigned long long face;
- (id)init;

@end

