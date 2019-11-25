//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISIconsetVariant.h"

@class ISIconset, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ISVariant : NSObject <ISIconsetVariant>
{
    unsigned int _type;
    int _sizeSet;
    NSDictionary *_assetCatalogReference;
    ISIconset *_iconset;
    NSString *_name;
    NSMutableDictionary *_resources;
    ISVariant *_selectedVariant;
}

+ (id)resourceTypes;
@property int sizeSet; // @synthesize sizeSet=_sizeSet;
@property(retain) ISVariant *selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(readonly) NSMutableDictionary *resources; // @synthesize resources=_resources;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) __weak ISIconset *iconset; // @synthesize iconset=_iconset;
@property unsigned int type; // @synthesize type=_type;
@property(retain) NSDictionary *assetCatalogReference; // @synthesize assetCatalogReference=_assetCatalogReference;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)icnsWithFlags:(long long)arg1;
- (struct CGImage *)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 errors:(id *)arg3;
- (BOOL)addResourceWithURL:(id)arg1 resourceInfo:(id)arg2;
- (id)initWithType:(unsigned int)arg1 sizeSet:(int)arg2;
- (id)initWithName:(id)arg1 iconset:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1 scale:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

